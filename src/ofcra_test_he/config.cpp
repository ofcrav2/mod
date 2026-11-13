/*
    OFCRA TEST - 12 cm HE fragment damage + 12 cm HEAT (penetrator, no fragments) variants.  TEMPORARY: delete when done.

    #1  12 cm HE (OFCRA_12cm_BASE, fired by Leopard / M1A1 HE). Lower calibre (shell 1, fragments 0.5) and own
        fragment class, so the 15 cm HE is untouched.
            stock : calibre 12 / 4,   fragment hit 300
            A     : calibre 1 / 0.5,  fragment hit 150   (1/2)   <- picked
            B     : calibre 1 / 0.5,  fragment hit 100   (1/3)
            C     : calibre 1 / 0.5,  fragment hit 75    (1/4)
        Test magazines OFCRA_TEST_HE_A/B/C_mag (8 rounds, 1410 m/s like rhs_mag_M1069).

    #2  12 cm HEAT, round 2. Last round's penetrators never showed any effect (probably never spawned) and fragments
        can't be chained off a penetrator. So: NO fragments, just
          - the shell's own direct hit (hit, calibre 40 like the current OFCRA HEAT),
          - a small blast, sized off the OFCRA GMG grenade (indirectHit 2.322, radius 4.236 m): same radius,
            3x (7) or 4x (9.3) the damage. Arma blast is full inside the radius and falls off with distance^4
            beyond it, so it still reaches out to ~4x the radius:
                       at  4.2 m   6 m    8.5 m   13 m   17 m
                 3x  (7)   7      1.7    0.44   0.09   0.03
                 4x (9.3)  9.3    2.3    0.58   0.12   0.04
          - ONE penetrator, spawned on impact along the shell's line at 1000 m/s, the way vanilla 120 mm HEAT does
            it. The shell is now based on vanilla Sh_120mm_HE (no inherited fragment cone to fight with) and the
            penetrator lives 0.04 s (~40 m) - last round's 0.015 s was shorter than one frame, which may be why
            it never did anything.
        Penetration ~ calibre x speed, so the calibre steps are the "can it get through an M1A1" knob,
        and the penetrator hit is the "how much does it wreck once inside" knob:

                 shell hit   blast        penetrator calibre / hit
            H-A    600       7 / 4.2 m      45 / 250
            H-B    600       7 / 4.2 m      70 / 250
            H-C    600       7 / 4.2 m     100 / 250
            H-D    600       7 / 4.2 m      45 / 500
            H-E    600       7 / 4.2 m      70 / 500
            H-F    600       7 / 4.2 m     100 / 500
            H-G   1000     9.3 / 4.2 m      70 / 500      (everything high)

        Test magazines OFCRA_TEST_HEAT_A_mag ... _G_mag = copies of the Leopard's BWA3_1Rnd_MZ_shells (same speed).

    No vehicle changes (Leopard and M1A1 stock).
*/
class CfgPatches
{
    class ofcra_test_he
    {
        author = "OFCRA Wombat";
        skipWhenMissingDependencies = 1;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"ofcra_ammo_base", "ofcra_bw_mod_pzh2000"};
    };
};

class CfgAmmo
{
    // ---------------- #1 HE
    class OFCRA_MEDIUM_VEHICLE_DESTRUCTION;
    class OFCRA_TEST_FRAG_A: OFCRA_MEDIUM_VEHICLE_DESTRUCTION { caliber = 0.5; hit = 150; };
    class OFCRA_TEST_FRAG_B: OFCRA_MEDIUM_VEHICLE_DESTRUCTION { caliber = 0.5; hit = 100; };
    class OFCRA_TEST_FRAG_C: OFCRA_MEDIUM_VEHICLE_DESTRUCTION { caliber = 0.5; hit = 75; };

    class OFCRA_12cm_BASE;
    class OFCRA_TEST_12cm_HE_A: OFCRA_12cm_BASE
    {
        caliber = 1;
        submunitionAmmo[] = {"OFCRA_TEST_FRAG_A", 0.75, "OFCRA_HE_LOW_DAMAGE", 0.25};
    };
    class OFCRA_TEST_12cm_HE_B: OFCRA_12cm_BASE
    {
        caliber = 1;
        submunitionAmmo[] = {"OFCRA_TEST_FRAG_B", 0.75, "OFCRA_HE_LOW_DAMAGE", 0.25};
    };
    class OFCRA_TEST_12cm_HE_C: OFCRA_12cm_BASE
    {
        caliber = 1;
        submunitionAmmo[] = {"OFCRA_TEST_FRAG_C", 0.75, "OFCRA_HE_LOW_DAMAGE", 0.25};
    };

    // ---------------- #2 HEAT
    class BulletBase;
    // penetrator ("jet"): invisible, straight, 1000 m/s, ~40 m life. damage = hit, armour penetration ~ calibre
    class OFCRA_TEST_HEAT_PEN_BASE: BulletBase
    {
        model = "\A3\Weapons_f\empty";
        caliber = 45;
        hit = 250;
        indirectHit = 0;
        indirectHitRange = 0;
        typicalSpeed = 1000;
        airFriction = 0;
        timeToLive = 0.04;
        deflecting = 0;
        explosive = 0;
        warheadName = "HEAT";
        audibleFire = 0;
        visibleFire = 0;
        ace_frag_enabled = 0;
        ace_frag_force = 0;
    };
    class OFCRA_TEST_HEAT_PEN_A: OFCRA_TEST_HEAT_PEN_BASE { caliber = 45;  hit = 250; };
    class OFCRA_TEST_HEAT_PEN_B: OFCRA_TEST_HEAT_PEN_BASE { caliber = 70;  hit = 250; };
    class OFCRA_TEST_HEAT_PEN_C: OFCRA_TEST_HEAT_PEN_BASE { caliber = 100; hit = 250; };
    class OFCRA_TEST_HEAT_PEN_D: OFCRA_TEST_HEAT_PEN_BASE { caliber = 45;  hit = 500; };
    class OFCRA_TEST_HEAT_PEN_E: OFCRA_TEST_HEAT_PEN_BASE { caliber = 70;  hit = 500; };
    class OFCRA_TEST_HEAT_PEN_F: OFCRA_TEST_HEAT_PEN_BASE { caliber = 100; hit = 500; };

    // the shell: vanilla 120 mm HE body (no fragment cone), OFCRA explosion look, penetrator spawned on impact
    class Sh_120mm_HE;
    class OFCRA_TEST_12cm_HEAT_A: Sh_120mm_HE
    {
        displayName = "TEST 12cm HEAT";
        displayNameShort = "TEST HEAT";
        hit = 600;
        caliber = 40;
        indirectHit = 7;              // 3x OFCRA GMG
        indirectHitRange = 4.236;     // = OFCRA GMG
        explosive = 0.8;
        deflecting = 0;
        warheadName = "HEAT";
        ace_frag_enabled = 0;
        ace_frag_force = 0;
        ExplosionEffects = "OFCRA_EXPLOSION";
        CraterEffects = "OFCRA_CRATER";

        triggerOnImpact = 1;
        deleteParentWhenTriggered = 0;
        submunitionAmmo = "OFCRA_TEST_HEAT_PEN_A";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        submunitionInitialOffset[] = {0, 0, -0.2};
    };
    class OFCRA_TEST_12cm_HEAT_B: OFCRA_TEST_12cm_HEAT_A { submunitionAmmo = "OFCRA_TEST_HEAT_PEN_B"; };
    class OFCRA_TEST_12cm_HEAT_C: OFCRA_TEST_12cm_HEAT_A { submunitionAmmo = "OFCRA_TEST_HEAT_PEN_C"; };
    class OFCRA_TEST_12cm_HEAT_D: OFCRA_TEST_12cm_HEAT_A { submunitionAmmo = "OFCRA_TEST_HEAT_PEN_D"; };
    class OFCRA_TEST_12cm_HEAT_E: OFCRA_TEST_12cm_HEAT_A { submunitionAmmo = "OFCRA_TEST_HEAT_PEN_E"; };
    class OFCRA_TEST_12cm_HEAT_F: OFCRA_TEST_12cm_HEAT_A { submunitionAmmo = "OFCRA_TEST_HEAT_PEN_F"; };
    class OFCRA_TEST_12cm_HEAT_G: OFCRA_TEST_12cm_HEAT_A
    {
        hit = 1000;
        indirectHit = 9.3;            // 4x OFCRA GMG
        submunitionAmmo = "OFCRA_TEST_HEAT_PEN_E";
    };
};

class CfgMagazines
{
    // ---------------- #1 HE
    class VehicleMagazine;
    class OFCRA_TEST_HE_A_mag: VehicleMagazine
    {
        scope = 2;
        displayName = "TEST 12cm HE A (frag dmg 1/2)";
        displayNameShort = "TEST HE A";
        ammo = "OFCRA_TEST_12cm_HE_A";
        count = 8;
        initSpeed = 1410;
    };
    class OFCRA_TEST_HE_B_mag: OFCRA_TEST_HE_A_mag
    {
        displayName = "TEST 12cm HE B (frag dmg 1/3)";
        displayNameShort = "TEST HE B";
        ammo = "OFCRA_TEST_12cm_HE_B";
    };
    class OFCRA_TEST_HE_C_mag: OFCRA_TEST_HE_A_mag
    {
        displayName = "TEST 12cm HE C (frag dmg 1/4)";
        displayNameShort = "TEST HE C";
        ammo = "OFCRA_TEST_12cm_HE_C";
    };

    // ---------------- #2 HEAT (copies of the Leopard's HEAT magazine: same muzzle speed)
    class BWA3_1Rnd_MZ_shells;
    class OFCRA_TEST_HEAT_A_mag: BWA3_1Rnd_MZ_shells
    {
        scope = 2;
        displayName = "TEST 12cm HEAT A (pen 45 / 250)";
        displayNameShort = "TEST HEAT A";
        ammo = "OFCRA_TEST_12cm_HEAT_A";
    };
    class OFCRA_TEST_HEAT_B_mag: OFCRA_TEST_HEAT_A_mag { displayName = "TEST 12cm HEAT B (pen 70 / 250)";  displayNameShort = "TEST HEAT B"; ammo = "OFCRA_TEST_12cm_HEAT_B"; };
    class OFCRA_TEST_HEAT_C_mag: OFCRA_TEST_HEAT_A_mag { displayName = "TEST 12cm HEAT C (pen 100 / 250)"; displayNameShort = "TEST HEAT C"; ammo = "OFCRA_TEST_12cm_HEAT_C"; };
    class OFCRA_TEST_HEAT_D_mag: OFCRA_TEST_HEAT_A_mag { displayName = "TEST 12cm HEAT D (pen 45 / 500)";  displayNameShort = "TEST HEAT D"; ammo = "OFCRA_TEST_12cm_HEAT_D"; };
    class OFCRA_TEST_HEAT_E_mag: OFCRA_TEST_HEAT_A_mag { displayName = "TEST 12cm HEAT E (pen 70 / 500)";  displayNameShort = "TEST HEAT E"; ammo = "OFCRA_TEST_12cm_HEAT_E"; };
    class OFCRA_TEST_HEAT_F_mag: OFCRA_TEST_HEAT_A_mag { displayName = "TEST 12cm HEAT F (pen 100 / 500)"; displayNameShort = "TEST HEAT F"; ammo = "OFCRA_TEST_12cm_HEAT_F"; };
    class OFCRA_TEST_HEAT_G_mag: OFCRA_TEST_HEAT_A_mag { displayName = "TEST 12cm HEAT G (shell 1000, blast 4x, pen 70 / 500)"; displayNameShort = "TEST HEAT G"; ammo = "OFCRA_TEST_12cm_HEAT_G"; };
};

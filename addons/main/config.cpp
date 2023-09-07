#include "BIS_AddonInfo.hpp"
class CfgPatches {
    class lambs_rpg {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.82;
        requiredAddons[] = {
            "A3_Weapons_F",
            "A3_Weapons_F_Exp",
            "A3_Weapons_F_Tank"
        };
        version = "1.52";
        versionStr = "1.52";
        author = "nkenny";
        authorUrl = "http://www.nopryl.no";
    };
};

class Mode_SemiAuto;
class CfgWeapons {
    class LauncherCore;
    class Launcher;
    class Launcher_Base_F: Launcher {
        class WeaponSlotsInfo;
    };
    //class Launcher_Base_F;
    class Launch_RPG7_F : Launcher_Base_F {
        class Single : Mode_SemiAuto {
            dispersion = 0.018;
            aiDispersionCoefX = 1.8;
            aiDispersionCoefY = 2.4;
            aiRateOfFire = 5;
            aiRateOfFireDispersion = 5;
            aiRateOfFireDistance = 450;
            maxRange = 450;
            maxRangeProbab = 1.8;
            midRange = 200;
            midRangeProbab = 2.5;
            minRange = 5;
            minRangeProbab = 0.5;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        };
    };
    class launch_RPG32_F : Launcher_Base_F {
        class Single : Mode_SemiAuto {
            aiDispersionCoefX = 1.7;
            aiDispersionCoefY = 2.2;
            aiRateOfFire = 7;
            aiRateOfFireDispersion = 3;
            aiRateOfFireDistance = 400;
            maxRange = 600;
            maxRangeProbab = 1.1;
            midRange = 40;
            midRangeProbab = 0.85;
            minRange = 10;
            minRangeProbab = 0.3;
            recoil = "recoil_single_law";
            sounds[] = {"StandardSound"};
        };
    };
};

class CfgAmmo {
    class RocketCore;
    class RocketBase;
    class R_PG7_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 0;

        //thrust = 470;
        effectsMissile = "missile3";
        whistleDist = 30;
    };
    class M_SPG9_HEAT : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
    };
    class R_PG32V_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        airLock = 1;
        allowAgainstInfantry = 1;
        cost = 40;
    };
    class R_MRAAWS_HEAT_F : RocketBase {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
        cost = 40;
    };
};

class AMMO_CLASS(9x21_AP_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,9x21_AP_1Rnd,name);
	descriptionShort = CESTRING(ammo,9x21_AP,desc);

	picture = "\z\greenmag\addons\main\data\9mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.24;
	};
};

class AMMO_CLASS(9x21_AP_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,9x21_AP_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x21_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.4;
	};
};

class AMMO_CLASS(9x21_AP_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,9x21_AP_20Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x21_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.8;
	};
};

class AMMO_CLASS(9x21_AP_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,9x21_AP_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x21_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 7.2;
	};
};

class AMMO_CLASS(9x21_AP_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,9x21_AP_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x21_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 9.6;
	};
};

class AMMO_CLASS(9x21_AP_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,9x21_AP_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x21_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.0;
	};
};

class AMMO_CLASS(9x21_AP_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,9x21_AP_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x21_AP_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 14.4;
	};
};
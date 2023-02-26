class AMMO_CLASS(9x19_Mk243_1Rnd) : CVO_GreenMag_Ammo_Core_1Rnd {
	displayName = CESTRING(ammo,9x19_Mk243_1Rnd,name);
	picture = "\z\greenmag\addons\main\data\9mm.paa";

	scope = 2;

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 0.2;
	};
};

class AMMO_CLASS(9x19_Mk243_10Rnd) : CVO_GreenMag_Ammo_Core_10Rnd {
	displayName = CESTRING(ammo,9x19_Mk243_10Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_Mk243_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 2.0;
	};
};

class AMMO_CLASS(9x19_Mk243_20Rnd) : CVO_GreenMag_Ammo_Core_20Rnd {
	displayName = CESTRING(ammo,9x19_Mk243_20Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_Mk243_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 4.0;
	};
};

class AMMO_CLASS(9x19_Mk243_30Rnd) : CVO_GreenMag_Ammo_Core_30Rnd {
	displayName = CESTRING(ammo,9x19_Mk243_30Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x19_Mk243_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 6.0;
	};
};

class AMMO_CLASS(9x19_Mk243_40Rnd) : CVO_GreenMag_Ammo_Core_40Rnd {
	displayName = CESTRING(ammo,9x19_Mk243_40Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_Mk243_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 8.0;
	};
};

class AMMO_CLASS(9x19_Mk243_50Rnd) : CVO_GreenMag_Ammo_Core_50Rnd {
	displayName = CESTRING(ammo,9x19_Mk243_50Rnd,name);

	scope = 2;

	greenmag_ammotype = QAMMO_CLASS(9x19_Mk243_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 10.0;
	};
};

class AMMO_CLASS(9x19_Mk243_60Rnd) : CVO_GreenMag_Ammo_Core_60Rnd {
	displayName = CESTRING(ammo,9x19_Mk243_60Rnd,name);

	scope = 2;
	scopeArsenal=2;
	scopeCurator=2;

	greenmag_ammotype = QAMMO_CLASS(9x19_Mk243_1Rnd);

	class ItemInfo : CBA_MiscItem_ItemInfo {
		mass = 12.0;
	};
};
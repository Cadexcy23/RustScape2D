#pragma once
class Menus {
public:
	enum sidebarStateE {
		SIDEBAR_NONE,
		SIDEBAR_COMBAT,
		SIDEBAR_LEVELS,
		SIDEBAR_QUESTS,
		SIDEBAR_INVENTORY,
		SIDEBAR_EQUIPMENT,
		SIDEBAR_PRAYER,
		SIDEBAR_SPELLS,
		SIDEBAR_EMOTES,
		SIDEBAR_OPTIONS
	};

	enum activityStateE {
		ACTIVITY_NONE,
		ACTIVITY_FURNACE,
		ACTIVITY_ANVIL,
		ACTIVITY_SHOP
	};

public: int getSidebarState();

		void setSidebarState(int state);
		int getActivityType();
		void setActivityType(int state);
		int getActivityState();
		void setActivityState(int state);
};
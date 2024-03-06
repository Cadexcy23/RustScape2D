#pragma once
#ifndef Items
#include "Items.h"
#endif // !SDL

class Shop {

public:
	struct shop {
		int ID;
		Items::item item1;
		Items::item item2;
		Items::item item3;
		Items::item item4;
		Items::item item5;
		Items::item item6;
		Items::item item7;
		Items::item item8;
		Items::item item9;
		Items::item item10;
		Items::item item11;
		Items::item item12;
		Items::item item13;
		Items::item item14;
		Items::item item15;
		Items::item item16;
		Items::item item17;
		Items::item item18;
		Items::item item19;
		Items::item item20;
		Items::item item21;
		Items::item item22;
		Items::item item23;
		Items::item item24;
		Items::item item25;
		Items::item item26;
		Items::item item27;
		Items::item item28;
		Items::item item29;
		Items::item item30;
		Items::item item31;
		Items::item item32;
		Items::item item33;
		Items::item item34;
		Items::item item35;
		Items::item item36;
		Items::item item37;
		Items::item item38;
		Items::item item39;
		Items::item item40;
		Items::item item41;
		Items::item item42;
		Items::item item43;
		Items::item item44;
		Items::item item45;
		Items::item item46;
		Items::item item47;
		Items::item item48;
		int item1StockCurrent;
		int item2StockCurrent;
		int item3StockCurrent;
		int item4StockCurrent;
		int item5StockCurrent;
		int item6StockCurrent;
		int item7StockCurrent;
		int item8StockCurrent;
		int item9StockCurrent;
		int item10StockCurrent;
		int item11StockCurrent;
		int item12StockCurrent;
		int item13StockCurrent;
		int item14StockCurrent;
		int item15StockCurrent;
		int item16StockCurrent;
		int item17StockCurrent;
		int item18StockCurrent;
		int item19StockCurrent;
		int item20StockCurrent;
		int item21StockCurrent;
		int item22StockCurrent;
		int item23StockCurrent;
		int item24StockCurrent;
		int item25StockCurrent;
		int item26StockCurrent;
		int item27StockCurrent;
		int item28StockCurrent;
		int item29StockCurrent;
		int item30StockCurrent;
		int item31StockCurrent;
		int item32StockCurrent;
		int item33StockCurrent;
		int item34StockCurrent;
		int item35StockCurrent;
		int item36StockCurrent;
		int item37StockCurrent;
		int item38StockCurrent;
		int item39StockCurrent;
		int item40StockCurrent;
		int item41StockCurrent;
		int item42StockCurrent;
		int item43StockCurrent;
		int item44StockCurrent;
		int item45StockCurrent;
		int item46StockCurrent;
		int item47StockCurrent;
		int item48StockCurrent;
		int item1StockDefault;
		int item2StockDefault;
		int item3StockDefault;
		int item4StockDefault;
		int item5StockDefault;
		int item6StockDefault;
		int item7StockDefault;
		int item8StockDefault;
		int item9StockDefault;
		int item10StockDefault;
		int item11StockDefault;
		int item12StockDefault;
		int item13StockDefault;
		int item14StockDefault;
		int item15StockDefault;
		int item16StockDefault;
		int item17StockDefault;
		int item18StockDefault;
		int item19StockDefault;
		int item20StockDefault;
		int item21StockDefault;
		int item22StockDefault;
		int item23StockDefault;
		int item24StockDefault;
		int item25StockDefault;
		int item26StockDefault;
		int item27StockDefault;
		int item28StockDefault;
		int item29StockDefault;
		int item30StockDefault;
		int item31StockDefault;
		int item32StockDefault;
		int item33StockDefault;
		int item34StockDefault;
		int item35StockDefault;
		int item36StockDefault;
		int item37StockDefault;
		int item38StockDefault;
		int item39StockDefault;
		int item40StockDefault;
		int item41StockDefault;
		int item42StockDefault;
		int item43StockDefault;
		int item44StockDefault;
		int item45StockDefault;
		int item46StockDefault;
		int item47StockDefault;
		int item48StockDefault;
		void setStock(int ID, int amount)
		{
			switch (ID)
			{
			case 1:
				item1StockCurrent = amount;
				break;
			case 2:
				item2StockCurrent = amount;
				break;
			case 3:
				item3StockCurrent = amount;
				break;
			case 4:
				item4StockCurrent = amount;
				break;
			case 5:
				item5StockCurrent = amount;
				break;
			case 6:
				item6StockCurrent = amount;
				break;
			case 7:
				item7StockCurrent = amount;
				break;
			case 8:
				item8StockCurrent = amount;
				break;
			case 9:
				item9StockCurrent = amount;
				break;
			case 10:
				item10StockCurrent = amount;
				break;
			case 11:
				item11StockCurrent = amount;
				break;
			case 12:
				item12StockCurrent = amount;
				break;
			case 13:
				item13StockCurrent = amount;
				break;
			case 14:
				item14StockCurrent = amount;
				break;
			case 15:
				item15StockCurrent = amount;
				break;
			case 16:
				item16StockCurrent = amount;
				break;
			case 17:
				item17StockCurrent = amount;
				break;
			case 18:
				item18StockCurrent = amount;
				break;
			case 19:
				item19StockCurrent = amount;
				break;
			case 20:
				item20StockCurrent = amount;
				break;
			case 21:
				item21StockCurrent = amount;
				break;
			case 22:
				item22StockCurrent = amount;
				break;
			case 23:
				item23StockCurrent = amount;
				break;
			case 24:
				item24StockCurrent = amount;
				break;
			case 25:
				item25StockCurrent = amount;
				break;
			case 26:
				item26StockCurrent = amount;
				break;
			case 27:
				item27StockCurrent = amount;
				break;
			case 28:
				item28StockCurrent = amount;
				break;
			case 29:
				item29StockCurrent = amount;
				break;
			case 30:
				item30StockCurrent = amount;
				break;
			case 31:
				item31StockCurrent = amount;
				break;
			case 32:
				item32StockCurrent = amount;
				break;
			case 33:
				item33StockCurrent = amount;
				break;
			case 34:
				item34StockCurrent = amount;
				break;
			case 35:
				item35StockCurrent = amount;
				break;
			case 36:
				item36StockCurrent = amount;
				break;
			case 37:
				item37StockCurrent = amount;
				break;
			case 38:
				item38StockCurrent = amount;
				break;
			case 39:
				item39StockCurrent = amount;
				break;
			case 40:
				item40StockCurrent = amount;
				break;
			case 41:
				item41StockCurrent = amount;
				break;
			case 42:
				item42StockCurrent = amount;
				break;
			case 43:
				item43StockCurrent = amount;
				break;
			case 44:
				item44StockCurrent = amount;
				break;
			case 45:
				item45StockCurrent = amount;
				break;
			case 46:
				item46StockCurrent = amount;
				break;
			case 47:
				item47StockCurrent = amount;
				break;
			case 48:
				item48StockCurrent = amount;
				break;
			}
		}
		int getStock(int ID)
		{
			switch (ID)
			{
			case 1:
				return item1StockCurrent;
				break;
			case 2:
				return item2StockCurrent;
				break;
			case 3:
				return item3StockCurrent;
				break;
			case 4:
				return item4StockCurrent;
				break;
			case 5:
				return item5StockCurrent;
				break;
			case 6:
				return item6StockCurrent;
				break;
			case 7:
				return item7StockCurrent;
				break;
			case 8:
				return item8StockCurrent;
				break;
			case 9:
				return item9StockCurrent;
				break;
			case 10:
				return item10StockCurrent;
				break;
			case 11:
				return item11StockCurrent;
				break;
			case 12:
				return item12StockCurrent;
				break;
			case 13:
				return item13StockCurrent;
				break;
			case 14:
				return item14StockCurrent;
				break;
			case 15:
				return item15StockCurrent;
				break;
			case 16:
				return item16StockCurrent;
				break;
			case 17:
				return item17StockCurrent;
				break;
			case 18:
				return item18StockCurrent;
				break;
			case 19:
				return item19StockCurrent;
				break;
			case 20:
				return item20StockCurrent;
				break;
			case 21:
				return item21StockCurrent;
				break;
			case 22:
				return item22StockCurrent;
				break;
			case 23:
				return item23StockCurrent;
				break;
			case 24:
				return item24StockCurrent;
				break;
			case 25:
				return item25StockCurrent;
				break;
			case 26:
				return item26StockCurrent;
				break;
			case 27:
				return item27StockCurrent;
				break;
			case 28:
				return item28StockCurrent;
				break;
			case 29:
				return item29StockCurrent;
				break;
			case 30:
				return item30StockCurrent;
				break;
			case 31:
				return item31StockCurrent;
				break;
			case 32:
				return item32StockCurrent;
				break;
			case 33:
				return item33StockCurrent;
				break;
			case 34:
				return item34StockCurrent;
				break;
			case 35:
				return item35StockCurrent;
				break;
			case 36:
				return item36StockCurrent;
				break;
			case 37:
				return item37StockCurrent;
				break;
			case 38:
				return item38StockCurrent;
				break;
			case 39:
				return item39StockCurrent;
				break;
			case 40:
				return item40StockCurrent;
				break;
			case 41:
				return item41StockCurrent;
				break;
			case 42:
				return item42StockCurrent;
				break;
			case 43:
				return item43StockCurrent;
				break;
			case 44:
				return item44StockCurrent;
				break;
			case 45:
				return item45StockCurrent;
				break;
			case 46:
				return item46StockCurrent;
				break;
			case 47:
				return item47StockCurrent;
				break;
			case 48:
				return item48StockCurrent;
				break;
			}
		}
		int getStockDefault(int ID)
		{
			switch (ID)
			{
			case 1:
				return item1StockDefault;
				break;
			case 2:
				return item2StockDefault;
				break;
			case 3:
				return item3StockDefault;
				break;
			case 4:
				return item4StockDefault;
				break;
			case 5:
				return item5StockDefault;
				break;
			case 6:
				return item6StockDefault;
				break;
			case 7:
				return item7StockDefault;
				break;
			case 8:
				return item8StockDefault;
				break;
			case 9:
				return item9StockDefault;
				break;
			case 10:
				return item10StockDefault;
				break;
			case 11:
				return item11StockDefault;
				break;
			case 12:
				return item12StockDefault;
				break;
			case 13:
				return item13StockDefault;
				break;
			case 14:
				return item14StockDefault;
				break;
			case 15:
				return item15StockDefault;
				break;
			case 16:
				return item16StockDefault;
				break;
			case 17:
				return item17StockDefault;
				break;
			case 18:
				return item18StockDefault;
				break;
			case 19:
				return item19StockDefault;
				break;
			case 20:
				return item20StockDefault;
				break;
			case 21:
				return item21StockDefault;
				break;
			case 22:
				return item22StockDefault;
				break;
			case 23:
				return item23StockDefault;
				break;
			case 24:
				return item24StockDefault;
				break;
			case 25:
				return item25StockDefault;
				break;
			case 26:
				return item26StockDefault;
				break;
			case 27:
				return item27StockDefault;
				break;
			case 28:
				return item28StockDefault;
				break;
			case 29:
				return item29StockDefault;
				break;
			case 30:
				return item30StockDefault;
				break;
			case 31:
				return item31StockDefault;
				break;
			case 32:
				return item32StockDefault;
				break;
			case 33:
				return item33StockDefault;
				break;
			case 34:
				return item34StockDefault;
				break;
			case 35:
				return item35StockDefault;
				break;
			case 36:
				return item36StockDefault;
				break;
			case 37:
				return item37StockDefault;
				break;
			case 38:
				return item38StockDefault;
				break;
			case 39:
				return item39StockDefault;
				break;
			case 40:
				return item40StockDefault;
				break;
			case 41:
				return item41StockDefault;
				break;
			case 42:
				return item42StockDefault;
				break;
			case 43:
				return item43StockDefault;
				break;
			case 44:
				return item44StockDefault;
				break;
			case 45:
				return item45StockDefault;
				break;
			case 46:
				return item46StockDefault;
				break;
			case 47:
				return item47StockDefault;
				break;
			case 48:
				return item48StockDefault;
				break;
			}
		}
		void update()
		{
			Items Items;
			for (int a = 1; a <= 48; a++)
			{
				if (getStock(a) > getStockDefault(a))
				{
					setStock(a, getStock(a) - 1);
				}
				else if (getStock(a) < getStockDefault(a))
				{
					setStock(a, getStock(a) + 1);
				}
				if (ID == SHOP_GENERAL && getStock(a) == 0)
				{
					setItem(a, Items.empty);
				}
			}
		}
		void setItem(int slotID, Items::item item) {
			switch (slotID)
			{
			case 1:
				item1 = item;
				break;
			case 2:
				item2 = item;
				break;
			case 3:
				item3 = item;
				break;
			case 4:
				item4 = item;
				break;
			case 5:
				item5 = item;
				break;
			case 6:
				item6 = item;
				break;
			case 7:
				item7 = item;
				break;
			case 8:
				item8 = item;
				break;
			case 9:
				item9 = item;
				break;
			case 10:
				item10 = item;
				break;
			case 11:
				item11 = item;
				break;
			case 12:
				item12 = item;
				break;
			case 13:
				item13 = item;
				break;
			case 14:
				item14 = item;
				break;
			case 15:
				item15 = item;
				break;
			case 16:
				item16 = item;
				break;
			case 17:
				item17 = item;
				break;
			case 18:
				item18 = item;
				break;
			case 19:
				item19 = item;
				break;
			case 20:
				item20 = item;
				break;
			case 21:
				item21 = item;
				break;
			case 22:
				item22 = item;
				break;
			case 23:
				item23 = item;
				break;
			case 24:
				item24 = item;
				break;
			case 25:
				item25 = item;
				break;
			case 26:
				item26 = item;
				break;
			case 27:
				item27 = item;
				break;
			case 28:
				item28 = item;
				break;
			case 29:
				item29 = item;
				break;
			case 30:
				item30 = item;
				break;
			case 31:
				item31 = item;
				break;
			case 32:
				item32 = item;
				break;
			case 33:
				item33 = item;
				break;
			case 34:
				item34 = item;
				break;
			case 35:
				item35 = item;
				break;
			case 36:
				item36 = item;
				break;
			case 37:
				item37 = item;
				break;
			case 38:
				item38 = item;
				break;
			case 39:
				item39 = item;
				break;
			case 40:
				item40 = item;
				break;
			case 41:
				item41 = item;
				break;
			case 42:
				item42 = item;
				break;
			case 43:
				item43 = item;
				break;
			case 44:
				item44 = item;
				break;
			case 45:
				item45 = item;
				break;
			case 46:
				item46 = item;
				break;
			case 47:
				item47 = item;
				break;
			case 48:
				item48 = item;
				break;
			}
		}
		Items::item getItem(int ID) {
			switch (ID)
			{
			case 1:
				return item1;
				break;
			case 2:
				return item2;
				break;
			case 3:
				return item3;
				break;
			case 4:
				return item4;
				break;
			case 5:
				return item5;
				break;
			case 6:
				return item6;
				break;
			case 7:
				return item7;
				break;
			case 8:
				return item8;
				break;
			case 9:
				return item9;
				break;
			case 10:
				return item10;
				break;
			case 11:
				return item11;
				break;
			case 12:
				return item12;
				break;
			case 13:
				return item13;
				break;
			case 14:
				return item14;
				break;
			case 15:
				return item15;
				break;
			case 16:
				return item16;
				break;
			case 17:
				return item17;
				break;
			case 18:
				return item18;
				break;
			case 19:
				return item19;
				break;
			case 20:
				return item20;
				break;
			case 21:
				return item21;
				break;
			case 22:
				return item22;
				break;
			case 23:
				return item23;
				break;
			case 24:
				return item24;
				break;
			case 25:
				return item25;
				break;
			case 26:
				return item26;
				break;
			case 27:
				return item27;
				break;
			case 28:
				return item28;
				break;
			case 29:
				return item29;
				break;
			case 30:
				return item30;
				break;
			case 31:
				return item31;
				break;
			case 32:
				return item32;
				break;
			case 33:
				return item33;
				break;
			case 34:
				return item34;
				break;
			case 35:
				return item35;
				break;
			case 36:
				return item36;
				break;
			case 37:
				return item37;
				break;
			case 38:
				return item38;
				break;
			case 39:
				return item39;
				break;
			case 40:
				return item40;
				break;
			case 41:
				return item41;
				break;
			case 42:
				return item42;
				break;
			case 43:
				return item43;
				break;
			case 44:
				return item44;
				break;
			case 45:
				return item45;
				break;
			case 46:
				return item46;
				break;
			case 47:
				return item47;
				break;
			case 48:
				return item48;
				break;
			}
		}
		//remove all elses and just add a return false at the end
		bool checkSlotForItem(int slot, Items::item item)
		{
			switch (slot)
			{
			case 1:
				if (item1.id == item.id)
					return true;
				else
					return false;
				break;
			case 2:
				if (item2.id == item.id)
					return true;
				else
					return false;
				break;
			case 3:
				if (item3.id == item.id)
					return true;
				else
					return false;
				break;
			case 4:
				if (item4.id == item.id)
					return true;
				else
					return false;
				break;
			case 5:
				if (item5.id == item.id)
					return true;
				else
					return false;
				break;
			case 6:
				if (item6.id == item.id)
					return true;
				else
					return false;
				break;
			case 7:
				if (item7.id == item.id)
					return true;
				else
					return false;
				break;
			case 8:
				if (item8.id == item.id)
					return true;
				else
					return false;
				break;
			case 9:
				if (item9.id == item.id)
					return true;
				else
					return false;
				break;
			case 10:
				if (item10.id == item.id)
					return true;
				else
					return false;
				break;
			case 11:
				if (item11.id == item.id)
					return true;
				else
					return false;
				break;
			case 12:
				if (item12.id == item.id)
					return true;
				else
					return false;
				break;
			case 13:
				if (item13.id == item.id)
					return true;
				else
					return false;
				break;
			case 14:
				if (item14.id == item.id)
					return true;
				else
					return false;
				break;
			case 15:
				if (item15.id == item.id)
					return true;
				else
					return false;
				break;
			case 16:
				if (item16.id == item.id)
					return true;
				else
					return false;
				break;
			case 17:
				if (item17.id == item.id)
					return true;
				else
					return false;
				break;
			case 18:
				if (item18.id == item.id)
					return true;
				else
					return false;
				break;
			case 19:
				if (item19.id == item.id)
					return true;
				else
					return false;
				break;
			case 20:
				if (item20.id == item.id)
					return true;
				else
					return false;
				break;
			case 21:
				if (item21.id == item.id)
					return true;
				else
					return false;
				break;
			case 22:
				if (item22.id == item.id)
					return true;
				else
					return false;
				break;
			case 23:
				if (item23.id == item.id)
					return true;
				else
					return false;
				break;
			case 24:
				if (item24.id == item.id)
					return true;
				else
					return false;
				break;
			case 25:
				if (item25.id == item.id)
					return true;
				else
					return false;
				break;
			case 26:
				if (item26.id == item.id)
					return true;
				else
					return false;
				break;
			case 27:
				if (item27.id == item.id)
					return true;
				else
					return false;
				break;
			case 28:
				if (item28.id == item.id)
					return true;
				else
					return false;
				break;
			case 29:
				if (item29.id == item.id)
					return true;
				else
					return false;
				break;
			case 30:
				if (item30.id == item.id)
					return true;
				else
					return false;
				break;
			case 31:
				if (item31.id == item.id)
					return true;
				else
					return false;
				break;
			case 32:
				if (item32.id == item.id)
					return true;
				else
					return false;
				break;
			case 33:
				if (item33.id == item.id)
					return true;
				else
					return false;
				break;
			case 34:
				if (item34.id == item.id)
					return true;
				else
					return false;
				break;
			case 35:
				if (item35.id == item.id)
					return true;
				else
					return false;
				break;
			case 36:
				if (item36.id == item.id)
					return true;
				else
					return false;
				break;
			case 37:
				if (item37.id == item.id)
					return true;
				else
					return false;
				break;
			case 38:
				if (item38.id == item.id)
					return true;
				else
					return false;
				break;
			case 39:
				if (item39.id == item.id)
					return true;
				else
					return false;
				break;
			case 40:
				if (item40.id == item.id)
					return true;
				else
					return false;
				break;
			case 41:
				if (item41.id == item.id)
					return true;
				else
					return false;
				break;
			case 42:
				if (item42.id == item.id)
					return true;
				else
					return false;
				break;
			case 43:
				if (item43.id == item.id)
					return true;
				else
					return false;
				break;
			case 44:
				if (item44.id == item.id)
					return true;
				else
					return false;
				break;
			case 45:
				if (item45.id == item.id)
					return true;
				else
					return false;
				break;
			case 46:
				if (item46.id == item.id)
					return true;
				else
					return false;
				break;
			case 47:
				if (item47.id == item.id)
					return true;
				else
					return false;
				break;
			case 48:
				if (item48.id == item.id)
					return true;
				else
					return false;
				break;
			default:
				return false;
				break;
			};
		}
		bool checkForItem(Items::item item)
		{
			Shop Shop;
			bool found = false;
			for (int b = 1; b < 49; b++)
			{
				if (checkSlotForItem(b, item))
					found = true;
			}
			if (found)
				return true;
			else
				return false;
		}
		void setAsCurrent()
		{
			currentShop = this;
		}
	};


	enum shopID{
		SHOP_NONE,
		SHOP_GENERAL,
		SHOP_ORE,
		SHOP_BAR,
		SHOP_ICECREAM,
		SHOP_COUNT
	};
	//PUT BOTH SHOPS AND STOCKS TOGETHER

	
	static shop* currentShop;
	static Shop::shop 
		generalShopCurrent,
		generalShopDefault,
		barShop,
		oreShop,
		icecreamShop;

	
	Shop::shop getShopFromID(int shopID);

	Shop::shop getCurrentShop();
	
};
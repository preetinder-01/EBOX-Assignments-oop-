#include <cstring>
#include<iostream>
#include<string>
#include "ItemType.cpp"

class ItemTypeBO
    {
    public:
  ItemType createItemType(string itemName,double itemDeposit,double costPerDay)
    {
        ItemType set;
        set.setItemName(itemName);
        set.setItemDeposit(itemDeposit);
        set.setCostPerDay(costPerDay);
        
        return set;
    }
    
    int searchItemTypeByName(ItemType *itemtype,int n,string searchName)
	{
        int x = 0;
        for(int i = 0; i<n; i++)
        {
            if(searchName == itemtype[i].getItemName())
            x = 1;
        }
        
        return x;
	}
};

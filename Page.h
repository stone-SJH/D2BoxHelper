///////////////////////////////////////////
////                stone              ////
////                v1.0               ////
////                2016/3/11          ////
///////////////////////////////////////////

#pragma once

#include "Config.h"
#include "Item.h"

typedef struct Page
{
	Item * item;
	int itemLength;
	int itemCount;
	int fileItemCount;
	int insertItemCount;
}Page;

void PageSetItemCount(Page *page, int itemindex);

void PageNewItem(Page *page, const void * _Item, size_t _Size);
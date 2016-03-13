///////////////////////////////////////////
////                stone              ////
////                v1.0               ////
////                2016/3/11          ////
///////////////////////////////////////////

#include "stdafx.h"
#include "Box.h"

int Clean(const char * _BagFileName)
{
	int result = 0;

	Chest chest = ChestRead(_BagFileName);
	remove("~BoxHelperTmp");

	if (chest.itemCount > 0)
	{
		ChestWrite(chest, "~BoxHelperTmp");

		if (FileCompare(_BagFileName, "~BoxHelperTmp"))
		{
			ChestSort(&chest);
			ChestWrite(chest, _BagFileName);
		}
		else
		{
			result = 1;
			MessageBox(0, _T("sss File error!"), _T("Hint"), 0);
		}
		remove("~BoxHelperTmp");
	}
	else
	{
		result = 1;
		MessageBox(0, _T("no item!"), _T("Hint"), 0);
	}

	//free
	FreeChest(&chest);

	return result;
}
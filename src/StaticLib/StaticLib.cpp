// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"
#include "../include/StaticLib.h"


bool is_leap_year(int year)
{
	//西暦が400で割り切れる年はうるう年とする
	if (year % 4 == 0 && year % 400 == 0) {

		return true;
	}
	//西暦が100で割り切れる年はうるう年としない
	else if (year % 4 == 0 && year % 100 == 0)
	{
		return false;
	}
	//西暦が4で割り切れる年をうるう年とする
	else if (year % 4 == 0)
	{
		return true;
	}
	// 上記以外(一部除く)ならうるう年ではない。
	else
	{
		return false;
	}

}

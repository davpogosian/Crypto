#pragma once
#include "Crypto.h"

class Shablon : public Crypto {
	string s;
	string array1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	string array2 = "ZABCDEFGHIGKLMNOPQRSTUVWXYzabcdefghijklmnopqrstuvwxy1234567890";

public:
	Shablon(string str) : Crypto(str) {
		s = str;
	}
	string dCoder();
	string nCoder();
};
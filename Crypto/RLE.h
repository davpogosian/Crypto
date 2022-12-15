#pragma once
#include "Crypto.h"

class RLE : public Crypto {
	string s;
public:
	RLE(string str) : Crypto(str) {
		s = str;
	}
	string dCoder();
	string nCoder();
};

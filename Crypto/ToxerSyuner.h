#pragma once
#include "Crypto.h"

class ToxerSyuner : public Crypto {
	string s;
	int n;
public:
	ToxerSyuner(string str, int k) : Crypto(str) {
		s = str;
		n = k;
	}
	string dCoder();
	string nCoder();
};

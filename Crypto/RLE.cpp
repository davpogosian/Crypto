#include "RLE.h"
#include "Crypto.h"

string RLE::dCoder()
{
    char a[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        int k = 1;
        while (s[i] == s[i + 1] && i < s.length() - 1) {
            k++;
            i++;
        }
        //cout << s[i] << k;
        char c = a[k];
        result = result + s[i];
        result = result + c;
    }
    return result;

}

string RLE::nCoder()
{
    char a[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    string d = dCoder();
    string result = "";
    int k, l = 0;
    for (int i = 0; i < d.length(); i = i + 2) {
        k = 0;
        while (a) {
            if (d[i + 1] == a[k]) {
                l = k;
                break;
            }
            k++;
        }
        while (l) {
            result = result + d[i];
            l--;
        }
    }
    return result;
}

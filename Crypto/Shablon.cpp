#include "Crypto.h"
#include "Shablon.h"

string Shablon::dCoder()
{
    string s1 = s;
    int j;
    int i = 0;
    while (s1[i]) {
        j = 0;
        while (array1[j]) {
            if (s1[i] == array1[j]) {
                s1[i] = array2[j];
                break;
            }
            j++;
        }
        i++;
    }
    return s1;

}

string Shablon::nCoder()
{
    string str = dCoder();
    int j;
    int i = 0;
    while (str[i]) {
        j = 0;
        while (array2[j]) {
            if (str[i] == array2[j]) {
                str[i] = array1[j];
                break;
            }
            j++;
        }
        i++;
    }
    return str;
}

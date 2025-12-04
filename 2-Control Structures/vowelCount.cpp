#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int i,len, counta=0, counte=0, counti=0, counto=0, countu=0;
    cout << "Enter a string : "<<"";
    getline(cin,str);
    len = str.length();
    cout << len << endl;
    // str = tolower(str);
    for (i=0; i<len; i++)
    {
        switch (str[i])
        {
            case 'a' : {counta++; break;}
            case 'e' : {counte++; break;}
            case 'i' : {counti++; break;}
            case 'o' : {counto++; break;}
            case 'u' : {countu++; break;}
            default : {continue;}
        }
    }

    string vowel = "aeiou";
    int vowelCount [5] = {counta, counte, counti, counto, countu};

    for (i=0; i<5; i++)
    {
        cout << "The vowel " << vowel[i] << " occurs " << vowelCount[i] << " times." <<endl;
    }

    return 0;
}
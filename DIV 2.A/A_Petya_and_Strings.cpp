#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1(100, '\0');
    string s2(100, '\0');
    cin >> s1;
    cin >> s2;

    s1.towlower();
    s2.towlower();

    int lenS1 = s1.length();
    int lenS2 = s2.length();

    if(lenS1 < lenS2){cout<< -1 << endl;}
    if(lenS2 < lenS1){cout<< 1 << endl;}
    if(lenS1 == lenS2){cout<< 0 << endl;}

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1(100, '\0');
    string s2(100, '\0');
    cin >> s1;
    cin >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if(s1 < s2){cout<< -1 << endl;}
    if(s2 < s1){cout<< 1 << endl;}
    if(s1 == s2){cout<< 0 << endl;}

    return 0;
}
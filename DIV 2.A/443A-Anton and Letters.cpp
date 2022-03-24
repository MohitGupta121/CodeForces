#include<bits/stdc++.h>
using namespace std;
 
int main(){
  
    string s;
    getline(cin,s);   // input whole string including space commas everything.
    set<char> k;     // take unique char only
  
    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i]))  // only check is alphabets
        {      
            k.insert(s[i]);
        }    
        
    }
  
    cout << k.size(); // print no. of char stores
    
}

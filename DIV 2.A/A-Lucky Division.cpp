#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int a;
    cin>>a;
    
    bool isLucky = false;
    
    int arr[13]={4,7,47,74,44,444,447,474,477,777,774,744};
    
    for(int i=0; i<12; i++){
        if(a%arr[i]==0){
            isLucky = true;
            break;
        }
    }
    
    if(isLucky){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

}
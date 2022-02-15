#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d, t;
    cin >> n >> d;
    
    int time=0 , jokes=0;
    
    for(int i=0; i<n; i++){
        cin>>t;
        time += t;
        
        if(i<n-1){
            jokes += 2;
            time += 10;
        }
        else{
            jokes += (d-time)/5;
        }
    }
    
    if(time > d){ cout << -1 << endl; }
    else{ cout << jokes << endl; }
    
}
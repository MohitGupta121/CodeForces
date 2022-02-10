#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p, q;
    int arr[n+1]={0};
    int level;
    cin>>n;
    
    cin>>p;
    for(int i=0; i<p; i++){
        cin>>level;
        arr[level]=1;
    }
    
    cin>>q;
    for(int i=0; i<q; i++){
        cin>>level;
        arr[level]=1;
    }
    
    for(int i=1; i<=n; i++){
        if(arr[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
    }
    
    cout<<"I become the guy.";
    
}
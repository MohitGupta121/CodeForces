#include<bits/stdc++.h>
using namespace std;

int main() {
    int s,n;
    cin>>s>>n;
    
    pair <int,int> arr[1000];
    bool isWin = true;
    
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr,arr+n);
    
    for(int i=0;i<n;i++){
        if(s<=arr[i].first){
            isWin = false;
            break;
        }
        s+= arr[i].second;
    }

    if(isWin){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
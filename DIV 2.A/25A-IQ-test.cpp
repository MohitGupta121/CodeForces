#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    int oddNum=0, evenNum=0;
    int oddIndex=0, evenIndex=0;
    
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            evenNum++;
            evenIndex=i;
        }else{
            oddNum++;
            oddIndex=i;
        }
    }
    
    if(oddNum>evenNum){
        cout<<evenIndex;
    }else{
        cout<<oddIndex;
    }
}
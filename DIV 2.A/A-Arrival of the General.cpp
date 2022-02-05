#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    int maxVal=0,minVal=110;//to store minimum and maximum value
    int maxIndex=0,minIndex=0;//to store maximum and minimum value index
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a>maxVal){
            maxIndex=i;
            maxVal=a;
        }
        if(a<=minVal){
            minIndex=i;
            minVal=a;
        }
    }
    if(maxIndex>minIndex){
        cout<<(maxIndex-1)+(n-minIndex)-1;
    }else{
        cout<<(maxIndex-1)+(n-minIndex);
    }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,f,t, maxJoy, joy;
    cin>>n>>k>>f>>t;
    
    if(t > k)
        maxJoy = f - (t-k);
    else
        maxJoy = f;
    
    while(--n){
        cin >> f >> t;
        if(t>k)
            joy = f - (t-k);
        else
            joy = f;
            
        if(joy > maxJoy)
            maxJoy = joy;
    }
    
    cout<<maxJoy;
    
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n, flag=0;
    char s[305][305], diag, other;
    cin>>n;
     
    for(int i=0; i<n; i++)
        cin>>s[i];
    
    diag=s[0][0];
    other=s[0][1];
    
    if(diag==other)
        flag=1;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j || i+j==n-1)
            {
                if(s[i][j] != diag){
                    flag=1;
                    break;
                }
            }
            else
            {
               if(s[i][j] != other){
                   flag = 1;
                   break;
               } 
            }
        }
        if(flag) break;
    }
    
    if(flag) cout<<"NO";
    else cout<<"YES";
    
    return 0;
}	

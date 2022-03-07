#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<m; i++)
        cin >> b[i];
        
    sort(a, a+n);
    sort(b, b+m);
    
    int time = 2 * a[0];
    
    time = max(time, a[n-1]);
    
    if(b[0] <= time)
        cout << -1;
    else
        cout << time;
    
    return 0;
}

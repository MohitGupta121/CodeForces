#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    int a[n+1];
    cin>>n;
    
    if(n%2 != 0) cout<<"-1";
    else
    {
        for(int i=1; i<=n; i++) a[i]=i;
        for(int i=1; i<=n-1; i++)
        {
            swap(a[i],a[i+1]);
            i++;
        }
        for(int i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";
        } 
    }
    
    return 0;
}	

OR

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << "2 1";
        for (int i = 3; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;
    }
    return 0;
}

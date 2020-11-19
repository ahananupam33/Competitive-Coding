#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll int T,n,q,x,y,count,ans;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> n >> q;
        ll int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }
        for(int i=0;i<q;i++)
        {
            cin >> x >> y;
            x--;
            a[x]=y;
            count=0;
            for(int i=0;i<n-1;i++)
            {
                if(a[i]==a[i+1])
                    count++;
            }
            ans=n-count;
            cout << ans << endl;
        }
    }
	// your code goes here
	return 0;
}

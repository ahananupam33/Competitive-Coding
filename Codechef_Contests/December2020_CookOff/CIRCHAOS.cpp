#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll int t,n,m,spells,sur,term1,term2;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ll int a[m];
        spells=0;
        for(int i=0;i<m;i++)
        {
            cin >> a[i];
            spells=__gcd(spells,a[i]);
        }
        sur=0;
        for(int i=1;i*i<=spells;i++)
        {
            if(spells%i==0)
            {
                term1=i;term2=spells/i;
                if(n>=term1)
                    sur=max(sur,term1);
                if(n>=term2)
                    sur=max(sur,term2);
            }
        }
        cout << n-sur << endl;
    }
	// your code goes here
	return 0;
}

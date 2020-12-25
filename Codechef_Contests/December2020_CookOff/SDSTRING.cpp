#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll int t,n0,n1,ans;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s.length()%2!=0)
            cout << -1 << endl;
        else
        {
            n0=0;
            n1=0;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='1')
                    n1++;
                if(s[i]=='0')
                    n0++;
            }
            if(n0==0 || n1==0)
            {
                cout << -1 << endl;
                continue;
            }
            ans=abs(n0-n1)/2;
            cout << ans << endl;
        }
    }
	// your code goes here
	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll int T,n,sum,ans;
    cin >> T;
    while(T--)
    {
        cin >> n;
        vector <int> f(n),c(n);
        vector<pair<int,int>> tc;
        for(int i=0;i<n;i++)
            cin >> f[i];
        for(int i=0;i<n;i++)
        {
            cin >> c[i];
            tc.push_back({c[i],f[i]});
        }
        sort(tc.begin(),tc.end());
        sum=0;
        ans=0;
        for(auto c : tc)
        {
            if(sum+c.second<=n)
            {
                sum+=c.second;
                ans+=c.first*(ll)c.second;
            }
            else
            {
                ans+=(n-sum)*(ll)c.first;
                break;
            }
        }
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll int t,x,y,k,n;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> k >> n;
        if(abs(x-y)==1)
        {
            cout << "No" << endl;
            continue;
        }
        if(abs(x-y)%(2*k)==0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
	// your code goes here
	return 0;
}

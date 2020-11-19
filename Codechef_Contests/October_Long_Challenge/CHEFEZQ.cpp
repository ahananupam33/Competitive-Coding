#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll int T,n,k,q,ans;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        q=0;
        ans=0;
        for(int i=0;i<n;i++)
        {
            q+=(a[i]-k);
            if(q<0)
            {
                ans=i+1;
                break;
            }
        }
        if(q>0)
        {
            ans=n+(q/k)+1;
        }
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}

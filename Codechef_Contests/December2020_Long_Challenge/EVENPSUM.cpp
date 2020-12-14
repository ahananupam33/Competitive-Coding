#include <iostream>
using namespace std;
#define ll long long

int main() {
    ll int T,a,b,ans;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        if(a%2==0)
        {
            if(b%2==0)
                ans=a*(b/2);
            else
                ans=(a/2)*b;
        }
        else
        {
            if(b%2==0)
                ans=a*(b/2);
            else
                ans=(a/2)*(b/2)+((a/2)+1)*((b/2)+1);
        }
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}

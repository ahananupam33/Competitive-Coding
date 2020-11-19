#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll int T,l,r,ans;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> l >> r;
        if(l==1)
        {
            cout << -1 << endl;
            continue;
        }
        if(r<(2*l))
        {
            cout << r << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
	// your code goes here
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n,m,k,ans,minu,q,t;
    cin >> n >> m >> k;
    ans=0;
    while(n--)
    {
        minu=0;
        for(int i=0;i<k+1;i++)
        {
            if(i==k)
            {
                cin >> q;
                break;
            }
            cin >> t;
            minu+=t;
        }
        if(minu>=m&&q<=10)
            ans++;
    }
    cout << ans << endl;
	// your code goes here
	return 0;
}

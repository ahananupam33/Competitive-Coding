#include <iostream>
using namespace std;

int main() {
    int T,n,d,risk,ans;
    cin >> T;
    while(T--)
    {
        cin >> n >> d;
        int a[n];
        risk=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]<=9 || a[i]>=80)
                risk++;
        }
        if(d>=n)
        {
            if(risk==0||risk==n)
                cout << 1 << endl;
            else
                cout << 2 << endl;
            continue;
        }
        else
        {
            ans=(risk/d)+((n-risk)/d);
            if(risk%d!=0)
                ans++;
            if((n-risk)%d!=0)
                ans++;
            cout << ans << endl;
        }
    }
	// your code goes here
	return 0;
}

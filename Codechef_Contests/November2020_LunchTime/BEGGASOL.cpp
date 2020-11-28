#include <iostream>
using namespace std;

int main() {
    int T,n,fuel,ans;
    cin >> T;
    while(T--)
    {
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        fuel=a[0];
        ans=0;
        for(int i=1;i<n;i++)
        {
            if(fuel==0)
                break;
            fuel+=a[i];
            fuel--;
            ans++;
        }
        ans+=fuel;
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int T,n,ans;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> n;
        int b[n+1];
        for(int i=1;i<=n;i++)
            cin >> b[i];
        for(int i=1;i<=n;i++)
        {
            if(b[i]==i)
                ans=n-i+1;
            else
                ans=(n-i+1)-(b[i]-i);
            cout << ans << " ";
        }
        cout << endl;
    }
	// your code goes here
	return 0;
}

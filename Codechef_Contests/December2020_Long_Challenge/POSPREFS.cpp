#include <iostream>
using namespace std;

int main() {
    int T,n,k;
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        int a[n+1];
        for(int i=1;i<=n;i++)
            a[i]=-i;
        for(int i=1;i<=n;i+=2)
        {
            if(k>0)
            {
                a[i]=i;
                k--;
            }
        }
        if(k>0)
        {
            for(int i=n;i>=1;i--)
            {
                if(k==0)
                    break;
                if(i%2==0)
                {
                    a[i]=i;
                    k--;
                }
            }
        }
        for(int i=1;i<=n;i++)
            cout << a[i] << " ";
        cout << endl;
    }
	// your code goes here
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t,n,ab;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string a;
        cin >> a;
        ab=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='0')
                ab++;
        }
        if(ab>30)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
	// your code goes here
	return 0;
}

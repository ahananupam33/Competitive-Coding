#include <iostream>
using namespace std;

int main() {
    int T,n,flag;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> n;
        string s;
        cin >> s;
        flag=false;
        for(int i=0;i<(n-1);i++)
        {
            if(s[n-1]==s[i])
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	// your code goes here
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,check,ans;
    cin >> T;
    while(T--)
    {
        string a,b;
        cin >> a >> b;
        check=0;
        ans=0;
        for(int i=0;i<a.length();i+=2)
        {
            if(a[i]!=b[i])
            {
                check++;
            }
            else
            {
                if(check>0)
                    ans++;
                check=0;
            }
        }
        if(check>0)
        {
            ans++;
            check=0;
        }
        check=0;
        for(int i=1;i<a.length();i+=2)
        {
            if(a[i]!=b[i])
            {
                check++;
            }
            else
            {
                if(check>0)
                    ans++;
                check=0;
            }
        }
        if(check>0)
        {
            ans++;
            check=0;
        }
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}

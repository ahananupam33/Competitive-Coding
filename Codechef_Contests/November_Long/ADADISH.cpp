#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,n,maxi,sum,ans;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> n;
        int c[n];
        maxi=0;
        for(int i=0;i<n;i++)
        {
            cin >> c[i];
            if(c[i]>maxi)
                maxi=c[i];
        }
        if(n==1 || n==2)
        {
            cout << maxi << endl;
        }
        else
        {
            sort(c,c+n);
            sum=0;
            for(int i=0;i<n-1;i++)
                sum+=c[i];
            for(int i=0;i<n-1;i++)
            {
                if(c[n-1]>=sum)
                {
                    ans=c[n-1];
                    break;
                }
                else
                {
                    if(c[i]>sum-c[n-1])
                    {
                        ans=sum;
                        break;
                    }
                    c[n-1]+=c[i];
                    sum-=c[i];
                }
            }
            cout << ans << endl;
        }
        
    }
	// your code goes here
	return 0;
}

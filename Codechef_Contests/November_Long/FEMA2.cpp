#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,n,k,ir,m,ans,p,cs,w;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> n >> k;
        string s;
        cin >> s;
        ir=0;
        m=0;
        cs=0;
        w=0;
        ans=0;
        while(ir<n&&m<n)
        {
            if(s[ir]=='I'&&s[m]=='M')
            {
                if(abs(w)==0)
                {
                    p=k+1-abs(ir-m)-abs(cs);
                    if(p>0)
                    {
                        ir++;
                        m++;
                        ans++;
                    }
                    else
                    {
                        if(ir>m)
                            m++;
                        else
                            ir++;
                    }
                }
                else
                {
                    if(ir>m)
                        m++;
                    else
                        ir++;
                }
            }
            if(s[ir]!='I')
            {
                if(s[ir]==':')
                    cs++;
                if(s[ir]=='X')
                    w++;
                ir++;
            }
            if(s[m]!='M')
            {
                if(s[m]==':')
                    cs--;
                if(s[m]=='X')
                    w--;
                m++;
            }
        }
        cout << ans << endl;
    }
	// your code goes here
	return 0;
}

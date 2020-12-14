#include <iostream>
using namespace std;

int main() {
    int d1,v1,d2,v2,p,dcheck,ans;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    ans=0;
    if(d1>d2)
    {
        dcheck=d2;
        while(ans<p)
        {
            if(dcheck<d1)
            {
                ans+=v2;
                dcheck++;
            }
            else
            {
                ans+=(v1+v2);
                dcheck++;
            }
        }
    }
    else
    {
        dcheck=d1;
        while(ans<p)
        {
            if(dcheck<d2)
            {
                ans+=v1;
                dcheck++;
            }
            else
            {
                ans+=(v1+v2);
                dcheck++;
            }
        }
    }
    dcheck--;
    cout << dcheck << endl;
	// your code goes here
	return 0;
}

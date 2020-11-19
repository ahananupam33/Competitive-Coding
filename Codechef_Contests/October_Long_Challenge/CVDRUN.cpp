#include <iostream>
using namespace std;

int main() {
    int T,n,k,x,y,flag;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        cin >> n >> k >> x >> y;
        int a[n+1]={0};
        a[x]++;
        if(x==y)
        {
            cout << "YES" << endl;
            continue;
        }
        while(true)
        {
            x=(x+k)%n;
            if(a[x]==1)
            {
                flag=false;
                break;
            }
            else
                a[x]++;
            if(x==y)
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

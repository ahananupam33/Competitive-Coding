#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,n;
    cin >> T;
    int a[100001]={0};
    a[0]=2;a[1]=3;a[2]=1;a[3]=5;a[4]=4;
    for(int i=5;i<100000;i++)
    {
        a[i]=i+1;
        if((a[i-1]&a[i-2])==0)
            swap(a[i],a[i-1]);
    }
    for(int i=0;i<T;i++)
    {
        cin >> n;
        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }
        if((n&(n-1))==0)
        {
            cout << -1 << endl;
            continue;
        }
        for(int i=0;i<n;i++)
            cout << a[i] << " ";
        cout << endl;
    }
	// your code goes here
	return 0;
}

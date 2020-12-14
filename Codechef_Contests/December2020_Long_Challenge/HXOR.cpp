#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T,n,x,itr;
    cin >> T;
    while(T--)
    {
        cin >> n >> x;
        int a[n];
        vector<vector<int>> bit_loc(31);
        vector<int> ptr(31,0);
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        for(int i=0;i<n;i++)
        {
            for(int j=30;j>=0;j--)
            {
                if((1<<j)&a[i])
                    bit_loc[j].push_back(i);
            }
        }
        
        itr=0;
        for(int i=0;i<n-1;i++)
        {
            if(itr==x)
                break;
            for(int j=30;j>=0;j--)
            {
                if(itr==x)
                    break;
                if((1<<j)&a[i])
                {
					if (ptr[j]+1 < (int)bit_loc[j].size())
					{
						a[i] ^= (1 << j);
						a[bit_loc[j][ptr[j] + 1]] ^= (1 << j);
						ptr[j] += 2;
					}
					else
					{
						a[i] ^= (1 << j);
						a[n - 1] ^= (1 << j);
					}
					itr++;
                }
            }
        }
		int y = x - itr;
		if (n == 2 && y % 2 == 1)
		{
			a[n - 1] ^= 1;
			a[n - 2] ^= 1;
		}

		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cout << endl;
    }
	// your code goes here
	return 0;
}

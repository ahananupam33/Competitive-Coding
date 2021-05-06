// Problem Link : https://codeforces.com/contest/1520/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll int ans=0;
        map<int,int> count;
        
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            a-=i;
            ans+=count[a];
            count[a]++;
        }
        cout << ans << endl;
    }
}

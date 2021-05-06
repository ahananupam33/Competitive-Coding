// Problem link : https://codeforces.com/contest/1519/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int univ[n];
        int ski[n];
        vector<vector<int>> bst(n);
        
        for(int i=0;i<n;i++){
            cin >> univ[i];
            univ[i]--;
        }
        for(int i=0;i<n;i++){
            cin >> ski[i];
            bst[univ[i]].push_back(ski[i]);
        }

        // Arrange the skills of each university in descending order
        for(int i=0;i<n;i++){
            sort(bst[i].begin(), bst[i].end(), greater<int>());
        }
        
        // 2D vector containing n vectors initialised to 0
        vector<vector<ll>> pr(n, vector<ll>(1, 0));
        
        for(int i=0;i<n;i++){
            for (int x : bst[i]) 
                pr[i].push_back(pr[i].back() + x);
        }
        
        vector<ll> ans(n);
        for(int i=0;i<n;i++){
            for (int k = 1; k <= int(bst[i].size()); ++k)
                ans[k - 1] += pr[i][bst[i].size() / k * k];
        }
        
        for(int i=0;i<n;i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}

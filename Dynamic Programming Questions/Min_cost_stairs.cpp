// Find the minimum cost of climbing the steps for a certain cost of each step and if only 1 or 2 steps can be traversed

#include <bits/stdc++.h>
using namespace std;

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    vector<int> minCost(n+1,0);
    
    for(int i=2;i<=n;i++){
        int OneStep = minCost[i-1] + cost[i-1];
        int TwoStep = minCost[i-2] + cost[i-2];
        minCost[i] = min(OneStep, TwoStep);
    }
        
    return minCost[n];
}

int main(){
    int n;
    cin >> n;
    vector<int> cost(n);

    for(int i=0;i<n;i++)
        cin >> cost[i];
    
    cout << minCostClimbingStairs(cost) << endl;
}

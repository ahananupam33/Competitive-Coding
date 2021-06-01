// Question link: https://www.codechef.com/LTIME96B/problems/CHESUB

#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int inf = 1e18;

ll int solve(vector<ll int> &arr, int n, int k){
  ll int dp[n+1][k+1],prefix[n+1][k+1];
	ll int b[k];
	for(int i=0;i<k;i++)
	    b[i]=i+1;
	        
	for(int i=0;i<n;i++){
	    dp[i][0] = 0;
	    prefix[i][0] = 0;
	    for(int j=1;j<=k;j++){
	       dp[i][j] = -inf;
	       prefix[i][j] = -inf;
	    }
    }
	    
	dp[0][1] = arr[0]*b[0];
	prefix[0][1] = dp[0][1];
	    
	for(int i=1;i<n;i++){
	    for(int j=1;j<=k;j++){
	       dp[i][j] = max(dp[i-1][j], prefix[i-1][j-1]) + arr[i]*b[j-1];
	       dp[i][j] = max(dp[i][j],-inf);
	       prefix[i][j] = max(prefix[i-1][j],dp[i][j]);
	    }
    }
	    
	ll int ans = -inf;
	for(int i=0;i<n;i++)
	   ans = max(ans,dp[i][k]);
	return ans;
}
	
int main(){
    int t;
	cin >> t;
	while(t--){
	    int n,k;
	    cin >> n >> k;
      vector<ll int> arr(n);
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	    cout << solve(arr,n,k) << endl;
	}
	return 0;
}

#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;



int topDown(int *price,int *weight,int capacity,int n,int dp[][100]){
	if(n == 0){
		return 0;
	}

	if(dp[n][capacity]!=-1){
		return dp[n][capacity];
	}

	// Chori krlo
	int op1=0,op2=0;
	if(capacity >= weight[n-1]){
		op1 = price[n-1] + topDown(price, weight, capacity- weight[n-1],n-1,dp);
	}
	// Chori mat kro
	op2 = 0 + topDown(price, weight, capacity, n-1,dp);

	return dp[n][capacity]=max(op1,op2);
}

int main(){

    int n;
    

}
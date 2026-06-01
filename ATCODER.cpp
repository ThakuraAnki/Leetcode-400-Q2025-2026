#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

int solve (int n,vector<int>&hi,vector<int>&dp){

    //Base Case
    if(n==1){
        return dp[n]=abs(hi[n]-hi[n-1]);
    }
    if(n==0)return 0;
    if(dp[n]!=-1){
        return dp[n];
    }

    //recursive case
    int op1,op2;

    //take 1step
    op1=abs(hi[n]-hi[n-1])+solve(n-1,hi,dp);
    //take 2step
    op2=abs(hi[n]-hi[n-2])+solve(n-2,hi,dp);
    return dp[n]=min(op1,op2);
}

int main(){

    int n;cin>>n;

    vector<int>hi(n);
    FOR(n){
        cin>>hi[i];
    }
    vector<int>dp(n+1,-1);
    cout<<solve(n-1,hi,dp)<<endl;

}
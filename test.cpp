#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    FOR(n)cin>>arr[i];

    int leftMax[n];
    leftMax[0]=INT_MAX;
    int rightMIN[n];
    rightMIN[n-1]=INT_MAX;

    int ans=arr[0;]
    for(int i=1;i<n;i++){
        leftMax[i]=ans;
        ans=max(ans,arr[i]);
    }
    ans=INT_MIN;

  for (int i = n-1; i >=0; i--)
  {
    
    ans=min(ans,a[i]);

  }
  
    for(int i=0;i<n;i++){
        cout<<leftMax[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<rightMIN[i]<<" ";
    }
}
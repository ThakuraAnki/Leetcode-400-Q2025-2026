#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n;cin>>n;
    vector<int>a(n);
    FOR(n){
        cin>>a[i];
    }

    sort(a.begin(),a.end());
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        ans+=abs(a[i]-(i+1));
    }
    cout<<ans<<endl;
    

}
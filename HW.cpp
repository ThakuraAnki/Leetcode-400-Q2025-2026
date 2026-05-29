#include <bits/stdc++.h>
#define ll long long
// #include "mdsify_debug.h"
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<ll>pre(n);
    pre[0]=v[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+v[i];
    }
    for(int x:pre){
        cout<<x<<" ";
    }
    cout<<endl;
    // debug(pre);
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    int m;
    cin>>m;
    while(m--){
        int t,l,r;
        cin>>t>>l>>r;
        l--,r--;
        cout<< " ANSWER HERE"<<endl;

        if(t==1) cout<<pre[r]-(l==0?0:pre[l-1])<<endl;
        else cout<<v[r]-(l==0?0:v[l-1])<<endl;
        cout<<endl;
    }

    
    return 0;
}
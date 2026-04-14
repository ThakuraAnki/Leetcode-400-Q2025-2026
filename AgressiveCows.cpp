#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;
bool isPossible(ll*a,ll n,ll cows,ll d){
    ll pc=1;
    ll x=a[0];
    for (int i = 1; i < n; i++)
    {
        if(a[i]-x>=d){
            pc++;
            x=a[i];
            if(pc==cows)return true;
        }
    }
        return false;
    

}
ll AgrssiveCows(ll* a,ll n,ll cows){
    sort(a,a+n);
    ll s=0,e=a[n-1]-a[0];
    ll ans;
    while(s<=e){
        ll mid=(s+e)/2;
        if(isPossible(a,n,cows,mid)==true){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }

    }
    return ans;
}
int main(){

    ll n,cows;
    cin>>n>>cows;
    ll a[100005];
    FOR(n){
        cin>>a[i];
    }
   cout<< AgrssiveCows(a,n,cows);



    

}
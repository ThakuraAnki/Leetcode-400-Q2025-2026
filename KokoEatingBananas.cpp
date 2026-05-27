#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

int KokoKhayeBananas(int *a,int n,int Tsum){


    int ans=0;
    for(int i=1;i<=Tsum;i++){
        if(isPossible(a,i)==true){
            ans=i;
        }
    }
}
int main(){

    int n;cin>>n;
    int p[10005];
    int h;cin>>h;
    int TSum=0;

    FOR(n){
        cin>>p[i];
    }
    FOR(n){
        TSum+=p[i];
    }

}
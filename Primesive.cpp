#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n;cin>>n;
    vector<bool>prime(n+1,true);

    for (int  i = 2; i <=n; i++){
        if(prime[i]==true){
            
        
        for(int j=i*i;j<=n;j+=i){
            prime[j]=false;
        }
    }
    }

    for (int i = 2; i <=n; i++)
    {
       if(prime[i]){
        cout<<i<<" ";
       }
    }
    
    




}
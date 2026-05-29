#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){

    int n;
    cin>>n;


    for (int  i = 0; i < n; i++)
    {
       a[i]%=n;
       a[i]=(a[i]+n)%n;
    }

    int rem[100000]={};

    rem[0]=1;
    for (int i = 0; i < n; i++)
    {
       rem[a[i]]
    }
    
    


}
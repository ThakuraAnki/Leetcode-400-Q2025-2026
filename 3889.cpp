#include<bits/stdc++.h>
#define FOR(n)for(int i = 0; i < n; i++)
#define ll long long
using namespace std;


int main(){
        string s;
        cin>>s;
        int ans=0;
        map<char,int>m;
        for(auto a : s){
            m[a]++;
        }
        for(char val='a';val<='z';val++){
            int apsdiff=(m[val]-m[('z'-(val-'a'))]);
            ans+=apsdiff;
        }
        for(char i='0';i<='9';i++){
            int apsdiff=(m[i]-m[('9'-(i-'0'))]);
            ans+=apsdiff;
        }
        cout<< ans/2;
}
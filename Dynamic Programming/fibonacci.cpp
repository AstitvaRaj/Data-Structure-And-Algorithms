#include<bits/stdc++.h>
using namespace std;

map<int,int> dp;

int fib(int n){
    if(n<=1) 
        return n;
    if(dp.find(n)!=dp.end()) 
        return dp[n];
    dp[n] = fib(n-1) + fib(n-2);
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    fib(n);
    for(int i=1;i<=n;i++){
        cout<<dp[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  //no of coins
    cin>>n;
    int coins[n];
    for (int i = 0; i < n; i++)
    {
        int x;  //coin value
        cin>>x;
        coins[i] = x;
    }
    sort(coins,coins+n);
    // for (auto& i:coins)
    // {
    //     cout<<i<<" ";
    // }
    int start = 0;
    int end = n-1;
    int sum_twin;
    int sum_me=0,coins_taken=0;         //1 2 2
    for (int i = end; i>=start; i--)
    {
        sum_twin=0;
        for(int j =0; j<i;j++){
            sum_twin+=coins[j];
        }
        // cout<<sum_twin;
        // cout<<endl;
        sum_me+=coins[i];
        coins_taken++;
        if(sum_me>sum_twin){
            break;
        }
    }
    // cout<<endl;
    cout<<coins_taken;
    
    
    return 0;
}
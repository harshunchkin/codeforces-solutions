#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;    //n = nof of tv sets, m =nof tvbob can carry
    cin>>n>>m;
    int tv[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        tv[i]=x;
    }
    sort(tv,tv+n);
    // for(auto& i:tv){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    int profit=0;
    for(int i=0;i<m;i++){
        if(tv[i]<=0){
            profit+=tv[i];
        }
    }
    if(profit>=0){
        cout<<0;
    }
    else    cout<<abs(profit);
    
    return 0;
}
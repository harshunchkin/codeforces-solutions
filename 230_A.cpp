#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;    //s= strength, n = no of dragons;
    cin>>s>>n;
    // int hp[n];
    // int bonus[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>hp[i];
    //     cin>>bonus[i];
    // }
    // cout<<endl;
    pair<int,int> pairt[n]; 
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        pairt[i].first = x;
        int b;
        cin>>b;
        pairt[i].second=b;

    }
    sort(pairt,pairt+n);
    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<pairt[i].first<<" ";
    //     cout<<pairt[i].second<<endl;
    // }
    
    // for (int i = 0;i<n;i++)
    // {
    //     cout<<hp[i]<<" ";
    //     cout<<bonus[i]<<endl;
    // }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(pairt[i].first>=s){
            cout<<"NO";
            break;
        }
        else{
            s+=pairt[i].second;
            count++;
        }
    }
    if(count==n){
        cout<<"YES";
    }
    
    
    
    return 0;
}
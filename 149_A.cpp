#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int months[12];
    cin>>k;
    for (int i = 0; i < 12; i++)
    {
        int x;
        cin>>x;
        months[i] =x;
    }
    sort(months,months+12);
    // for(auto& i:months){
    //     cout<<i<<" ";
    // }
    int sum =0,count=0;
    if(k==0)    cout<<0;
    else{
        for (int i = 11; i >= 0; i--)
        {
            sum = sum+months[i];
            count++;
            if(sum>=k){
                break;
            }   
        }
        if(k>sum)   cout<<-1;
        else    cout<<count;
    }
    
    
    return 0;
}
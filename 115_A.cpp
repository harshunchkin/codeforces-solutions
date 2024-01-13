#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //no of employyes
    cin>>n;
    int emp[n+10];
    vector <int> sup;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin>>x;
        emp[i]  =x;
    }
    // for(auto&i : emp){
    //     cout<<i<<" ";               // 5
    // }  
    int count;                             // -1 1 2 1 -1
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        count=0;
        int x = emp[i];
        while(x!=-1){
            x=emp[x];
            count++;
            // cout<<" how ";
        }
        ans= max(ans,count);
    }
    cout<<ans+1;
    // for (int i = 0; i < n; i++)
    // {
    //     if(emp[i]!=-1)
    // }
    
    
    
    return 0;
}
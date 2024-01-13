#include<bits/stdc++.h>
using namespace std;
int main(){
    // long long int n,m;    //n no of houses, m= tasks
    // cin>>n>>m;
    // long long int house[m];
    // for (int i = 0; i < m; i++)
    // {
    //     cin>>house[i];
    // }
    // long long int pres=1,time=0;
    // long long int p =0;
    // while(p<=(m-1)){
    //     if(house[p]==pres && p==m-1){
    //         break;
    //     }
    //     else if(house[p]!=pres){
    //         pres++;
    //         time++;
    //     }
    //     else if(house[p]==pres && house[p+1]>=house[p]){
    //         p++;
    //     }
    //     else{
    //         p++;
    //         time+= (n-pres)+1;
    //         pres=1;
    //     }
    // }
    // cout<<time;
    int n,m;
    cin>>n>>m;
    long long int pres = 1;
    long long int time = 0;

    for (int i = 0; i < m; i++)
    {
        int now;
        cin>>now;
        if(now>=pres){
            time+=(now-pres);
            pres = now;
        }
        else{
            time+=(n-(pres-now));
            pres=now;
        }

    }
    cout<<time;
    
    return 0;
}
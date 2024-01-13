#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; // n is the number of studs, k is the number of times the same team should aprticipate
    cin>>n>>k;
    int studs[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        studs[i] =x;
    }
    sort(studs,studs+n);
    // for (auto& i:studs)
    // {
    //     cout<<i<<" ";
    // }
    int team = 0;
    int len_exhaust = 0;
    for (int i = 0; i < n; i+=3)
    {
        // if(len_exhaust<=n-len_exhaust){
        if((studs[i]+k<=5 && studs[i+1]+k<=5 && studs[i+2]+k<=5) && n>=3){
            team++;
        }
        // }
        // len_exhaust+=3;
        
    }
    // cout<<endl;
    cout<<team;
    return 0;
}
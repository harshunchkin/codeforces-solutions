#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,w;
    cin>>y>>w;
    int pos = 7-max(y,w);
    int ss = 6;
    // cout<<pos<<"/"<<ss<<endl;
    for (int i = 2; i <=pos; i++)       // 3/6
    {
        if(pos%i==0 && ss%i==0){
            pos = pos/i;
            ss = ss/i;
        }
    }
    cout<<pos<<"/"<<ss;

    return 0;
}
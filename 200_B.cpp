#include<bits/stdc++.h>
using namespace std;
double o_vpercent(double &n, double &total_v_orange){
    double total_volume = 100*n;
    double net_vol_orange = (total_v_orange/total_volume)*100;
    return net_vol_orange;
}
int main(){
    double n;
    cin>>n;
    double total_v_orange=0;
    for (int i = 0; i < n; i++)
    {
        double vol_orange;
        cin>>vol_orange;
        total_v_orange = total_v_orange+vol_orange; 
    }
    cout<<o_vpercent(n,total_v_orange);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  //n is the number of forces per vector
    cin>>n;
    int x[n],y[n],z[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
        cin>>y[i];
        cin>>z[i];
    }
    // cout<<endl;
    // for(auto& i:x){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(auto& i:y){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(auto& i:z){
    //     cout<<i<<" ";
    // }
    int sum1 = accumulate(x,x+n,sum1);
    int sum2 = accumulate(y,y+n,sum2);
    int sum3 = accumulate(z,z+n,sum3);
    if(sum1==0 && sum2==0 && sum3==0){
        cout<<"YES";
    }
    else    cout<<"NO";


    return 0;
}
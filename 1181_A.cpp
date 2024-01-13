#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int  m,n,x,i,j;
    // cin>>x>>y>>z;       //x sasha chi, y = masha chi, z= coconut price
    long long int c=0,ans=0;
    // int total = x+y;
    // int coc_b = total/z;
    // long long int rem1 = x%z;
    // long long int rem2 = y%z;
    // long long int ans = (rem1+rem2)/z;
    // long long int c = 0;
    // if(ans>=1){
    //     c=(x - max(rem1,rem2));
    // }
    // ans+= (x/z + y/z);
    // cout<<ans<<" "<<c;
    cin>>m>>n>>x;
    i=m%x,
    j  =n%x;
    ans=(i+j)/x;
    if( ans >=1 )
        c=x- max(i,j);
    ans+=(m/x + n/x );
    cout<< ans <<  " "<<c<<endl;

    // if(total%z!=0){

    // }
    // while(x%z==0 && y%z ==0){
    //     cout<<(x/z) + (y/z);
    // }
    // cout<<(x)

    return 0;
}
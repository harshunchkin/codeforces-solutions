#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = max(max(max(max(max(a*(b+c),a+(b*c)),a+(b+c)),a*(b*c)),(a*b)+c),(a+b)*c);
    cout<<ans;
    // if(a == max(max(a,b),c)){
    //     int ans = max(max(max(max(max(a*(b+c),a+(b*c)),a+(b+c)),a*(b*c)),(a*b)+c),(a+b)*c);
    //     cout<<ans;
    // }
    // else if (b==max(max(a,b),c)){
    //     int ans = max(max(max(max((a*b)+c,(a+b)*c),a*(b+c)),(a*b)*c),a+(b*c));                                                  
    //     cout<<ans;
    //     //(a*c)*b;
    // }
    // else {
    //     int ans = max(max(max(max((a+b)*c,(a*b)+c),(a+b)+c),(a*b)*c),a+(b*c));
    //     cout<<ans;
    //     // cout<<(a+b)*c;
    // }
    return 0;
}
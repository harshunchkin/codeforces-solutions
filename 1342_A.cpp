#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x,y,a,b;
        cin>>x>>y>>a>>b;
        long long int n1,first=0,rem=0;
        n1 = min(x,y);
        first = n1*b;
        rem = abs(n1-max(x,y))*a;
        long long int rem1 = first+rem;

        long long int n2 = min(a,b);
        long long int rem2 = (x+y)*n2;
        if(n2==a){
            cout<<min(rem1,rem2)<<endl;
        }
        else            cout<<rem1<<endl;
    }
    return 0;
}
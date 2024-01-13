#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int times=a;
    int div,rem;
    while(a>=b){
        div = a/b;
        times+=div;
        rem = a%b;
        a = div+rem;
    }
    cout<<times;
    return 0;
}
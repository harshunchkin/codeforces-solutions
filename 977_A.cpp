#include<bits/stdc++.h>
using namespace std;
int subtr(int &n, int &k){
    while(k!=0){
        if (n%10==0) n=n/10;
        else n--; 
        k--;
    }
    return n;
}
int main(){
    int k,n; //n = number ,k =loop
    cin>>n>>k;
    if (subtr(n,k)>0)
    {
        cout<<subtr(n,k);
    }
    else cout<<-1;
    return 0;
}
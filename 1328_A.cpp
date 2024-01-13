#include<bits/stdc++.h>
using namespace std;
int div_prob(int a,int b){
    int count = 0;
    if((a%b)==0){
        return count;
    }
    else{
        int x = a%b;
        return (b-x);
    }
}
int main(){
    int t;  //test cases to fulfill
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<div_prob(a,b);
    }
    return 0;
}
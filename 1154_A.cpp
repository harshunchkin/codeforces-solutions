#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int a = max(x1,x2);
    int b = max(a,x3);
    int c = max(b,x4);  //max element in 4 numbers i.e a+b+c
    if(c==x1){
        cout<<x1-x2<<" "<<x1-x3<<" "<<x1-x4;
    }
    if(c==x2){
        cout<<x2-x1<<" "<<x2-x3<<" "<<x2-x4;
    }
    if(c==x3){
        cout<<x3-x2<<" "<<x3-x1<<" "<<x3-x4;
    }
    if(c==x4){
        cout<<x4-x2<<" "<<x4-x3<<" "<<x4-x1;
    }
    return 0;
}
#include<bits/stdc++.h>
#include<chrono>
using namespace std;
auto start = chrono::steady_clock::now();
int main(){
    int n;
    cin>>n;
    if (n>=1 && n<=100){
        if (n==2){
            cout<<"NO";
        }
        else if (n%2==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }   
    }
    auto end = chrono::steady_clock::now();
    auto diff = end-start;
    cout<<endl;
    cout<<chrono::duration<double,milli>(diff).count()<<endl;
    return 0;
}
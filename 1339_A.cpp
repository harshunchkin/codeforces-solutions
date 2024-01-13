#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,t;  //4n-2 triangles
    cin>>t;
    vector <long long int> ways;
    while(t--){
        cin>>n;
        if(n==1){
            ways.push_back(1);
        }
        else ways.push_back(n);
    }
    for (auto& i :ways)
    {
        cout<<i<<endl;
    }
    
    return 0;
}
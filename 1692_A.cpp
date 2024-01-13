#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> ans;
    while(t--){
        int a,b,c,d; // taimur dist travelled
        int front = 0;
        cin>>a>>b>>c>>d;
        int max_e = max(max(max(a,b),c),d);
        if(max_e==a){
            ans.push_back(0);
        }
        else{
            if(b-a>0)   front++;
            if(c-a>0)   front++;
            if(d-a>0)   front++;
            ans.push_back(front);
        }
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}
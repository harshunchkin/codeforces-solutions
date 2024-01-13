#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> ans; 
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int ans1 = n - n%x +y;
        if (ans1<=n){
            ans.push_back(ans1);
        }
        else{
            ans.push_back(ans1-x);
        }
        
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}
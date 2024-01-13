#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> ans;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            ans.push_back(n/2);
        }
        else    ans.push_back((n/2)+1);
    }
    cout<<endl;
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}
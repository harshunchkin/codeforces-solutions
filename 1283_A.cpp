#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> ans;
    while(t--){
        int h,m;
        cin>>h>>m;
        int hrs_left = 60*(23-h);
        int min_left = (60-m);
        ans.push_back(hrs_left+min_left);
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}
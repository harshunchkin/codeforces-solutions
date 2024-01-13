#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    vector <int> master;
    cin>>t;
    while(t--){
        cin>>n;
        vector <int> ans;
        for (int i = 1; i <= 3000; i++)
        {
            if(i%3==0 || i%10==3)  continue;
            else ans.push_back(i);
        }
        auto it = ans.emplace(ans.begin(),0);
        for(int i =1; i<=ans.size()-1;i++){
            if(n==i)   master.push_back(ans.at(i)); 
        }
    }
    for(auto& i:master){
        cout<<i<<" ";
    }
    
}
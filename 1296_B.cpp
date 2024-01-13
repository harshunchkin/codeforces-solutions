#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <long long int> ans;
    while(t--){
        long long int s;
        cin>>s;
        long long int total=0,div;
        if(s<10){
            ans.push_back(s);
        }
        else{
            total = s,div=0;
            while(s>=10){
                div = s/10;
                s = s%10;
                s+=div;
                total+=div;
            }
            ans.push_back(total);
        }
    }
    for(auto&i:ans){
        cout<<i<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <string> ans;
    while(t--){
        int rating;
        cin>>rating;
        if(rating>=1900)    ans.push_back("Division 1");
        else if(1600<=rating && rating<1900)    ans.push_back("Division 2");
        else if(1400<=rating && rating<1600)  ans.push_back("Division 3");
        else    ans.push_back("Division 4");
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}
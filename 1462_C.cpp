#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> ans;
    while(t--){
        int x;
        cin>>x;
        set <int> num;
        int k=9,sum=0;
        string s="";
        if(x<=9){
            ans.push_back(x);
        }
        else if(x>45){
            ans.push_back(-1);
        }
        else{
            while(k>0){
                if(x-sum >= k){
                    sum+=k;
                    s +=(k+'0');    //converts to its corresponding character
                    num.insert(k);  //number used
                }
                k--;
            }
            if(s.length()!=num.size() || sum!=x){
                ans.push_back(-1);
            }
            else{
                sort(s.begin(),s.end());
                ans.push_back(stoi(s));
            }
        }
    }
    for(auto&i :ans){
        cout<<i<<endl;
    }
    return 0;
}
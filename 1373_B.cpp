#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <string> ans; 
    
    string s;
    while(t--){
        cin>>s;
        int a_win=0,b_win=0,turn=0,f=0;
        while(s.length()>1){
            if(turn==0){
                if(s.find("01")!=-1){
                    s.erase(s.find("01"),2);
                    a_win++;
                }
                else if(s.find("10")!=-1){
                    s.erase(s.find("10"),2);
                    a_win++;
                }
                else{
                    f=1;
                    ans.push_back("NET");
                    break;
                }
                turn++;
            }
            else{
                if(s.find("01")!=-1){
                    s.erase(s.find("01"),2);
                    b_win++;
                }
                else if(s.find("10")!=-1){
                    s.erase(s.find("10"),2);
                    b_win++;
                }
                else{
                    f=1;
                    ans.push_back("DA");
                    break;
                }
                turn--;
            }
        }
        if(f!=1){
            if(a_win>b_win) ans.push_back("DA");
            else ans.push_back("NET"); 
        }
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}
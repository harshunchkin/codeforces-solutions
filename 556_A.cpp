#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //length of the string
    cin>>n;
    string s;
    cin>>s;
    int ones=0,zeroes = 0;
    // int count=0;
        // while(s.find("10")!=-1 || s.find("01")!=-1){
        //     if(s.find("10")!=-1){
        //         s.erase(s.find("10"),2);
        //     }
        //     if(s.find("01")!=-1){
        //         s.erase(s.find("01"),2);
        //     }
        // }
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1')   ones++;
        else    zeroes++;
    }
    cout<<abs(ones-zeroes);
    
    // cout<<s.length();
    return 0;
}
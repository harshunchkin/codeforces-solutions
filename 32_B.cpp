#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int start = 0;                  //-..
    while(start<=(s.length()-1)){
        if(s[start]=='-' && s[start+1]=='.'){
            cout<<1;
            start+=2;
        }
        else if(s[start]=='-'&& s[start]=='-'){
            cout<<2;
            start+=2;
        }
        else{
            cout<<0;
            start++;
        }

    }
    return 0;
}
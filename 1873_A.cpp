#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="abc"){
            cout<<"YES"<<endl;
        }
        else if((s[0]=='b' && s[1]=='a' && s[2]=='c') || (s[0]=='a' && s[1]=='c' && s[2]=='b') || (s[0]=='c' && s[1]=='b' && s[2]=='a')){
            cout<<"YES"<<endl;
        }
        else    cout<<"NO"<<endl;
    }
    return 0;
}
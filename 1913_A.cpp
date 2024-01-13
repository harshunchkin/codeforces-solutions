#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "12";
    // cin>>s;
    int i1 = s.length()/2;
    int i2 = s.length()/2;
    string p = s.substr(0,i1);
    string q = s.substr(i2,s.length()-1);
    if(q[0]=='0'){
        cout<<-1<<endl;
    }
    else{
        while((stoi(q)>stoi(p)) && q[0]!='0'){
            i1--
        }
    }
    cout<<p<<" "<<q;
    return 0;
}
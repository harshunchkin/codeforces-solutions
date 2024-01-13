#include<bits/stdc++.h>
using namespace std;
string birlo(string &s, string &t){
    string l="";
    for (char k:s)
    {
        l = k+l;
    }
    if (l==t) return "YES";
    else return "NO";
}
int main(){
    string s,t;
    cin>>s>>t;
    cout<<birlo(s,t);
    return 0;
}
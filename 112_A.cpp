#include<bits/stdc++.h>
using namespace std;
int pe_strn(string &a, string &b){
    transform(a.begin(),a.end(),a.begin(),::toupper);
    transform(b.begin(),b.end(),b.begin(),::toupper);
    return a.compare(b);

}
int main(){
    string a,b;
    cin>>a>>b;
    // int length = a.length(); 
    // transform(a.begin(),a.end(),a.begin(),::toupper);
    // cout<<a<<endl;
    cout<<pe_strn(a,b);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
            s.erase(s.begin()+i);
            i=-1;
            // cout<<s<<endl;
        }
    }
    // cout<<s<<" "<<s.length();
    for (int i = 0; i < s.length(); i+=2)
    {
        s.insert(s.begin()+i,'.');
    }
    cout<<s;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string dod = "hello";
    int j=0,le=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==dod[j]){
            j++;
            le++;
        }
    }
    if(le==5){
        cout<<"YES";
    }
    else cout<<"NO";
    
    
    
    return 0;
}
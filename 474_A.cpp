#include<bits/stdc++.h>
using namespace std;
int main(){
    string p = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char shift;
    string n;
    cin>>shift>>n;
    string ans = "";
    if(shift=='R'){
        for (int i = 0; i < n.length(); i++)
        {
            ans = ans + p[p.find(n[i])-1];
        }
    }
    else{
        for (int i = 0; i < n.length(); i++)
        {
            ans = ans+ p[p.find(n[i])+1];
        }
        
    }
    cout<<ans;
    return 0;
}
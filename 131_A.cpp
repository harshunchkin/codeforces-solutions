#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int f=0,count=0;
    for (int i = 1; i < s.length(); i++)
    {
        if(islower(s[i])){
            count++;
        }

    }
    if(count!=0){
        cout<<s;
    }
    else{
        if(islower(s[0])){
            char p = toupper(s[0]);
            string s1 = (s.substr(1));
            transform(s1.begin(),s1.end(),s1.begin(),::tolower);
            cout<<p+s1;
        }
        else{
            char p = tolower(s[0]);
            string s1 = (s.substr(1));
            transform(s1.begin(),s1.end(),s1.begin(),::tolower);
            cout<<p+s1;
        }
    }
    return 0;
}
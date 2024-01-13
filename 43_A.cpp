#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  //who scord goals
    cin>>n;
    string s,p;
    cin>>s;
    int count1=1,count2=0;
    for (int i = 1; i < n; i++)
    {
        string g;
        cin>>g;
        if(g==s){
            count1++;
        }
        else{
            p = g;
            count2++;
        }
    }
    if(count1>count2){
        cout<<s;
    }
    else    cout<<p;
    
    

    return 0;
}
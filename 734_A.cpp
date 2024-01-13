#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int ant_count=0,dan_count=0;
    for (char i:s)
    {
        if(i=='A') ant_count++;
        else dan_count++;
    }
    if(ant_count>dan_count) cout<<"Anton"<<endl;
    else if (dan_count>ant_count) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    
    return 0;
}
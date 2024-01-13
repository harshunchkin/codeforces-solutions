#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  //events crimes or recruited
    cin>>n;
    vector <int> events;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        events.push_back(x);
    }
    int cops_hired= 0, crimes_commit=0;
    for (int i =0;i<n;i++)
    {
        if(events.at(i)==-1){
            crimes_commit++;
            if(cops_hired!=0){
                crimes_commit = crimes_commit-1;
                cops_hired--;
            }
        }
        else{
            cops_hired = cops_hired+events.at(i);
        }   
    }
    cout<<crimes_commit;
    return 0;
}
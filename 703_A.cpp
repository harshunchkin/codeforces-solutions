#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  //no of rounds mishka and chris play
    cin>>n;
    vector <string> ans;
    int m,c;    //mishka and chris number
    int mishka_win=0,chris_win=0;
    while(n--){
        cin>>m>>c;
        if(m>c){
            mishka_win++;
        }
        else if(c>m)    chris_win++;
        else{   
            mishka_win+=0;
            chris_win+=0;
        }
    }
    if(mishka_win>chris_win)    cout<<"Mishka";
    else if (chris_win>mishka_win)  cout<<"Chris";
    else    cout<<"Friendship is magic!^^";

    return 0;
}
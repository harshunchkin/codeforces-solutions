#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int move=1,a_move=0,m_move=0;
    int total_sticks = n+m;
    while((total_sticks)!=0 && n*m!=0){
        if (move==1){
            total_sticks-=2;
            n--;
            m--;
            a_move++;
            move=0;
        }
        else{
            total_sticks-=2;
            n--;
            m--;
            m_move++;
            move=1;
        }
    }
    if(m_move>=a_move)  cout<<"Malvika";
    else    cout<<"Akshat";
    
    
    // if(n==1 || m==1){
    //     cout<<"Akshat";
    // }
    // else if(n%2==0 && m>=n){
    //     cout<<"Malvika";
    // }
    // else if(n%2==0 && m<n){
    //     cout<<"Akshat";
    // }
    // else if(n%2!=0 && m>=n){
    //     cout<<"Akshat";
    // }
    // else{
    //     cout<<"Malvika";
    // }
    return 0;
}
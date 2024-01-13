#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int moves=0;
    if(m>n){
        cout<<-1<<endl;
    }
    else{
        if(n%2==0){
            moves = n/2;
        }
        else{
            moves = (n/2)+1;
        }
        while(moves%m!=0){
            moves++;
        }
        cout<<moves<<endl;
    }

    return 0;
}
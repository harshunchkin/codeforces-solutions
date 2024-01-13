#include<bits/stdc++.h>
using namespace std;
// beautiful year
int b_year(int y){
    while(true)
    {
        int lol = y;
        int a = lol%10;                        
        int b = (lol/10)%10;
        int c = (lol/100)%10;
        int d = (lol/1000);
        if(a==b||a==c||a==d||b==c||b==d||c==d){
            y++;
        }
        else{
            return y;
        }
    }
    
}
int main(){
    int y;
    cin>>y;
    y = y+1;
    cout<<b_year(y);
    return 0;
}
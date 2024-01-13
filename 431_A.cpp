#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2,a3,a4;    //4 layers calories given;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;     //square appear in the strip
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        // int y = ;
        if(int(s[i])-48==1)    sum+=a1;
        else if(int(s[i])-48==2)   sum+=a2;
        else if (int(s[i])-48==3)  sum+=a3;
        else    sum+=a4;    
    }
    cout<<sum;
    return 0;
}
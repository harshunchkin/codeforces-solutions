#include<bits/stdc++.h>
using namespace std;
int main(){
    string n1,n2;
    cin>>n1>>n2;
    string n3 = "";
    for (int i = 0; i < n1.length(); i++)
    {
        if(n1[i]=='1' && n2[i]=='1'){
            n3 = n3 +'0';
        }
        else if(n1[i]=='0' && n2[i]=='0'){
            n3 = n3+'0';
        }
        else{
            n3 = n3+'1';
        }
    }
    cout<<n3;
    return 0;
}
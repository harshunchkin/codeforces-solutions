#include<bits/stdc++.h>
using namespace std;
int main(){
   string n;
   cin>>n;
   if (isupper(n[0])==1){
        cout<<n;
   }
   else{
    char c = n[0];
    n[0]= (char) toupper(c);
    cout<<n;
   }
    return 0;
}
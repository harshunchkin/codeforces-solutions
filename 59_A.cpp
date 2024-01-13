#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c1=0,c2=0;
    for (int i:s)
    {
        if (isupper(i)==1){
            c1++;
        }
        else c2++;
    }
    if (c1>c2) transform(s.begin(),s.end(),s.begin(),:: toupper);
    else transform(s.begin(),s.end(),s.begin(),:: tolower);
    cout<<s<<endl;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
//is your horseshoe on the other hoof
int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    if(s1==s2&&s2==s3&&s3==s4){
        cout<<3<<endl;
    }
    else if((s1==s2 && s2==s3) || (s1==s2 && s2==s4) || (s2==s3 &&s3==s4) || (s3==s4 && s4==s1) || (s1==s4 && s2==s3) || (s1==s3 && s2==s4) || (s1==s2 && s3==s4)){
        cout<<2<<endl;
    }
    else if ((s1==s2) || (s1==s3) || (s1==s4) || (s2==s3) || (s2==s4) || (s3==s4)){
        cout<<1<<endl;
    }
    else    cout<<0<<endl;
    return 0;
}
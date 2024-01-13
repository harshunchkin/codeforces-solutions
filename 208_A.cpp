#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    // int count=0;
    while(s.find("WUB")!=-1){
        int p = s.find("WUB");
        int q = s.find("WUB",p+1);
        if(p==0){
            s =s.erase(p,3);
        }
        else if (q-p==3){
            s =s.erase(q,3);
            s = s.erase(p,3);
            s.insert(s.begin()+p,' ');

        }
        else    s=s.erase(p,3), s.insert(s.begin()+p,' ');
    }
    cout<<s;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string guest,host,pile;
    cin>>guest>>host>>pile;
    if(pile.length()>(guest.length()+host.length())){
        cout<<"NO";
    }
    else{
        for (int i = 0; i < guest.length(); i++)
        {
            for (int j = i; j < pile.length(); j++)
            {
                if(guest.at(i)==pile.at(j)){
                    swap(pile.at(i),pile.at(j));
                }
            }
            
        }
        for (int i = 0; i < host.length(); i++)
        {
            for (int j = i+(guest.length()); j < pile.length(); j++)
            {
                if(host.at(i)==pile.at(j)){
                    swap(pile.at(i+guest.length()),pile.at(j));
                }
            }
            
        }
        if(guest+host==pile)    cout<<"YES";
        else    cout<<"NO";
        // cout<<pile<<endl;
        
    }
    return 0;
}
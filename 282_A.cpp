#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;     
    cin>>n;
    int x=0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        if(s.find("X++")==0){
            x++;
        }
        else if(s.find("++X")==0){
            ++x;
        }
        else if(s.find("X--")==0){
            x--;
        }
        else if (s.find("--X")==0){
            --x;
        }
        else  return -1;
    }
    cout<<x<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int cc(string small,int n,string s){
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]==small[0] && s[i+1]==small[1]){
            count++;
        }
        
    }
    return count;
    
}
int main(){
    //we call tht substring again and again
    int n;
    string s;
    cin>>n>>s;
    string ans;
    int temp=0,max_o=0;
    for (int i = 0; i < n-1; i++)
    {
        string small = s.substr(i,2);

        int temp = cc(small,n,s);
        if(temp>max_o){
            max_o =temp;
            ans = small;
        }
    }
    cout<<ans;
    
    return 0;
}
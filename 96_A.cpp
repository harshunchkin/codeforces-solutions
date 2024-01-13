#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int start = 0;
    int end = 6;
    int o =0;
    while(end-start==6 && end<s.length()){
        int count0=0,count1=0;
        for(int i = start; i<=end;i++){
            if (s[i]=='0'){
                count0++;
            }
            else    count1++;
        }
        if(count0==7 || count1==7){
            o++;
            cout<<"YES";
            break;
        }
        start++;
        end++;
    }
    if(o!=1){
        cout<<"NO";
    }
    return 0;
}
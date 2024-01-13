#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;   //6 digits sttring 123321
    vector <string> ans;
    while(t--){
        cin>>s;
        int l = stoi(s);
        // int a = 0;
        // int b = 5;
        int sum1= 0,sum2=0;
        for (int i = 1; i <=6; i++)
        {
            if(i<=3){
                sum1+= l%10;
                l= l/10;
            }
            else{
                sum2+=l%10;
                l=l/10;
            }
        }
        if(sum1==sum2)  ans.push_back("YES");
        else    ans.push_back("NO");
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b;
    vector <int> ans;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int count =0;
        //obtain b from a
        int c = abs(a-b);
        // int tens_req = c/10;
        // cout<<c<<endl;
        if (c==0)   ans.push_back(0);
        else if(c%10==0)    ans.push_back(c/10);
        else    ans.push_back((c/10)+1);
    }

    // cout<<c;
    // while(t--){
    //     long long int a,b;
    //     cin>>a>>b;
    //     long long int count =0;
    //     //obtain b from a
    //     long long int c = abs(a-b);
    //     // cout<<c;
    //     while(c!=0){
    //         if(c>=10){
    //             count++;
    //             c =c-10;
    //         }
    //         else if(c==9){
    //             c = c-9;
    //             count++;
    //         }
    //         else if(c==8){
    //             c = c-8;
    //             count++;
    //         }
    //         else if(c==7){
    //             c = c-7;
    //             count++;
    //         }
    //         else if(c==6){
    //             c = c-6;
    //             count++;
    //         }
    //         else if(c==5){
    //             c = c-5;
    //             count++;
    //         }
    //         else if(c==4){
    //             c = c-4;
    //             count++;
    //         }
    //         else if(c==3){
    //             c = c-3;
    //             count++;
    //         }
    //         else if(c==2){
    //             c = c-2;
    //             count++;
    //         }
    //         else if(c==1){
    //             c = c-1;
    //             count++;
    //         }
    //         else{
    //             ans.push_back(0);
    //         }
    //     }
    //     ans.push_back(count);  
    // }
    // for(auto& i:ans){
    //     cout<<i<<endl;
    // } 
    for (auto& i:ans)
    {
        cout<<i<<endl;
    }
    
    return 0;
}
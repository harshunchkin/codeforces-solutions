#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  //no of candies //divide among two sister
    cin>>t;
    vector <int> can;
    for (int i = 0; i <t; i++)
    {
        int n;
        cin>>n;
        can.push_back(n);
    }
    // int count=0;
    for(auto& i:can){
        int count=0;
        if(i%2==0){
            int a = (i/2)+1;
            // int b = (i/2)-1;
            // while((a+b)==i &&(a>0) &&(b>0)){
            //     a++;
            //     b--;
            //     count++;
            // }
            count = i-a;
        }
        else{
            int a = (i/2)+1;
            // int b = (i/2);
            // while((a+b)==i &&(a>0) &&(b>0)){
            //     a++;
            //     b--;
            //     count++;
            // }
            count=i-a;
        }
        cout<<count<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    long long int sum_even,sum_odd,n;
    vector <string> ans;
    while(t--){
        cin>>n;
        sum_even=0;
        sum_odd=0;
        if(n%4!=0){
            ans.push_back("NO");

        }
        else{
            cout<<"YES"<<endl;
            for (int i = 2; i <=n; i+=2)
            {
                cout<<i<<" ";
                sum_even+=i;
            }
            for (int i = 1; i <n-2; i+=2)
            {
                cout<<i<<" ";
                sum_odd+=i;
            }
            cout<<sum_even-sum_odd<<endl;  
        }
    }
    return 0;
}
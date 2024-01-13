#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n;
    vector <int> ans;
    cin>>t;
    while(t--){
        cin>>n;
        int count=0;
        while(n!=1){
            if(n%6==0){
                n /=6;
                count++;
            }
            else if (n%3==0){
                n *=2;
                count++;
            }
            else{
                count = -1;
                break;
            } 
        }
        ans.push_back(count);
    }
    for (auto& i:ans)
    {
        cout<<i<<endl;
    }
    
    return 0;
}
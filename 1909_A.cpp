#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> x;
        vector <int> y;
        for (int i = 0; i < n; i++)
        {
            int x1,y1;
            cin>>x1;
            cin>>y1;
            x.push_back(x1);
            y.push_back(y1);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        // for (auto& i:x)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for (auto& i:y)
        // {
        //     cout<<i<<" ";
        // }
        int right=0,left=0,up=0,down=0;
        if(x.at(0)>0)   right++;
        if(x.at(0)<0)   left++;
        if(y.at(0)>0)   up++;
        if(y.at(0)<0)   down++;
        int flag= 0;
        for (int i = 0; i < n-1; i++)
        {
            
            if((x.at(i)<=0 && x.at(i+1)>x.at(i)) || (x.at(i)>=0 && x.at(i+1)>x.at(i))) right++;
            if((x.at(i)<=0 && x.at(i+1)<x.at(i)) || (x.at(i)>=0 && x.at(i+1)<x.at(i)))   left++;
            if((y.at(i)<=0 && y.at(i+1)>y.at(i)) || (y.at(i)>=0 && y.at(i+1)>y.at(i)))   up++;
            if((y.at(i)<=0 && y.at(i+1)<y.at(i)) || (y.at(i)>=0 && y.at(i+1)<y.at(i))) down++;
            if(right>0 && left>0 && up>0 && down>0){
                flag = 1;
                break;
            }
        }
        // cout<<endl;

        if(flag == 1)    cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;
    // cout<<right<<" "<<left<<" "<<up<<" "<<down;
    }
    
    
    
    
    return 0;
}
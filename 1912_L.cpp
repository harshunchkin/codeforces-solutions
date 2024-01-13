#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //length of the string
    cin>>n;
    string s;
    cin>>s;
    int loafs_me =0,onions_me=0;
    // int start = 0;
    // int end = n-1;
    int count=0,pass=1;
    for (int i = 0; i < n; i++)
    {
        int loafs_f=0,onions_f=0;
        if(s[i]=='L')   loafs_me++;     //1
        else    onions_me++;
        for (int j = i+1; j < n; j++)       //2 1       // 1 0 2 1
        {
            if(s[j]=='L')   loafs_f++;
            else    onions_f++;
        }
        if(((loafs_me+onions_me)>=1) && ((loafs_f+onions_f)>=1) && (loafs_me!=loafs_f) && (onions_me!=onions_f)){
            count++;
        }
        if(count!=0)    break;
        pass++;
    }
    if(count==0)    cout<<-1;
    else    cout<<pass;
    // cout<<count;
     
    // while(start<end){     //1 2
    //     if(s[start]=='L'){    
    //         loafs_me++;
    //         }       
    //     if(s[start]=='O'){    
    //         onions_me++;
    //     }
    //     if(s[end]=='L'){   
    //         loafs_f++;
    //     }
    //     if(s[end]=='O'){   
    //         onions_f++;
    //     }
    //     start++;
    //     end--;
    // }
    // int total_me = loafs_me+onions_me;
    // int total_f = loafs_f+onions_f;
    // cout<<loafs_me<<" "<<onions_me<<" "<<loafs_f<<" "<<onions_f<<endl;
    // if((total_me>=1) && (total_f>=1) && (loafs_me!=loafs_f) && (onions_me!=onions_f)){
    //     cout<<1;
    // }
    // else    cout<<-1;

    return 0;
}
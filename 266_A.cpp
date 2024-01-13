#include<bits/stdc++.h>
using namespace std;
int main(){
    int rocks; //n that is number of colored rocks on table = string length
    cin>>rocks;
    string rock_color;
    cin>>rock_color;
    int ptr1=0, ptr2=1;
    int count = 0;
    while(ptr1<=rocks-2 && ptr2<=rocks-1){
        if (rock_color[ptr1]==rock_color[ptr2]){
            count++;
        }
        ptr1++;
        ptr2++;
    }
    cout<<count<<endl;
    return 0;
}
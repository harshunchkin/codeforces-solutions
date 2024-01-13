#include<bits/stdc++.h>
using namespace std;
void add_math(string &num, int &len_num){
    for (int i = 0; i <len_num-2; i++)
    {
        if (isdigit(num[i])){
            int smallest = i;
            for (int j = i+1; i <len_num-1; i++)
            {
                if(num[j]<num[smallest])
                smallest = j;
            }
            swap(num[i],num[smallest]);   
        }
    }
    for (int i = 0; i < len_num; i++)
    {
        cout<<num[i];
    } 
}

int main(){
    string num;
    cin>>num;
    int len_num = num.length();
    add_math(num,len_num);
    return 0;
}
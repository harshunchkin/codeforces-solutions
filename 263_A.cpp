#include<bits/stdc++.h>
using namespace std;
int dupli(string name){
    sort(name.begin(), name.end());
    int fullcount=0;
    for (int i = 0; i < name.length(); i++)
    {
        int count = 1;
        while (i<name.length()-1 && name[i]!=name[i+1]){ //duplicates
            count++;
            i++;
        }
        if ((name.length()-1))-count
    }
    
}
int main(){

    return 0;
}
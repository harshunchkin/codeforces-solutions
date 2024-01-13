#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int faces=0;
    vector <string> poly;
    // poly.push_back("Cube");
    // poly.push_back("Tetrahedron");
    // poly.push_back("Dodecahedron");
    // poly.push_back("Icosahedron");
    // poly.push_back("Octahedron");
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        poly.push_back(s);
    }
    // cout<<endl;
    // for(auto& i:poly){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    for (auto& i:poly)
    {
        if(i=="Tetrahedron")    faces = faces+4;
        else if(i=="Cube")  faces = faces+6;
        else if(i=="Octahedron")    faces = faces+8;
        else if(i=="Dodecahedron")  faces = faces+12;
        else    faces = faces +20;
    }
    cout<<faces;
    return 0;
}
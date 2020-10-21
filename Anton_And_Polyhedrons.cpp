
#include <iostream>
#include<string>
using namespace std;

int main()
{
    long int t = 0 , i = 0,total = 0;
    string s;
    cin>>t;
    for(i = 0 ; i < t ; i++)
    {
        cin>>s;
        if(s == "Tetrahedron")
        total = total + 4;
        else if(s == "Cube")
        total = total + 6;
        else if(s == "Icosahedron")
        total = total + 20;
        else if(s == "Octahedron")
        total = total + 8;
        else if(s == "Dodecahedron")
        total = total + 12;
    }
    cout<<total;
    return 0;
}


#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long int t = 0, i = 0 , j =0 ;
    long int a,b,remainder = 0;
    cin>>t;
    
    for(i = 0 ; i < t ; i++)
    {
        cin>>a;
        cin>>b;
        
        remainder = a % b;
        
        if(remainder == 0)
        
        cout<<"0"<<"\n";
        
        else
        
        cout<<(b-remainder)<<"\n";
            
        
    }
    
    
    
    return 0;
}

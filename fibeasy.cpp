//
//  fibeasy.cpp
//  codechef
//
//  Created by Tanishq Chamola on 14/09/19.
//  Copyright © 2019 Tanishq Chamola. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
//partially correct
/*
int main()
{
    unsigned int t,max=0;
    cin>>t;
    vector<int> fib;
    int n[t];
    int pos[t];
    
    //input test cases
    for (int i=0; i<t; i++)
    {
        cin>>n[i];
    }
    
    //finds max series required to be found
    for (unsigned long long int i=0; i<t; i++) {
        pos[i] = pow(2,floor(log2(n[i])))-1;
        if(pos[i]>max){
            max=pos[i];
        }
    }
    fib.push_back(0);fib.push_back(1);
    
    for(unsigned long long int k=2;k<=max;k++)
    {
        int num = (fib[k-1]+fib[k-2])%10;
        fib.push_back(num);
    }
    
    for(int i=0;i<t;i++)
    {
        cout<<fib[pos[i]]<<endl;
    }
    
    return 0;
}
*/

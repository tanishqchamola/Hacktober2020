//
//  catfeed.cpp
//  codechef
//
//  Created by Tanishq Chamola on 28/10/19.
//  Copyright © 2019 Tanishq Chamola. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
int main()
{
    unsigned int t;
    cin>>t;
    
    while(t--)
    {
        unsigned int n,m;
        cin>>n>>m;
        
        unsigned int arr[m];
        vector<int> check;
        
        for (int i=0; i<m; i++)
        {
            cin>>arr[i];
        }
        
        int count=0;
        
        for (int j=0; j<m; j++)
        {
            if ( binary_search(check.begin(), check.end(), arr[j]) == 0 )
            {
                count++;
                if (count%n == 0)
                {
                    check.clear();
                    continue;
                }
                check.push_back(arr[j]);
                sort(check.begin(),check.end());
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        
        if (count==m)
        {
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}
*/

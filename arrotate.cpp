//
//  arrotate.cpp
//  codechef
//
//  Created by Tanishq Chamola on 30/08/19.
//  Copyright © 2019 Tanishq Chamola. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
/*
struct pot{
    int num;
    bool status;
};

int main()
{
    int t;
    cin>>t;
    vector <int> result;
    vector <int> balance;
    
    for (int i=0; i<t; i++)
    {
        int m,n;
        cin>>n>>m;
        pot arr[n];
        
        for (int j=0;j<n; j++)
        {
            cin>>arr[j].num;
            arr[j].status = true;
        }
        for (int j=0; j<m; j++)
        {
            int temp;
            cin>>temp;
            for (int h=0; h<n; h++)
            {
                if(temp == arr[h].num)
                {
                    arr[h].status = false;
                }
            }
        }
        
        for (int y=0; y<n; y++)
        {
            if (arr[y].status == true)
            {
                result.push_back(arr[y].num);
            }
            else
            {
                balance.push_back(arr[y].num);
            }
        }
        for (int h=0; h<balance.size(); h++)
        {
            result.push_back(balance[h]);
        }
        balance.clear();
        for (int d=0; d<result.size(); d++)
        {
            cout<<result[d]<<" ";
        }
        result.clear();
        
    }
    
    return 0;
}
*/

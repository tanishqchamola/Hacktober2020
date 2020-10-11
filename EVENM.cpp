/*
Problem : EVENM
Contest : JUNE20B
Author : sid_155
*/
#include<bits/stdc++.h>
using namespace std;
void giveme(stack<int> &odd,stack<int> &even,int sq){
 for(int i=1;i<=sq;i++){
    if(i%2==0){
        even.push(i);
    }
    else
        odd.push(i);
 }
}
int main(){
 int t;
 cin>>t;

 while(t--){
    int n;
    cin>>n;
    int square = n*n;
    stack<int> odd,even;
    giveme(odd,even,square);
    int sqsq[n+1][n+1] = {0};
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
         if((i+j)%2 == 0){
            sqsq[i][j] = odd.top();
            odd.pop();
        }
        else{
            if(!even.empty()){
            sqsq[i][j] = even.top();
            even.pop();
            }
            else{
            sqsq[i][j] = odd.top();
            odd.pop();
            }
        }
      }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<sqsq[i][j]<<" ";
        }
        cout<<endl;
    }

 }
}

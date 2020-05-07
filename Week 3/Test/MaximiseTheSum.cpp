#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int m,n;
    cin>>m;
    int *arr1= new int[m];
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    cin>>n;
    int *arr2= new int[n];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    
    int result=0, sum1=0, sum2=0, i=0, j=0;



        
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            sum1+=arr1[i];
            i++;
            // cout<<sum1<<" ";
        }
        else if(arr1[i]>arr2[j]){
            sum2+=arr2[j];
            j++;
            // cout<<sum2<<" ";
        }
        else{
            result+=max(sum1, sum2);
            sum1=0, sum2=0;
            while(i<m && j<n && arr1[i]==arr2[j]){
                result+=arr1[i];
                i++;
                j++;
            }
            // cout<<result<<" ";
        }
    }
    
    for(;i<m;i++)
        sum1+=arr1[i];
    for(;j<n;j++)
        sum2+=arr2[j];
// cout<<sum1<<" "<<sum2<<" ";
    if(sum1<sum2)
        result+=sum2;
        else   
            result+=sum1;

cout<<result;
    
    return 0;
}

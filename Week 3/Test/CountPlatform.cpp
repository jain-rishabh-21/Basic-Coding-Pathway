#include <cmath>
#include <climits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
   cin>>n;
   int *arr1= new int[n];
   int *arr2= new int[n];

   for(int i=0;i<n;i++)
    cin>>arr1[i];
   for(int i=0;i<n;i++)
    cin>>arr2[i];

    sort(arr1,arr1+n);
    sort(arr2,arr2+n);

    int res=1, i=1,j=0,count=1;
     
    while(i<n && j<n){
        
        if(arr2[j]>arr1[i]){
            count++;
            i++;
        }else{
            count--;
            j++;
        }
        if(count>res){
            res=count;
        }        

    }

    cout<<res;
    return 0;
}

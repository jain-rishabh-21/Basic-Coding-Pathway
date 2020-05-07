#include <bits/stdc++.h> 
using namespace std; 
  
int getPairsCount(int arr[], int n, int sum) 
{ 
    unordered_map<int,int> map1;
    for(int i=0;i<n;i++)
        map1[arr[i]]++;
    int countpair=0,j;
    for(int i=0;i<n;i++){
        countpair+=map1[sum-arr[i]];
        map1[arr[i]]=0;
    }
    return countpair;
} 
  
// Driver function to test the above function 
int main() 
{ 
    int arr[] = {1, 5, 7, -1, 5,4,6,3,3,0} ; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int sum = 6; 
    cout << "no of pairs is " 
         << getPairsCount(arr, n, sum); 
    return 0; 
} 
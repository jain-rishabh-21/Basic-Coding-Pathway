#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n,m;
    int *arr1= new int[n];
    int *arr2= new int[m];
    int *arr3= new int[n+m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    // int n=5,m=4;
    // int arr1[5]={2,4,7,8,9}, arr2[4]={1,3,4,5};
    // int arr3[9];
    int a=0,b=0,i=0;
    while(a<n && b<m){
         if(arr1[a]<=arr2[b]){
            arr3[i++]=arr1[a++];
        }else if(arr1[a]>=arr2[b]){
            arr3[i++]=arr2[b++];
        }
        }

        while(a<n){
            arr3[i++]=arr1[a++];
        }
        while(b<m){
            arr3[i++]=arr2[b++];
        }
           
  for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}
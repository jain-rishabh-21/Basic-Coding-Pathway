#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
         int min=arr[i];
         int a=i;
        for(int j=i;j<n;j++){         
                if(arr[j]<min){
                min=arr[j];
                a=j;          

            }                 
               swap(arr[i],arr[a]);
        }
  }
  for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
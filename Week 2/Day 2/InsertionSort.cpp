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
    for(int i=1;i<=n-1;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j+1]<arr[j]){
                swap(arr[j+1],arr[j]);
            }else break;
        }
  }
  for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
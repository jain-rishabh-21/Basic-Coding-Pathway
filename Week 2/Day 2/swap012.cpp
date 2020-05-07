#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
  int* arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
	int i=0,j=n-1;
  for(;i<n;i++){
    if(arr[i]!=0) break;
  }
  int k=i;
  for(;k<=j;k++){
    if(arr[k]==0){
      swap(arr[i++],arr[k]);
    }
    else if(arr[k]==2){
      swap(arr[k--],arr[j--]);
    }
  }
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
}

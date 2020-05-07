#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cin>>n;
  int*arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int max,smax;
  max=smax=INT_MIN;
  for(int i=0;i<n;i++){
    if(arr[i] > max){
      smax=max;
      max=arr[i];
    }
    else if(arr[i] <max && smax < arr[i]){
      smax=arr[i];
    }
  }
  cout<<smax<<endl;
}
  
  

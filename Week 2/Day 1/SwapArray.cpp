#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int num,arr[10]={0},temp;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }

    for(int i=0;i<num;i=i+2){
        if(i==num-1){
            arr[i]=arr[num-1];
            break;
        }
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<num;i++){
        cout<<arr[i];
    }
  
    return 0;
}
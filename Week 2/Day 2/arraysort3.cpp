#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a=0,b=n-1;;
    int i=0;
    while(arr[i]==0){
        a++;
        i++;
    }
    int j=n-1;
    while(arr[j]==2){
        b--;
        j--;
    }
    int c=a;
    cout<<a<<b<<c<<"\n";

    while(c<=b){
        if(arr[c]==0){
            swap(arr[c],arr[a]);
            a++;
            
        }
        if(arr[c]==2){
            swap(arr[c],arr[b]);
            b--;
            
        }
        if(arr[c]==1){
            c++;
        }
       
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0; 
}
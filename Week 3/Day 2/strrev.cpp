#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main(){
    char arr[100];
    cin>>arr;
    int l;
    l=strlen(arr);
   
    for(int i=0;i<l/2;i++){
        swap(arr[i],arr[l-i-1]);
    }
    cout<<arr;
    return 0;
}
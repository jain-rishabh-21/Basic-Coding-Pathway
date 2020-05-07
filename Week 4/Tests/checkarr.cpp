#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool split(int *arr, int n, int lsum, int rsum,int s){
   if(s>n-1){
       if(lsum==rsum)
        return true;
        else 
        return false;
   }
   if(arr[s]%5==0)
    lsum+=arr[s];
   else if(arr[s]%3==0)
    rsum+=arr[s];
    else{
        lsum+=arr[s];
        bool small1 = split(arr, n, lsum, rsum, s+1);
        lsum-=arr[s];
        rsum+=arr[s];
        bool small2 = split(arr, n, lsum, rsum, s+1);
        rsum-=arr[s];

        if(small1==true || small2==true){
            return true;
        }
        else
        return false;
    }
    return split(arr, n, lsum, rsum, s+1);

}
int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lsum=0, rsum=0;
    int q=split(arr, n,lsum,rsum,0);
    if(q==1)
        cout<<"true";
    else{
        cout<<"false";
    }
    return 0;
}
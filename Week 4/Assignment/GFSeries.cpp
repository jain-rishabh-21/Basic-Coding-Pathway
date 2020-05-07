#include<iostream>
#include<cmath>
using namespace std;

long long int gfseries(int n){
    if(n==0 || n==1)   
        return n;
    else
    return (long long int)(pow(gfseries(n-2),2) - gfseries(n-1));
}
int main(){
int num;
long long int n;
cin>>num;

while(num--){
cin>>n;
for(int i=0;i<n;i++){
    cout<<gfseries(i)<<" ";
}

cout<<"\n";
}
return 0;
}
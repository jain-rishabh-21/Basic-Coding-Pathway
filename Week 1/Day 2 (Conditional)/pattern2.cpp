#include<iostream>
using namespace std;

int main(){
   int n,temp=1;;
   cin>>n;

   int i=1;
   while(i<=n){
       int j=1;
       while(j<=i){
           cout<<temp++<<" ";
           j++;
       }
       cout<<"\n";
       i++;
   }
}
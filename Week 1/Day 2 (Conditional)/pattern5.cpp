#include<iostream>
using namespace std;

int main(){
   int n,temp=1;;
   cin>>n;

   int i=1;
   while(i<=n){
       int k=n-1;
       while(k>=i){
           cout<<" "<<" ";
           k--;
       }
      int j=1;
      while(j<=(i*2)-1){
          cout<<"*"<<" ";
          j++;
      }
   
      
      cout<<"\n";
      i++;
   }
}
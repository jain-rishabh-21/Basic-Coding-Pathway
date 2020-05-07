#include<iostream>
using namespace std;

int main(){
   int n,temp=1;;
   cin>>n;

   int i=1;
   while(i<=(n/2)+1){
       int k=1;
       while(k<=i){
           cout<<"*"<<" ";
           k++;
       }
      cout<<"\n";
      i++;
   }
   
   int a=1;
   while(i>=a){
       int k=i;
       while(k>=i){
           cout<<"*"<<" ";
           k--;
       }
      cout<<"\n";
      i++;
   } 
}

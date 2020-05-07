#include<iostream>
using namespace std;

int main(){
   int n,temp=1;;
   cin>>n;

   int i=1;
   while(i<=n){
      int j=1;
      temp=i;
      while(j<=i){
          cout<<temp++<<" ";
          j++;
      }
      int k=n;
      while(k>=i){
          cout<<" "<<" ";
          k--;
      }
       k=n-1;
      while(k>=i){
          cout<<" "<<" ";
          k--;
      }
     j=1;
      temp=i;
      while(j<=i){
          cout<<temp++<<" ";
          j++;
      }
      cout<<"\n";
      i++;
   }
}
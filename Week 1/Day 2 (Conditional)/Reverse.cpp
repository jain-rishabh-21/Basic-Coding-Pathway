#include<iostream>
using namespace std;

int main(){
   int num, rev=0,temp;

   cin>>num;
   for(;num!=0;num=num/10){
       temp=num%10;
       rev=(rev*10)+temp;
   }
   cout<<rev;
   return 0;
}

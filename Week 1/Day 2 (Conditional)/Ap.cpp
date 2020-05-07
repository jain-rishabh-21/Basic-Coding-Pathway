#include<iostream>
using namespace std;

int main(){
   int num,temp;
   cin>>num;

   for(int i=1;i<=num;i++){
       temp=(3*i)+2;
       if(temp%4==0){
           continue;
       }
       cout<<temp<<" ";
   }
}

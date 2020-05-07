#include<iostream>
using namespace std;

int main(){
   char ch;
   cin>>ch;
   int c;
   c=(int)ch;
   if(c>=65 && c<=91){
       cout<<"UPPER CASE";
   } else if(c>=97 && c<123){
       cout<<"LOWER CASE";
   }else{
       cout<<"Special Character";
   }

    return 0;
}
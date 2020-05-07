#include<iostream>
#include<math.h>
using namespace std;

int main(){
 long long int bin,dec=0;
 int temp;
    cin>>bin;
 for(int i=0;bin!=0;bin/=10,i++){
     temp=bin%10;
     dec+=(temp*(pow(2,i)));
 }
 cout<<dec;
 
}

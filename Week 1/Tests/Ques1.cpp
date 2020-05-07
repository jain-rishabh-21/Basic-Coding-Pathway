#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long long int num,sum=0,cpy,cpy2,digit=0;
    bool ans=false;
    int temp;
    cin>>num;
    cpy=num;
    cpy2=num;
    while(cpy2>0){
        digit++;
        cpy2/=10;
    }
    for(;num!=0;num/=10){
        temp=num%10;
        sum+=pow(temp,digit);
    }
    
    if(sum==cpy){
        cout<<"true";
    }else{
         cout<<"false";
    }
    
    
    return 0;
}

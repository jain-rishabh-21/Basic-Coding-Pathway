#include<iostream>
using namespace std;

int solutions(int num){
    int count=0;

    for(int i=5;num/i>=1;i*=5){
        count+=(int)num/i;
    }
    return count;
}
int main(){
    int num1;
    cin>>num1;
    int zeros;
    zeros= solutions(num1);
    cout<<zeros;
    return 0;
}
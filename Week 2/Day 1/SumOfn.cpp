#include<iostream>
using namespace std;

int func(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int num;
    cin>>num;
    cout<<func(num);
    return 0;
}
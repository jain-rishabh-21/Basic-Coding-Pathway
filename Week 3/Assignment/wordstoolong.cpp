#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    while(num--){
        char str[100];
        cin>>str;
    int len;
    len=strlen(str);

    if(len>10){
        cout<<str[0]<<(len-2)<<str[len-1];
    }
    else{
        cout<<str;
    }
    }
    return 0;

}
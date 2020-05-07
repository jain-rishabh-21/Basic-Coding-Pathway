#include<iostream>
#include<cstring>
using namespace std;
int num=0;
int convert(char *str,int len){
   if(str[len]=='\0')
    return num;
    else{
        num*=10;
        num+=(str[len]-'0');
        convert(str, len +1);
    }
}

int main(){
    char str[100]="123421";
    
    cout<<convert(str,0);
return 0;
}
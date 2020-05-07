#include<iostream>
#include<cstring>
using namespace std;

void replacepi(char *str){
    int len=strlen(str);
    if(str[0]== '\0')
        return;
    if(str[0]=='p' && str[1]== 'i'){
        for(int i=len-1;i>1;i--){
            str[i+2]=str[i];
        }        
        str[0] = '3';
        str[1] = '.';
        str[2] = '1';
        str[3] = '4';
        str[len+2]= '\0';
        replacepi(str+4);
    }
    else{
        replacepi(str+1);
    }
}

int main(){
    char str[100]="pipixxpix";
    replacepi(str);
    cout<<str;
return 0;
}

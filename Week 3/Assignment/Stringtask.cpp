#include<iostream>
#include<string.h>
using namespace std;

int main(){  

        char str[100],res[100];
        cin>>str;
    int len;
    len=strlen(str);
    int it=0;
    strlwr(str);
   for(int i=0;i<len;i++){
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='U' || str[i]=='I' || str[i]=='Y'){
           continue;
       }else{
           res[it++]='.';
           res[it++]=str[i];
       }
       
   }
   res[it]='\0';
   cout<<res;
    
    return 0;

}
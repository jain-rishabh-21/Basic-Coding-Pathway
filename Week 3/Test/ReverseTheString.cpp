#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
     char s1[1000];
     char s2[1000];
     char s3[1000];
     cin.getline(s1,1000);
    //  cout<<s1;

    strrev(s1);
    int i=0,v=0;
    while(1){
        if(s1[i]==' '|| s1[i]=='\0'){
            for(int j=i-1;j>v;j--){
                s2[v++]=s1[j];
            }
            s2[v++]=' ';
            if(s1[i]=='\0')
            break;
        }
        if(s1[i]=='\0')
            break;
        i++;
    }
    s2[v]='\0';
    cout<<s2;

    return 0;
}

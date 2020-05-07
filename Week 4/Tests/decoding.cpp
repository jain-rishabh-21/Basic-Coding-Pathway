#include <cmath>
#include <cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int decode(char *str){
    int len=strlen(str);
    // if(str[len]== '\0'){
    //     return 1;
    // }
    if(len==0 || len==1){
        return 1;
    }
    int count=0;
    if(str[0]>'0'){
        
        count= decode(str+1);
    }
    if(str[0]=='1' || str[0]=='2' && str[1]<='6'){
        count+=decode(str+2);
        
    }
    return count;
}

int main() {
    char str[100];
    cin>>str;
    cout<<decode(str);
    return 0;
}

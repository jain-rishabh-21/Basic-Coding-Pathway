#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

void print(char *s,string s1, int k, int len){
    if(k==0){
        cout<<s1<<"\n";
        return;
    }
    for(int i=0;i<len;i++){
        string s2= s1+s[i];
        print(s,s2,k-1,len);
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char s[100];
    cin>>s;
    int k;
    cin>>k;
    int len=strlen(s);
    string s1="";
    print(s,s1,k,len);
    return 0;
}
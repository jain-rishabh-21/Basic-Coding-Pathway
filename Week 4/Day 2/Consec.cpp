#include<iostream>
using namespace std;

void consec(char *inp){
    if(inp[0]=='\0')
        return;

    // int i=0;
    if(inp[0]==inp[1]){
        for(int j=0;inp[j];j++){
            inp[j]=inp[j+1];
            // consec(inp);
        }
    }
   consec(inp+1);
}
int main(){
    char inp[10]="aaabccba";
    consec(inp);
    cout<<inp;
    return 0;
}
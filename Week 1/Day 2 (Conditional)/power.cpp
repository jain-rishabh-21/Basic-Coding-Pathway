#include<iostream>
using namespace std;

int main(){
    int a,power,i=1,ans=1;
    cin>>a>>power;
    while(i<=power){
        ans=ans*a;
        i++;
    }
    cout<<ans;
    return 0;
}
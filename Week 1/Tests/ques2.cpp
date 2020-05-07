#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num,temp=1,t,t2;
    cin>>num;
    t2=num;
    for(int i=1;i<=num;i++){
        temp=1;
        t=t2;
        t2--;
        
        for(int j=num;j>=i;j--){
            cout<<temp;
            temp++;
        }
        for(int k=1;k<=((i*2)-2);k++){
            cout<<"*";
        }
        
        for(int j=num;j>=i;j--){
            cout<<t;
            t--;
        }
        cout<<"\n";
    }
    return 0;
}

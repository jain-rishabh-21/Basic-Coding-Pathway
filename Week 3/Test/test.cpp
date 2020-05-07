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
     
     cin.getline(s1,1000);
    
    int i=strlen(s1)-1;
    char last = '\0';
    int hold = 0;
    while (i!= 0){
        while (s1[i] != ' ')
            i--;
        hold = i;
        while (s1[i] != last){
            cout << s1[i]; 
            i++;
        }
        last = s1[hold]; 
        i = hold; 
    }
cout<<s1;

    return 0;
}

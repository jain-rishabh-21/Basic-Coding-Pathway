//Question 1:
#include <iostream>
using namespace std;
void func(int a) {
    int b = a;
    b = b + 10;
}
int main() {
    int a = 10;
    func(a);
    cout << b << endl;
}


//Question 2:
void doubleValue(int a) {
    a = a * 2;
}
int main() {
    int a = 8;
    doubleValue(a);
    cout << a;
}

//Question 3:
int func(int a){
    a += 10;
    return a;
}
int main() {
    int a = 5;
    func(a);
    cout << a;
}


//Question 4:
int square(int a){
    int ans = a * a;
    return ans;
}
int main() {
    int a = 4;
    a = square(a);
    cout << a;
}

-------------------------------------(arrays)
//Question 5 (output?):
int arr[100];
cout << arr[0];


//Question 6:
What is the index number of the last element of an array with 5 elements ?
  

//Question 7:
#include <iostream>
using namespace std;
int main() {
    int a[10];
    cout << sizeof(a) << endl;
}

//Question 8:
#include<iostream>
using namespace std;
int main(){
  int a[5]={5,1,15,20,25};
  int i,j,m;
  i=++a[1];
  j= a[1]++;
  m= a[i++];
  cout<<i<<" "<<j<<" "<<m;
}

// A) 3, 2, 15	 B)2, 3, 20     C)2, 1, 15  	   D)1, 2, 5

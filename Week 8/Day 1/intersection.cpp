#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void intersection(int input1[], int input2[], int size1, int size2) {
    unordered_map<int , int> map1;
    unordered_map<int , int> map2;
    vector<int> ans;
    int var;
    for(int i=0;i<size1;i++){
        map1[input1[i]]++;
        }
     for(int i=0;i<size2;i++){
        if(map1[input2[i]]>0){
            map1[input2[i]]--;
            ans.push_back(input2[i]);
        }
        }  
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }  
    
}

int main(){
  int arr1[] = {2,4,6,8,10,12,14,16,18,20};
  int arr2[] = {3,6,9,12,15,18,21,24};
  
  intersection(arr1,arr2,10,8);
}
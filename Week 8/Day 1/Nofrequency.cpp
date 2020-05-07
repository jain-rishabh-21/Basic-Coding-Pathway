#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int highestFrequency(int *input, int n){
	//int max=input[0];	 
	unordered_map <int, int> freq;
	for(int i = 0; i<n; i++){
		if(freq.count(input[i])==0){
			freq[input[i]] = 1;
		}
		else{
			freq[input[i]]++;
		}
	}
	int ans = input[0];
	for(int i = 1; i<n; i++){
		if(freq[input[i]]>freq[ans])
			ans = input[i];
	}

	return ans;
}

int main(){
  int arr[] = {1,2,3,4,3,2,4,6,2,1,8,9,0,6,4,2};
  cout<<highestFrequency(arr,16);
}
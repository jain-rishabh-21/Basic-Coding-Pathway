#include<iostream>
#include<algorithm>
using namespace std;

void print(int* arr, int size){
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

// void swap(int& p , int& q){
//   int temp;
//   temp = p;
//   p = q;
//   q = temp;
// }


int partition(int input[], int si , int ei){
  int index;
  int start = input[si];
  int size = ei - si + 1;
  int count = 0;
  
  for(int i = si + 1 ; i < size ; i++){
    if(input[i] <= start)
      count++;
  }
  
  
  index = count;
  
  swap(input[si] , input[index]);
  
  int i = si , j = ei ;
  
   while(i<=index && j>index){
        while(input[i]<=start)
            i++;
        while(input[j]>start)
            j--;
        
        if(input[i]>=start && input[j]<start)
            swap(input[i],input[j]);
    }
 
  return index;
}

void quickSortHelper(int input[], int si , int ei){
  
  if(si >= ei){
    return;
  }
  
  int x = partition(input , si , ei);
  
  quickSortHelper(input , si , x - 1);
  quickSortHelper(input , x + 1 , ei);

}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
  int si = 0 , ei  = size - 1 ;
  quickSortHelper( input , si , ei);
}


int main(){
    int arr[]={5,4,1,2,8,11,9};
   
    quickSort(arr,7);

   print(arr,7);
    return 0;
} 
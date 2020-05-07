#include<iostream>
#include<algorithm>
using namespace std;


void print(int* arr, int size){
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int partition(int *arr, int si, int ei){
    int p=arr[si],index=si;
    for(int i=si+1;i<ei-si+1;i++){
        if(arr[i]<p)
            index++;
    }
    swap(arr[si],arr[si + index]);

    int i=si,j=ei;

   while(i<=index && j>index){
    
        while(arr[i]<=p)
            i++;
        while(arr[j]>p)
            j--;
        
        if(arr[i]>=p && arr[j]<p && i<index && j>index)
            swap(arr[i],arr[j]);
    }
   // print(arr, ei-si+1);
    return index;
}


void quicksort1(int *arr,int si,int ei){
    if(si>=ei)
    return;

    int a=partition(arr,si,ei);
    quicksort1(arr,si,a-1);
    quicksort1(arr,a+1,ei);
    

}


void quicksort(int *arr, int size){
    quicksort1(arr, 0, size-1);
}

int main(){
    int arr[]={7,6,8,5,4,3};
   
    quicksort(arr,6);

   print(arr,6);
    return 0;
} 
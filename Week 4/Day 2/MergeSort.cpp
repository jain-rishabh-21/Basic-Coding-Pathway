#include<iostream>
using namespace std;


void print(int* arr, int size){
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void merge(int *arr1, int s1, int e1,int *arr2, int s2, int e2){
    int *arr3= new int[e2-s1+1];
    int i=s1,j=s2,k=0;

    while(i<=e1 && j<=e2){
        if(arr1[i]<=arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else {
            arr3[k++]=arr2[j++];
        }
    }

    while(i<=e1){
            arr3[k++]=arr1[i++];
        }
        while(j<=e2){
            arr3[k++]=arr2[j++];
        }

    for(int i=0;i<k;i++){
        arr1[s1+i]=arr3[i];
    }

    }

void mergesort1(int *arr,int si,int ei){
    if(si>=ei)
    return;

    int mid=(si+ei)/2;
    mergesort1(arr,si,mid);
    mergesort1(arr,mid+1,ei);
    merge(arr,si,mid,arr,mid+1,ei);

}


void mergesort(int *arr, int size){
    mergesort1(arr, 0, size-1);
}

int main(){
    int arr[]={5,3,7,4,1,0};
   
    mergesort(arr,6);

   print(arr,6);
    return 0;
}
#include<iostream>
using namespace std;

void merge(){

}

void mergeSort(int arr[],int s, int e){
  if(s>=e){
    return;
  }

  int mid=(s+e)/2;

  mergeSort(arr,s,mid);
  mergeSort(arr,mid+1,e);

  merge();
}

int main(){
    int arr[]={45,4454,32132,54564,12132,884,2132};
    int s=0;
    int e=sizeof(arr);
    mergeSort(arr,s,e);
    while(e!=0){
        cout<<arr[sizeof(arr)-1]<<" ";
    }
}
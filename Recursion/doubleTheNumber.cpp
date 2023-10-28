#include<iostream>
using namespace std;

void doubling(int arr1[], int index,int size){
    if(index>=size){
        return;
    }
    arr1[index]= arr1[index]*2;
    doubling(arr1,index+1,size);
    return ;
}

int main(){
    int arr[10];
    int size=10;
    int index=0;
    cout<<"Enter the 10 elements in the array"<<endl;
    while(index!=10){
        cin>>arr[index];
        index++;
    }
    index=0;
    doubling(arr,index,size);
    index=0;
     while(index!=10){
        cout<<arr[index]<<"  ";
        index++;
    }
}
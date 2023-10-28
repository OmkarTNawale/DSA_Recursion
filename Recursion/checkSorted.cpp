#include<iostream>
#include<string>
using namespace std;

bool checkSorted(int arr[],int index,int size ){
    if(index>=size){
        return true;
    }
    if(arr[index-1]<=arr[index]){
       bool aageKaAns = checkSorted(arr,index+1,size);
       return aageKaAns;
    }
    else{
        return false;
    }
}

int main(){
    int arr[5];
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0 ; i < 5; i++){
        cin>>arr[i];
    }
    bool ans=checkSorted(arr,1,5);
    string answer;
    if(ans==true){
        answer=" sorted";
    }
    else{
        answer=" not sorted";
    }
   cout<<"The array is"<<answer<<endl; 
}
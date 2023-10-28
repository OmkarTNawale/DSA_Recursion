#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int bin_search(vector<int> arr, int x, int start, int end){
    if(start>end){
        return -1;
    }
    int mid=(start)+(end-start)/2;
    if(arr[mid]==x){
        return 1;
    }
    if(x<mid){
        start=arr[0];
        end=mid-1;
        return bin_search(arr,x,start,end);
    }
    else if(x>mid){
        start=mid+1;
        end=arr[arr.size()-1];
        return bin_search(arr,x,start,end);
    }
}

int main(){
    int n ;
    vector<int> arr;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int x;
    cout<<"Enter the elements of array: \n";
    int i = n;
    while(i){
        cin>>x;
        arr.push_back(x);
        i--;
    }
    int ans;
    int start = arr[0];
    int end=arr[arr.size()-1];
    bool check=true;
    while(check==true){
        cout<<"enter the number to be searched"<<endl;
        cin>>x;
        ans=bin_search(arr,x, start, end);
        if(ans==1){
            cout<<"The number " <<x<<"is present in the array"<<endl;
        }
        else if(ans==-1){
            cout<<"the number " <<x<<"is not present in the array"<<endl;
        }
        cout<<"want to continue :";
        cin>>check;
    }
    
}
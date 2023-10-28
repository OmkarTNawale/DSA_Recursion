#include<iostream>
#include<vector>
using namespace std;

void even_num(int arr[], int size, int index, vector<int> &vec){
    if(index>=size){
        return ;
    }
    if(arr[index]%2==0){
        vec.push_back(arr[index]);
    }
    even_num(arr,size,index+1,vec);
    return;

}

int main(){
    int arr[]={10,11,20,21,30,31,40,41,50,51};
    int size=10;
    vector<int> vec;
    int index=0;
    even_num(arr,size,index,vec);
    for(auto i:vec){
        cout<<i<<" "<<endl;
    }
}
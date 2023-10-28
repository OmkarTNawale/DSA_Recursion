#include<iostream>
using namespace std;

int powerN(int n ){
    if(n==0){
        return 1;
    }

    int fans= 2*powerN(n-1);
    return fans;
}

int main(){
    int n ;
    cout<<"Enter the power of n: ";
    cin>>n;
    cout<<"The result of 2 to the power "<<n<<" is: "<<powerN(n);
    return 0;
}
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }

    int x = factorial(n-1);

    int fans = n*x;
    return fans;
}

int main(){
    int n ;
    cout<<"Enter the number whose factorial is to be displayed : ";
    cin>>n;
    cout<<"The factorial of a number is : "<<factorial(n);
}
#include<iostream>
using namespace std;
int product(int* x,int* y){
int a;
a=*x * *y;
cout<<a;
}

int main(){
int x;
int y;
int* ptr=&x;
int* ptr1=&y;
cout<<"enter two numbers";
cin>>x>>y;
product(ptr,ptr1);
}
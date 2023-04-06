#include <iostream>
using namespace std;
void swap(int a, int b);
void swappointer(int* x, int* y);

int main() {
    int a = 2;
    int b = 5;
    int x = 2;
    int y = 5;

  swap(a, b);  
cout << "value of a is : " <<a<<  " value of b is: " <<b<<endl;
swappointer(&x, &y);
cout << "value of x is : " <<x<< " value of y is: " <<y<<endl;

    return 0;
}
void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    
}
void swappointer(int* x, int* y){
    int t = *x;
    *x = *y;
    *y = t;
}
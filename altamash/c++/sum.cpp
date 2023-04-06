#include<iostream>
using namespace std;
int addtwo(int a, int b);

int main(){

int a, b, sum;
cout << "enter value of a:";
cin >> a;
cout << "enter value of b:";
cin >> b;

sum = addtwo(a, b);

cout << "sum of " <<a<< " and " <<b<< " is: " <<sum;

    return 0;
}
int addtwo(int a, int b){
   return (a+b);
    
}
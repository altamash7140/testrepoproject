#include<iostream>
using namespace std;

void valuecalc(float value);

int main(){
float value;
cout << "enter price of the product: ";
cin >> value;

 valuecalc(value);


    return 0;

}
void valuecalc(float value){
    value = (value + (0.18*value));
    cout << "final value is : " <<value;

}
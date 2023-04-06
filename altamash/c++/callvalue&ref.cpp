#include<iostream>
using namespace std;
int value(int* p){
    *p = (*p*2);
    return *p;
}

int main(){

int p = 24;

cout << value(&p)<<endl;
cout << p;



    return 0;

}
#include<iostream>
using namespace std;
int fact(int n);

int main(){
int n;
cout << "put the value: ";
cin >> n;

cout << "factorial : " <<fact(n) ;



    return 0;

}
int fact(int n){
    if(n == 0){
        return 1;
    }
    int factnm1 = (n-1);
    int factn = fact(n-1)*n;
    return factn;
    


}
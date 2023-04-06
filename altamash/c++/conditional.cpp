#include<iostream>
using namespace std;

int main(){

int age;
cout <<"enter your age:";
cin >>age;
if(age>18){
    cout <<"adult"<<endl;

}else if(age>=13 && age<=18){
    cout <<"teenager"<<endl;

}


else{
    cout <<"child"<<endl;

}
    return 0;
}
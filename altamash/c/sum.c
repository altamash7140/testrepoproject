#include<stdio.h>

int addtwo(int a, int b);

int main(){
int a, b, sum;

printf("enter value of a:");
scanf("%d", &a);

printf("enter value of b:");
scanf("%d", &b);


sum = addtwo(a, b);

printf("sum of %d and %d is %d",  a, b, sum);

    return 0;
}
int addtwo(int a, int b){
    return (a+b);
}
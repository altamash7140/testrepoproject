#include <stdio.h>
int fib(int n);

int main() {
    printf("%d", fib(6));
  fib(6);
   
    return 0;
}
int fib(int n){
    if(n == 1){
        return 1;
    }
    if(n == 0){
        return 0;
    }
    int fibnm1 =  fib(n-1);
    int fibnm2 = fib(n-2);
   int fibn = fibnm1 + fibnm2;
   return fibn;
}
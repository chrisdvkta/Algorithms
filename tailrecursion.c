#include <stdio.h> 
#include <stdlib.h> 

int factTR (int n, int a){
    if (n<=1){
        return a ;
    }
    return factTR(n-1,n*a);
}

int fact(int n){
    return factTR(n,1);
}

int main() { 
    printf("%d", fact(5));
}
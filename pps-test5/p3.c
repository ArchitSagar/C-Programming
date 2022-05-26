#include <stdio.h>

void input_n_and_r(int *n, int *r);
int factorial(int r);
int ncr(int n, int r);
void output(int n, int r, int result);

int main(){
    int n,r,result;
    input_n_and_r(&n,&r);
    result = ncr(n,r);
    output(n,r,result);
    return 0;
}

void input_n_and_r(int *n, int *r){
    scanf("%d%d",n,r);
}

int factorial(int r){
    int fac = 1;
    for (int i = 2; i <= r; i++)
    {
        fac *= i; 
    }
    return fac;
}

int ncr(int n, int r){
    int result,x,y=1,z;
    x = n-r;
    for (int i = n; i > x; i--)
    {
        y *= i;
    }
    z = factorial(r);
    result = ((double)y)/z;
    return result;
}

void output(int n, int r, int result){
    printf("For n = %d and r = %d nCr = %d",n,r,result);
}
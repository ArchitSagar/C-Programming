#include <stdio.h>
#include <math.h>

int input(int *x);
float borga_X(int x);
void output(int x, float result);


int main()
{
    int a;
    input(&a);
    double b;
    b = borga_X(a);
    output(a,b);
    return 0;
}

int input(int *x){
    scanf("%d",x);
}

int factorial(int d)
{
    int f=1;
    while (d != 0)
    {
        f *= d;
        d--;
    }
    return f;

}

float borga_X(int x){
    int z=1,d=3;
    float y=1,c=1;
    while (c > 0.000001)
    {
        int f,g;
        f = factorial(d);
        g = (pow(x,z));
        c =((double)g)/f;
        y += c;
        z++;
        d += 2; 

    }
    return y;

}

void output(int x, float result)
{
    printf("Bogra(%d) = %f",x,result);
}
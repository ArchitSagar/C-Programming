#include <stdio.h>
#include <math.h>


float input()
{
    float n;
    scanf("%f",&n);
    return n;
}
float my_sqrt(float n)
{
    int x,y,z;
    x=n/2; 
    y=1;
    z=0;
    while (y>0.000001){
      z = ((x + (n / x)) / 2);
      y=fabs(z-x);
      x=z;

    }
    return z; 
}
void output(float n, float sqrt_result)
{
    printf("The square root of %0.2f is %.2f",n,sqrt_result);
}
int main()
{
    float a,b;
    a= input();
    b = my_sqrt(a);
    output(a,b);
    return 0;
}
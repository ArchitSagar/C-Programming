#include <stdio.h>

void input(int *a, int *b)
{
    printf("enter two no. \n");
    scanf("%d%d",a,b);
}
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("sum of two no. %d and %d is %d",a,b,sum);
}
int main()
{
    int x,y,z;
    input(&x,&y);
    add(x,y,&z);
    output(x,y,z);
    return 0; 
}
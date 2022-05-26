#include <stdio.h>


int input_n();
int sum_n(int n);
void output(int n, int sum);
int main()
{
    int a,sum;
    a = input_n();
    sum = sum_n(a);
    output(a,sum);
    return 0;
}
int input_n()
{
    int a;
    printf("enter a natural no.\n");
    scanf("%d",&a);
    return a;
}
int sum_n(int n)
{
    int sum =0;
    int i;
    for(i=0;i<n+1;i++){
        sum+=i;
    }
    return sum;
}
void output(int n,int sum)
{   
    int i;
    for(i=1;i<n;i++){
        printf("%d+",i);
    }
    printf("%d ",n);
    printf("is %d",sum);
}
#include <stdio.h>

int input_array_size();
void input_array(int n, int *a);
int sum_n_arrays(int n, int *a);
void output(int n, int a[n], int sum);
int main()
{
    int a,sum;
    a=input_array_size();
    int b[a];
    input_array(a,b);
    sum=sum_n_arrays(a,b);
    output(a,b,sum);
    return 0;

}
int input_array_size()
{
    int n;
    scanf("%d",&n);
    return n;
}
void input_array(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}
int sum_n_arrays(int n, int *a)
{   
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
void output(int n, int a[n], int sum)
{
    for (int i = 0; i < n-1; i++)
    {
        printf("%d+",a[i]);
    }
    printf("%d is %d",a[n-1],sum);
}
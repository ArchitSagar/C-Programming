#include <stdio.h>

void array_size(int *n);
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);

int main()
{
    int n;
    array_size(&n);
    int a[n];
    input(n,a);
    float avg;
    avg = odd_average(n,a);
    output(avg);
    return 0;
}

void array_size(int *n)
{
    scanf("%d",n);
}

void input(int n, int a[n])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}

float odd_average(int n, int a[n])
{
    int sum=0,count=0;
    float avg=0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i])%2 != 0)
        {
            sum += a[i];
        }
        count++;
        
    }
    avg = ((double)sum)/count;   
    return avg;
}

void output(float avg)
{
    printf("Avg of odd element is %.0f",avg);
}
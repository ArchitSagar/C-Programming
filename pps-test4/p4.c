#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
    int n,fibo;
    n = input();
    fibo = find_fibo(n);
    output(n,fibo);
    return 0;
}

int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

int find_fibo(int n)
{
    if (n==0 || n==1)  
    {
        return n;
    }

    return find_fibo(n-1) + find_fibo(n-2);
    
}

void output(int n, int fibo)
{
    printf("Fibo(%d) = %d",n,fibo);
}
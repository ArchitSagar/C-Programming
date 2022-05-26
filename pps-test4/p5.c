#include <stdio.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
    int n;
    n = input_array_size();
    int a[n];
    init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}

int input_array_size()
{
    int n;
    scanf("%d",&n);
    return n;
}

void init_array(int n, int a[n])
{
   for (int i = 0; i < n; i++)
   {
       a[i] = i+1;
   }
      
}

void erotosthenes_sieve(int n, int a[n])
{
    for (int i = 2; i < n; i++)
    {
        for (int j = (i*i); j <= n; j+=i)
        {
                if (j%i == 0)
                {
                        a[j-1] = 0; 
                }
        }
    }
}

void output(int n, int a[n])
{
    for (int i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            printf("%d ",a[i]);
        }
        
    }
}
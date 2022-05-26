#include <stdio.h>
typedef struct _complex
{
    float real, imaginary;
}Complex;

int get_n() 
{
    int n;
    scanf("%d", &n);
    return n;
}



void input_n_complex(int n, Complex c[n]) 
{    for (int i = 0; i < n; i++)
    {
        scanf("%f%f",&c[i].real,&c[i].imaginary);
    }
}


Complex add_n_complex(int n, Complex c[n])   
{
    Complex sum;
    sum.real  = 0;
    sum.imaginary=0;
    for (int i = 0; i < n; i++)
    {
        sum.real += c[i].real;
        sum.imaginary += c[i].imaginary;
    }
    return sum;
}

void output(int n,Complex c[n], Complex res)
{
    int i;
    for (i = 0; i < n-1; i++)
    {
        if (i == 0)
        {
            printf("%.1f + %.1fi\n", c[i].real, c[i].imaginary);
        }
        else
        {
            printf(" %.1f + %.1fi+\n", c[i].real, c[i].imaginary);
        }
    }
    printf("%.1f + %.1fi\n", c[i].real, c[i].imaginary);
    printf("is\n");
    printf("%.1f + %.1fi\n", res.real, res.imaginary);
}

int main()
{
    int n;
    n= get_n();
    Complex c[n],sum;
    input_n_complex(n,c);
    sum = add_n_complex(n,c);
    output(n, c, sum);
    return 0;
}
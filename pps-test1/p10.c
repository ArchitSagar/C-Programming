#include <stdio.h>

typedef struct _complex
	{
		float real,imaginary;
	}Complex;

	
Complex input_complex()
{
    Complex num;
    scanf("%f%f",&num.real,&num.imaginary);
    return num;

}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum)
{
    printf("%.1f + %.1fi + %.1f + %.1fi is %.1f + %.1fi",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}

int main()
{
    Complex a,b,sum;
    a=input_complex();
    b=input_complex();
    sum=add(a,b);
    output(a,b,sum);
    return 0;

}
#include <stdio.h>

void input(float *base, float *height); 
void find_area(float base , float height, float *area); 
void output(float base, float height, float area); 

int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}

void input(float *base, float *height)
{
    scanf("%f%f",base,height);
}

void find_area(float base , float height, float *area)
{
    *area = 0.5*base*height;
}

void output(float base, float height, float area)
{
    // The area of the traingle with base 1.000000 and height 2.000000 is 1.000000
    printf("The area of the traingle with base %.3f and height %.3f is %.3f",base,height,area);
}
#include <stdio.h>


typedef struct _triangle 
    { 
        float base,altitude,area; 
    } Triangle; 

Triangle input_triangle(); 
void find_area(Triangle *t);
void output(Triangle t);

int main()
{
    Triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}

Triangle input_triangle()
{
    Triangle t;
    scanf("%f%f",&t.base,&t.altitude);
    return t;
}

void find_area(Triangle *t)
{
    t->area=0.5*t->base*t->altitude;
}

void output(Triangle t)
{
    printf("The area of triangle with base= %.3f and altitude = %.3f is %.3f",t.base,t.altitude,t.area);
}
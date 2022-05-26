#include <stdio.h>

typedef struct _triangle 
    { 
        float base,altitude,area; 
    } Triangle; 
    
int input_n();    
Triangle input_triangle(); 
void input_n_triangles(int n, Triangle t[n]); 
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]); 
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main()
{
    int a;
    a=input_n();
    Triangle t[a];
    input_n_triangles(a,t);
    find_n_areas(a,t);
    Triangle smallest;
    smallest=find_smallest_triangle(a,t);
    output(a,t,smallest);
    return 0;
}

int input_n()
{
    int n;
    scanf("%d",&n);
    return n;
}

Triangle input_triangle()
{
    Triangle t;
    scanf("%f%f",&t.base,&t.altitude);
    return t;
}

void input_n_triangles(int n, Triangle t[n])
{
    for (int i = 0; i < n; i++)
    {
        t[i] = input_triangle();
    }
    
}

void find_area(Triangle *t)
{
    t->area=0.5*t->base*t->altitude;
}

void find_n_areas(int n, Triangle t[n])
{
    for (int i = 0; i < n; i++)
    {
        find_area(&t[i]);
    }
    
}

Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smallest = t[0];
    for (int i = 1; i < n; i++)
    {
        if (smallest.area >  t[i].area)
        {
            smallest = t[i];
        }
        
    }
    return smallest;
}

void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest of triangles out of triangles with base and height of\n");
    for (int i = 0; i < n; i++)
    {
        printf("%f %f\n",t[i].base,t[i].altitude);
    }
    printf("is triangle with base and height %f, %f having area = %f",smallest.base,smallest.altitude,smallest.area);
}
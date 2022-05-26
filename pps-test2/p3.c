#include <stdio.h>
#include <math.h>

struct camel 
    { 
        float radius, height, length,weight; 
    };
    typedef struct camel Camel;
    
Camel input();
void find_weight(Camel *c); //passing address variable
void output(Camel c);

int main()
{
    Camel c;
    c = input();
    find_weight(&c);
    output(c);
    return 0;

}

Camel input()
{
    Camel c;
    scanf("%f%f%f",&c.radius,&c.height,&c.length);
    return c;

}

void find_weight(Camel *c)
{
    c->weight = 3.14 * pow(c->radius,3) * sqrt(c->height * c->length);
}

void output(Camel c)
{
     printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.3f\n",c.radius,c.height,c.length,c.weight);
}

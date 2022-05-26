#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
    float r,h,l;
    input_camel_details(&r,&h,&l);
    float w;
    w=find_weight(r,h,l);
    output(r,h,l,w);
    return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
    scanf("%f%f%f",radius,height,length);
}

float find_weight(float radius, float height, float length)
{
    // weight = pi * stomach_raduius^3 * sqrt(height * length)
    float weight;
    weight = 3.14 * pow(radius,3) * sqrt(height * length);
    return weight;
}

void output(float radius, float height, float length, float weight)
{
    // The weight of the camel with radius: 1.0, height: 1.0, length: 1.0 is 3.1415
    printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.3f\n",radius,height,length,weight);
}
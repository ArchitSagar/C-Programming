#include <stdio.h>
#include <math.h>

typedef struct _camel
{
    float radius, height, length, weight;
} Camel;

void input_n(int *n);
void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main()
{
    int n;
    input_n(&n);
    Camel c[n];
    float t_w;
    input(n,c,&t_w);
    find_camel_weight(n,c);
    float total_w;
    total_w = compute_total_weight(n,c,t_w);
    output(total_w);
    return 0;
    
}


void input_n(int *n)
{
    printf("Enter the no. of camel\n");
    scanf("%d",n);
}

void input(int n, Camel c[n], float *truck_weight)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the height of camel no. %d: \n",i+1);
        scanf("%f",c[i].height);
        printf("Enter the length of camel no. %d: \n",i+1);
        scanf("%f",c[i].length);
        printf("Enter the radius of camel no. %d: \n",i+1);
        scanf("%f",c[i].radius);
        
    }
    printf("Enter the weight of the truck:\n");
    scanf("%f",truck_weight);
}

void find_camel_weight(int n, Camel c[n])
{
    for (int i = 0; i < n; i++)
    {
        // weight = pi * stomach_raduius^3 * sqrt(height * length)
        c[i].weight = 3.14 * pow(c[i].radius,3) * sqrt(c[i].height *c[i].length);

    }
    
}

float compute_total_weight(int n, Camel c[n], float truck_weight)
{
    //  total truck weight = ( Truck weight + weight of the camels)
    float total_truck_weight = truck_weight;
    for (int i = 0; i < n; i++)
    {
        total_truck_weight +=  c[i].weight;
    }
    return total_truck_weight;
    
}

void output(float total_weight)
{
    printf("The Total weight of the truck is: %f\n",total_weight);
}


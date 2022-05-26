#include <stdio.h>
#include <math.h>

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);

int main(){
    int n;
    n = input_degree();
    float a[n+1],x,result;
    input_coefficients(n,a);
    x = input_x();
    result = evaluate_polynomial(n,a,x);
    output(n,a,x,result);
    return 0;
}

int input_degree(){
    int n;
    scanf("%d",&n);
    return n;
}

void input_coefficients(int n, float a[n]){
    for (int i = 0; i < n+1; i++)
    {
        scanf("%f",&a[i]);
    }
    
}

float input_x(){
    float x;
    scanf("%f",&x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x){
    int i = 0;
    float result=a[i];
    for (i = 1; i < n+1; i++)
    {
        result += a[i]*pow(x,i);
    }
    return result;
}

void output(int n, float a[n], float x, float result){
    int i=0;
    printf("%.2f + ",a[i]);
    for (i = 1; i < n; i++)
    {
        printf("%.2f*(%.2f^%d) + ",a[i],x,i);
    }
    printf("%.2f*(%.2f^%d) = ",a[i],x,i);
    printf("%.2f",result);
}
#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1,int den1, int num2, int den2, int *res_num, int *res_den3);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main(){
    int num1,den1,num2,den2,res_num,res_den;
    input(&num1,&den1,&num2,&den2);
    add(num1,den1,num2,den2,&res_num,&res_den);
    output(num1,den1,num2,den2,res_num,res_den);
    return 0;
}

void input(int *num1, int *den1, int *num2, int *den2){
    scanf("%d%d%d%d",num1,den1,num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *res_num, int *res_den3){
    int g_d = den1,g_n = num1;
    int s_d = den2,s_n = num2;
    int x;
    if (s_d > g_d)
    {
        g_d = den2;
        s_d = den1;
        g_n = num2;
        s_n = num1;
    }
    for (int i = 1; i <= s_d; i++)
    {
        if ((g_d*i)%s_d == 0)
        {
            *res_den3 = g_d*i;
            x = *res_den3/s_d;
            *res_num = (x*s_n)+i*g_n;
            break;
        }
        
    }
    int gcd;
    for (int i = 1; i <=*res_den3 && i <=*res_num; i++)
    {
        if (*res_den3%i==0 && *res_num%i==0)
        {
            gcd=i;
        }
        
    }
    *res_den3 = *res_den3/gcd;
    *res_num = *res_num/gcd;

}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
    printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
}
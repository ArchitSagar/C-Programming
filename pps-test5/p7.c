#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;


Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main(){
    Fraction f1,f2,sum;
    f1 = input_fraction();
    f2 = input_fraction();
    sum = add_fractions(f1,f2);
    output(f1,f2,sum);
    return 0;
}

Fraction input_fraction(){
    Fraction f;
    scanf("%d%d",&f.num,&f.den);
    return f;
}

int find_gcd(int a, int b){
    int gcd;
    for (int i = 1; i <=a && i <=b; i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
        }
        
    }
    return gcd;
}

Fraction add_fractions(Fraction f1, Fraction f2){
    Fraction sum;
    int g_d = f1.den;
    int s_d = f2.den;
    int x,res_num,res_den,gcd;;
    if (s_d > g_d)
    {
        g_d = f2.den;
        s_d = f1.num;
    
    }
    for (int i = 1; i <= s_d; i++)
    {
        if ((g_d*i)%s_d == 0)
        {
            res_den = g_d*i;
            x = res_den/s_d;
            if (g_d == f1.den)
            {
                res_num = (x*f2.num)+i*f1.num;
            }
            else
            {
                res_num = (x*f1.num)+i*f2.num;
            }
            break;   
        }
    }
    gcd = find_gcd(res_num,res_den);
    sum.num = res_num/gcd;
    sum.den = res_den/gcd;

    return sum;
}


void output(Fraction f1, Fraction f2, Fraction sum){
    printf("%d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
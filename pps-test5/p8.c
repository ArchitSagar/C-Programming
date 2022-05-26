// #include <stdio.h>

// typedef struct fraction
// {
//     int num, den;
// } Fraction;

// int input_n();
// Fraction input_fraction();
// void input_n_fractions(int n, Fraction f[n]);
// int find_gcd(int a, int b);
// Fraction add_fractions(Fraction f1, Fraction f2);
// Fraction add_n_fractions(int n,Fraction f[n]);
// void output(int n, Fraction f[n], Fraction sum);

// int main(){
//     int n;
//     n = input_n();
//     Fraction f[n],sum;
//     input_n_fractions(n,f);
//     sum = add_n_fractions(n,f);
//     output(n,f,sum);
//     return 0;
// }


// int input_n(){
//     int n;
//     scanf("%d",&n);
//     return n;
// }


// Fraction input_fraction(){
//     Fraction f;
//     scanf("%d%d",&f.num,&f.den);
//     return f;
// }

// void input_n_fractions(int n, Fraction f[n]){
//     for (int i = 0; i < n; i++)
//     {
//         f[i] = input_fraction();
//     }
    
// }

// int find_gcd(int a, int b){
//     int gcd;
//     for (int i = 1; i <=a && i <=b; i++)
//     {
//         if (a%i==0 && b%i==0)
//         {
//             gcd=i;
//         }
        
//     }
//     return gcd;
// }

// Fraction add_fractions(Fraction f1, Fraction f2){
//     Fraction sum;
//     sum.den = f1.den + f2.den;
//     sum.num = f1.num * f2.den + f2.num * f1.den;
//     if(f2.num == 0 && f2.den == 0){
//         sum.num = f1.num;
//         sum.den = f1.den;
//         return sum;
//     }
//     else{
//         int g_d = f1.den;
//         int s_d = f2.den;
//         int x,res_num,res_den,gcd;;
//         if (s_d > g_d)
//         {
//             g_d = f2.den;
//             s_d = f1.den;
        
//         }
//         for (int i = 1; i <= s_d; i++)
//         {
//             if ((g_d*i)%s_d == 0)
//             {
//                 res_den = g_d*i;
//                 x = res_den/s_d;
//                 if (g_d == f1.den)
//                 {
//                     res_num = (x*f2.num)+i*f1.num;
//                 }
//                 else
//                 {
//                     res_num = (x*f1.num)+i*f2.num;
//                 }
//                 break;   
//             }
//         }
//         sum.num = res_num;
//         sum.den = res_den;
    
//         return sum;
//     }    
    
// }


// Fraction add_n_fractions(int n,Fraction f[n]){
//     int v;
//     Fraction add;
//     if(n%2 == 0){
//         v = n/2;
//     }
//     else{
//         v = (n+1)/2;
//     }
//     Fraction sum[v];
//     int gcd;
//     int j =0;
//     for (int i = 0; i < n; i++)
//     {
//         if(n<=i+1){
//             f[i+1].num=0;
//             f[i+1].den=0;
//             sum[j] = add_fractions(f[i],f[i+1]);
//         }
//         else{
//             sum[j] = add_fractions(f[i],f[i+1]);
//         }
//         i++;
//         j++;
//     }
//     int lcm = 1;
//     for(int i=0;i<v;i++){
//         lcm = (lcm*sum[i].den)/find_gcd(lcm,sum[i].den);
//     }
//     int res_num = 0;
//     for(int i = 0;i<v;i++){
//         int x = lcm/sum[i].den;
//         res_num += sum[i].num*x;
        
//     }
//     gcd = find_gcd(lcm,res_num);
//     add.num = res_num/gcd;
//     add.den = lcm/gcd;
//     return add;

// }

// void output(int n, Fraction f[n], Fraction sum){
//     int i = 0;
//     for (i = 0; i < n-1; i++)
//     {
//         printf("%d/%d + ",f[i].num,f[i].den);
//     }
//     printf("%d/%d",f[i].num,f[i].den);
//     printf(" = %d/%d",sum.num,sum.den);
// }

#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n,Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main(){
    int n;
    n = input_n();
    Fraction f[n],sum;
    input_n_fractions(n,f);
    sum = add_n_fractions(n,f);
    output(n,f,sum);
    return 0;
}


int input_n(){
    int n;
    scanf("%d",&n);
    return n;
}


Fraction input_fraction(){
    Fraction f;
    scanf("%d%d",&f.num,&f.den);
    return f;
}

void input_n_fractions(int n, Fraction f[n]){
    for (int i = 0; i < n; i++)
    {
        f[i] = input_fraction();
    }
    
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
    sum.den = f1.den * f2.den;
    sum.num = f1.num * f2.den + f2.num * f1.den;
    
    return sum;
}


Fraction add_n_fractions(int n,Fraction f[n]){
    Fraction res;
    int gcd;
    res.num = f[0].num;
    res.den = f[0].den;
    for(int i =1;i<n;i++)
    {
        res = add_fractions(res,f[i]);
    }
    gcd = find_gcd(res.num,res.den);
    res.num = res.num/gcd;
    res.den = res.den/gcd;
    return res;

}

void output(int n, Fraction f[n], Fraction sum){
    int i = 0;
    for (i = 0; i < n-1; i++)
    {
        printf("%d/%d + ",f[i].num,f[i].den);
    }
    printf("%d/%d",f[i].num,f[i].den);
    printf(" = %d/%d",sum.num,sum.den);
}
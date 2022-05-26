#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

Fraction input_fraction();
Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest);

int main(){
    Fraction f1,f2,f3,smallest;
    f1 = input_fraction();
    f2 = input_fraction();
    f3 = input_fraction();
    smallest = Largest_fraction(f1,f2,f3);
    output(f1,f2,f3,smallest);
    return 0;
}

Fraction input_fraction(){
    Fraction f;
    scanf("%d%d",&f.num,&f.den);
    return f;
}

Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3){
    Fraction smallest;
    smallest = f1;
    if (((double)smallest.num/smallest.den)>((double)f2.num/f2.den))
    {
        smallest = f2;
    }
    if (((double)smallest.num/smallest.den)>((double)f3.num/f3.den))
    {
        smallest = f3;
    }
    return smallest;  
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest){
    printf("The smallest of %d/%d , %d/%d and %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
}

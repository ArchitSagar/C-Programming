#include <stdio.h>

int input ()
{
    int a;
    printf("enter a no\n");
    scanf("%d",&a);
    return a;

}
int cmp(int a, int b, int c)
{
    int largest;
    largest = a;
    if (b>largest)
    {
        largest=b;
    }
    if (c>largest)
    {
        largest=c;
    }
    return largest;
}
void output(int a, int b, int c, int largest)
{
    printf("largest of %d , %d and %d is %d\n",a,b,c,largest);
}
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=cmp(a,b,c);
    output(a,b,c,largest);
    return 0;
}
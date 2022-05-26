#include <stdio.h>

int input_number(); 
int is_composite(int n); 
void output(int n, int result);

int main()
{
    int a,result;
    a = input_number();
    result = is_composite(a);
    output(a,result);
    return 0;
}

int input_number()
{
    int a;
    scanf("%d",&a);
    return a;
}

int is_composite(int n)
{
    if (n>1)
    {
        for (int i = 2; i < n; i++)
        {
            if (n%i == 0)
            {
                return 1;
            }
        } 
        
        return 2;
                
        
    }
        
}

void output(int n, int result)
{
    if (result == 1)
    {
        printf("%d is a composite number",n);
    }
    else
    {
        printf("%d is not a composite number",n);
    }
       
}
#include <stdio.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
    char name[30];
    input(name);
    int res;
    res = has_nice_name(name);
    output(res);
    return 0;
}

void input(char *name)
{
    scanf("%s",name);
}

int has_nice_name(char *c)
{
    int c1=0,c2=0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u'
        || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
        {
            c1++;
        }
        else
        {
            c2++;
        }
        
    }
    if (c1 >= 2 && c2 >= 2)
    {
        return 1;
    }
    else
    {
        return 2;
    }
    
    
}

void output(int res)
{
    if (res == 1)
    {
       printf("The camel have a nice name"); 
    }
    else
    {
        printf("The camel does not have a nice name");
    }
    
    
}
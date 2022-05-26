#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char str[50],rev_str[50];
    input_string(str);
    str_reverse(str,rev_str);
    output(str,rev_str);
    return 0;
}

void input_string(char *a)
{
    scanf("%s",a);
}

void str_reverse(char *str, char *rev_str)
{
    int c = 0;
    for (int i = 0; str[i] != '\0' ; i++)
    {
        c++;
    }
    int d = c-1,j=0;    
    while (j < c)
    {
        rev_str[j] = str[d];
        d--;
        j++;
    }
    rev_str[j]='\0';
}

void output(char *a, char *reverse_a)
{
    printf("reverse of %s is %s\n",a,reverse_a);
}

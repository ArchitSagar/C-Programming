#include <stdio.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main()
{
    char a[50],b[50];
    input_string(a,b);
    int index;
    index = sub_str_index(a,b);
    output(a,b,index);
    return 0;
}

void input_string(char* a, char* b)
{
    scanf("%s%s",a,b);
}

int sub_str_index(char* string, char* substring)
{
    int count = 0;
    for (int k = 0; substring[k] != '\0'; k++)
    {
        count++;
    }
    
    int index;
    for (int i = 0; string[i] != '\0'; i++)
    {
        int z = i,c = 0;
        if (substring[0] == string[i])
        {
            for (int j = 0; substring[j] != '\0'; j++)
            {
                if (substring[j] == string[z])
                {
                    c++;
                }
                z++;
                if (c == count)
                {
                    return i;
                }
                               
            }
            
        }
        
    }
    
}

void output(char *string, char *substring, int index)
{
    printf("index of substring %s in string %s is %d",substring,string,index);
}
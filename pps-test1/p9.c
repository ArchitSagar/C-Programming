#include <stdio.h>
#include <string.h>

void input_two_string(char *a, char *b)
{
    scanf("%s%s",a,b);
}
char str_cmp(char *a, char *b,char str_result[2][100])
{
    int i;
    for (i = 0 ;a[i]!='\0' && b[i]!='\0';  i++)
    {
        if (a[i]>b[i]){
            strcpy(str_result[0],a);
            strcpy(str_result[1],b);
            return 0;
        
    }

        else if(a[i]<b[i]){
            strcpy(str_result[0],b);
            strcpy(str_result[1],a);
            return 0;

    }
    }
    if (a[i]==b[i]){
        strcpy(str_result[0],a);
        strcpy(str_result[1],b);
        return 1;
    }
    else if (a[i]=='\0'){
        strcpy(str_result[0],b);
        strcpy(str_result[1],a);

    }
    else {
        strcpy(str_result[0],a);
        strcpy(str_result[1],b);
    }
    
    
}
void output(char str_result[2][100],char*c)
{
    if(*c==1){
        printf("%s is equal to %s",str_result[0],str_result[1]);
    }
    else{
        printf("%s is greater than %s",str_result[0],str_result[1]);
    }
}
int main()
{
    char a[100],b[100];
    input_two_string(a,b);
    char str_result[2][100];
    char c = str_cmp(a,b,str_result);
    output(str_result,&c);
    return 0;

}
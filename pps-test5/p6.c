#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main(){
    char a[50];
    input_string(a);
    int no_words;
    no_words = count_words(a);
    output(a,no_words);
    return 0;
}

void input_string(char *a){
    // fgets(a,50,stdin);
    scanf("%[^\n]%*c", a);    
}

int count_words(char *string){
    int count = 0;
    char copy[50];
    strcpy(copy,string);
    char *piece = strtok(copy," ");
    while (piece != NULL)
    {
        count++;
        piece = strtok(NULL," ");
    }
    return count;
}

void output(char *string, int no_words){
    printf("The number of words in '%s' is %d",string,no_words);
}
#include <stdio.h>

void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
    float r,h,l;
    input_camel_details(&r,&h,&l);
    int m;
    m = find_mood(r,h,l);
    output(r,h,l,m);
    return 0;
}

void input_camel_details(float *radius, float *height, float *length)
{
    scanf("%f%f%f",radius,height,length);
}

int find_mood(float radius, float height, float length)
{
    
    if (radius<height && radius<length){
        return 1;
    }
    else if (height<length && height<radius){
        return 2;
    }
    else if (length<height && length<radius)
    {
        return 3;
    }
    
}

void output(float radius, float height, float length, int mood)
{
    if (mood == 1){
        printf("The camel is Sick\n");
    }
    else if (mood == 2)
    {
        printf("The camel is Happy\n");
    }
    else if (mood == 3)
    {
        printf("The camel is Tense\n");
    }
       
}

/* int main(){
    char c[50];
    find_food(r,h,l,c);
}

strcpy() */
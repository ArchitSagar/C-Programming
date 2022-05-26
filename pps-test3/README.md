1. Write a program to find the area of a triangle using following function signatures. 

```c
void input(float base, float height); 
void find_area(float base , float height, float *area); 
void output(float base, float height, float area); 
```
>*input*:<br>1<br>2<br><br>output:<br>The area of the traingle with base 1.000000 and height 2.000000 is 1.000000 


2. Write a program to find if a triangle is scalene.<br>
    A triangle is a scalene traingle if all the three sides of the triangle are not equal to each other. 

```c
    int input_side()
    int check_scalene(int a, int b, int c)
    void output(int a, int b, int c, int isscalene)
```

>*input*:<br>5<br>4<br>5<br><br>*output*:<br>The triangle with sides 5, 4 and 5 is not scalene

3. Write a program find whether a number is a composite number.<br>
   A Composite number has more than 2 factors.

```c
    int input_number(); 
    int is_composite(int n); 
    void output(int n, int result);
```
>*input*:<br>8<br><br>*output*:<br>8 is a composite number.

4. Write a program to find Sum of composite number in an array of different numbers entered by the user. 

```c
    int input_array_size(); 
    void input_array(int n, int a[n]); 
    int sum_composite_numbers(int n, int a[n]); 
    void output(int sum); 
```

>*input*:<br>1 2 7 8 12<br><br>*output*:<br>20 

5. Write a program to find gcd (hcf) of two numbers. 

```c
    int input(); 
    int find_gcd(int a, int b); 
    void output(int a, int b, int gcd);
```
>*input*:<br>12<br>16<br><br>*output*:<br>4


6. Write a program to reverse a string. 

```c
    void input_string(char *a);
    void str_reverse(char *str, char *rev_str);
    void output(char *a, char *reverse_a);
```

>*input*:<br>hello<br><br>*output*:<br>olleh

7. Write a program to find the area of a triangle.

```c
    typedef struct _triangle 
    { 
        float base,altitude,area; 
    } Triangle; 

    Triangle input_triangle(); 
    void find_area(Traingle *t);
    void output(Triangle t);
```

>*input*:<br>2<br>3<br><br>output:<br>The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000 

8. Write a program to find the triangle with smallest area in n given triangles. 

```c
    typedef struct _triangle 
    { 
        float base,altitude,area; 
    } Triangle; 
    int input_n();
    
    Triangle input_triangle(); 
    void input_n_triangles(int n, Triangle t[n]); 
    void find_area(Triangle *t);
    void find_n_areas(int n, Triangle t[n]); 
    Triangle find_smallest_triangle(int n, Triangle t[n]);
    void output(int n, Triangle t[n], Triangle smallest);
```

>input:<br>2 3<br>4 6<br><br>The smallest of triangles out of triangles with base and height of<br>2,3<br>4,6<br>is triangle with base 2.000000, 3.000000 having area = 3.000000

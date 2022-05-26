1. Write a program to find sum of two fractions

```c
    void input(int *num1, int *den1, int *num2, int *den2);
    void add(int num1,int den1, int num2, int den2, int *res_num, int *res_den3);
    void output(int num1, int den1, int num2, int den2, int res_num, int res_den);
```

>*input*:<br>1 4<br>1 2<br><br>output:<br>1/2 + 1/4 = 3/4


2. Write a program to find the smallest of three fractions.

```c
    typedef struct fraction
    {
        int num, den;
    } Fraction;
    
    Fraction input_fraction();
    Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3);
    void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest);
```

>*input*:<br>1 2<br>1 3<br>1 4<br><br>*output*:<br>The smallest of 1 / 2 , 1 / 3 and 1 / 4 is 1 / 4

3. Write a program find the nCr given n and r.

```c
    int input_n_and_r(int *n, int *r)
    int ncr(int n, int r);
    void output(int n, int r, int result);
```

>*input*:<br>6<br>3<br><br>*output*:<br>For n = 6 and r = 3 nCr = 20


4. Write a program to evaluate a polynomial at a given point using Horners method.

```c
    int input_degree();
    void input_coefficients(int n, float a[n]);
    float input_x();
    float evaluate_polynomial(int n, float a[n], float x);
    void output(int n, float a[n], float x, float result);
```

>*input*:<br>1<br>1 1<br>1<br><br>*output*:<br>H(1, 1, 1) = 1.00 + 1.00 * 1.00^1 = 2.000000<br>
>**Hint**: [Horner's Method](https://en.wikipedia.org/wiki/Horner%27s_method#:~:text=Alternatively%2C%20Horner's%20method%20also%20refers,into%20general%20use%20around%201970.)


5. Write a program to find the index of the largest number in an array.

```c
    int input_size();
    void input_array(int n, int a[n]);
    int find_largest_index(int n, int a[n]);
    void output(int index);
```

>*input*:<br>4 2 9 1 7<br><br>*output*:<br>The Index of largest number of the above array is: 2

6. Write a program to count the number of words in a string using strtok(string.h)

```c
    void input_string(char *a);
    int count_words(char *string);
    void output(char *string, int no_words);
```

>*input*:<br>hello world hello<br><br>output:<br>The number of words in "hello world hello" is 3


7. Write a program to add two fractions.

typedef struct fraction
{
    int num, den;
} Fraction;

```c
    Fraction input_fraction();
    int find_gcd(int a, int b);
    Fraction add_fractions(Fraction f1, Fraction f2)
    void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
```

>*input*:<br>9 6<br>5 6<br><br>*output*:<br>9/6 + 5/6 = 7/3

8. Write program to add n fractions

```c
typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n,Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);
```
>*input*:<br>3<br>4 3<br>8 9<br>1 2<br><br>*output*:<br>4/3 + 8/9 + 1/2 is 49/18

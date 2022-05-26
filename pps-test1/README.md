1.	Write a program to print your name
2.	Write a program to Add two numbers
3.	Write a program to Add two number using 4 functions **Pass by value**

```c
    int input();
    int add(int a, int b);
    void output(int a, int b, int sum);
```

>	*input*:<br>1<br>2<br><br>*output*:<br>sum of 1+2 is 3    
	
4.	Add two numbers using 4 functions **Pass by reference**

```c
    void input(int *a, int *b);
    void add(int a, int b, int *sum);
    void output(int a, int b, int sum);
```    

>	*input*:<br>1<br>2<br><br>*output*:<br>sum of 1+2 is 3

5.	Write a program to Compare 3 numbers using 4 functions
```c
	int input ();
	int cmp(int a, int b, int c);
	void output(int a, int b, int c, int largest);
```

>	*input*:<br>1<br>1<br>0<br><br>*output*:<br>The largest of 1 , 1 and 0 is 1    

	
6.	Write a program to find Sum of all natural numbers till n

```c	 
	int input_n();
	int sum_n(int n);
	void output(int n, int sum);
```

>	*input*:<br>5<br><br>*output*:<br>1+2+3+4+5 is 15



7.	Write a program to find Sum of n different number entered by the user

```c
	int input_array_size();
	void input_array(int n, int a[n]);
	int sum_n_arrays(int n, int a[n]);
	void output(int n, int a[n], int sum);
```
	
>	*input*:<br>3<br>1 7 11<br><br>*output*:<br>1+7+11 is 19
	
	
8. Write a program to find the square root of a number.
	
```c	
	float input();
	float my_sqrt(float n);
	void output(float n, float sqrt_result);
```

>	*input*:<br>49<br><br>*output*: The square root of 49.0 is 7.0<br>
>	**Hint**: [Babylonian Method](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method)
	
9.	Write a program to Compare two strings character by character using Ascci Value

```c
	void input_two_string(char *a, char *b);
	int strcmp(char *a, char *b);
	void output(char *a, char *b, int result);
```

>	*input*:<br>hello<br>world<br><br>output:<br>world is greater than hello<br>
>	**Hint**:<br>Try
```c
	printf("%d\n", 'a');
```
	
10. Write a program to find Sum of two complex numbers

```c
	struct _complex
	{
		float real,imaginary;
	};
	typdef struct _complex Complex;
	
	Complex input_complex(); 
	Complex add(Complex a, Complex b);
	void output(Complex a, Complex b, Complex sum);
```

>*input*:<br>2 3<br>4 5<br><br>*output*:<br>2 + 3i + 4 + 5i is 6 + 8i

11. Write a program to find Sum of n complex numbers

```c
	struct _complex
	{
		float real,imaginary;
	};
	typedef struct _complex Complex;
	
	int get_n();
	Complex input_complex();
	void input_n_complex(int n, Complex c[n]);
	Complex add(Complex a, Complex b);
	Complex add_n_complex(int n, Complex c[n]);
	void output(int n, Complex c[n], Complex result);
```
		
>	*input*:<br>2<br>2 3<br>4 5<br><br>output:<br>2 + 3i<br>+ 4 + 5i<br>is 6 + 8i



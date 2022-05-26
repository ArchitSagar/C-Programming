1. Write a program to find the distance between two points

```c
    void input(float *x1, float *y1, float *x2, float *y2);
    float find_distance(float x1, float y1, float x2, float y2);
    void output(float x1, float y1, float x2, float y2, float distance);
```

>*input*:<br>1 1<br>2 2<br><br>*output*:<br>The distance between point (1.000000,1.000000) and (2.000000,2.000000) is with 1.4142


2. Write a program to find whether the three points form a triangle.

```c
    void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
    int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
    void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
```

>*input*:<br>1 1<br>0 0<br>1 1<br><br>*output*:<br>The points (1.0, 1.0), (0.0, 0.0) and (1.0, 1.0) do not form a triangle


3. Write a program find whether a given number is a prime number.

```c
    int input_number();
    int is_prime(int n);
    void output(int n, int result);
```

>*input*:<br>3<br><br>*output*:<br>3 is a prime number.


4. Write a program to find nth number in fibonacci sequence.<br>
    Fibonacci sequence consists of 0,1,1,2,3,5,8,13,21........

```c
    int input();
    int find_fibo(int n);
    void output(int n, int fibo);
```

>*input*:5<br><br>*output*:<br>Fibo(5) = 5

5. Write a program to find all the prime numbers from 2 to n Eratosthenes Sieve method.

```c
        int input_array_size();
        void init_array(int n, int a[n];
        void erotosthenes_sieve(int n, int a[n]);
        void output(int n, int a[n]);
```

>*input*:<br>100<br><br>*output*:<br>2,3,7,11,13,19,23,29,31,...<br>
>Hint: [Eratosthenes Sieve](https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes)


6. Write a program to find the index of a substring of a string.

```c
  void input_string(char* a, char* b);
  int sub_str_index(char* string, char* substring);
  void output(char *string, char *substring, int index);
```

>*input*:<br>helloworldhello<br>world<br><br>*output*:<br>The index of world in helloworldhello is 5


7. Write a program to find the length of a line.

```c
    typedef struct point
    {
        float x, y;
    } Point;
    
    typedef struct line
    {
        Point p1, p2;
        float distance;
    } Line;

    Point input_point();
    Line input_line();
    void find_length(Line *l);
    void output(Line l);
```

>*input*:<br>1 1<br>2 2<br><br>*output*:<br>The distance between point (1.000000,1.000000) and (2.000000,2.000000) is with 1.4142


8. Write a program to find the permeter of a polygon

```c
    typedef struct point
    {
        float start_end_x, start_end_y;
    } Point;


    typedef struct line
    {
        Point p;
        float distance;
    } Line;

    typedef struct polygon
    {
        int sides;
        Line l[100];
        float perimeter;
    } Polygon;
      
    int input_n();
    Line input_line(int n);
    void input_n_lines(int n, Line *l);
    int input_polygon(Polygon *p);
    float find_distance(Point a, Point b);
    void find_n_distance(int n, Line *l);
    void find_perimeter(Polygon* p);
    void output(Polygon p);
```
>*input*:<br>Enter the number of sides of the polygon:<br>4<br>Enter the coordinates of point 1 (x,y):<br>0 0<br>Enter the coordinates of point 2 (x,y):<br>1 0<br>Enter the coordinates of point 3 (x,y):<br>1 1<br>Enter the coordinates of point 4 (x,y):<br>0 1<br><br>*output*:<br>The perimeter of the polynomial is: 4.000000


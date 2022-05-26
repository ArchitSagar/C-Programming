1.  Write a program to find distance between two points.

```c  
  struct _point
  {
      float x;
      float y;
  };
  typedef struct _point Point;
  
  Point input();
  void dist(Point a, Point b, float *res);
  void output(Point a, Point b, float res);
```
>*input*:<br>1.0 1.0<br>2.0 2.0<br><br>*output*:<br>The distance b/w (1.0, 1.0) and (2.0, 2.0) is 1.0
 
2.  Write a program to find the weight of the camel given height, length and stomach radius using four functions
>   weight = pi * stomach_raduius^3 * sqrt(height * length)

```c
    void input_camel_details(float *radius, float *height, float *length);
    float find_weight(float radius, float height, float length);
    void output(float radius, float height, float length, float weight); 
```

>*input*:<br>1<br>1<br>1<br><br>*output*:<br>The weight of the camel with radius: 1.0, height: 1.0, length: 1.0 is 3.1415

3.  Write a program to find the weight of the camel given height, length and stomach radius using four functions **(Structures)**
>    weight = pi _ stomach_raduius3 _ sqrt(height _ length).
```c
    struct camel 
    { 
        float radius, height, length,weight; 
    };
    typedef struct camel Camel;
    
    Camel input();
    float find_weight(Camel c);  //pass by value 
    //or
    void find_weight(Camel *c); //passing address variable
    void output(Camel c); 
```
>*input*:<br>1<br>1<br>1<br><br>*output*:<br>The weight of the camel with radius: 1.0, height: 1.0, length: 1.0 is 3.1415

4.  Write a program to find out the mood of a Camel.<br>
    Camel is:
    - sick when its stomach_radius is less than height and less than length.
    - happy when its height is less than length and less than stomach_radius.
    - tense whem its length is less than height and stomach_radius.

```c
    void input_camel_details(float *radius, float *height, float *length);
    int find_mood(float radius, float height, float length)
    void output(float radius, float height, float length, int mood); 
```

>*input*:<br>5<br>2<br>4<br><br>*output*:<br>The Camel is Happy.

5.  Write a program to find borga(x) given x. The formula for finding             borga(x) is 1 + (x^1)/3! + (x^2)/5! + (x^3)/7! .....<br>
    stop when the next term is less 0.000001 using four functions. 
    
```c
    int input(int x);
    float borga_X(int x);
    void output(int x, float result);
```

>*input*:<br>5<br><br>output:<br>borga(5) = 2.699337

6.  Write a program to find the average of all the odd elements in an array.

```c
  void input(int n, int a[n]);
  float odd_average(int n, int a[n]);
  void output(float avg);
```

>*input*:<br>5 4 3 8 9<br><br>*output*:<br>Average of all the odd elements is: 4


7.  Write a program to find out if the name of the camel is a nice name.Camels has a nice name if it has at least 2 vowels and 2 consonants in it.

```c
    void input(char *name);
    int has_nice_name(char *c);
    void output(int res);
```

>*input*:<br>Conky<br><br>*output*:<br>The camel does not have a nice name

8.  Write program to find the weight of a truck load of n camels.<br>
    Take input:
    - truck weight
    - height, radius and length of n different camels<br>
    compute the total truck weight. ( Truck weight + weight of the camels)

```c
typedef struct _camel
{
    float radius, height, length, weight;
} Camel;

    void input(int n, Camel c[n], float *truck_weight);
    void find_camel_weight(int n, Camel c[n]);
    float compute_total_weight(int n, Camel c[n], float truck_weight);
    void output(float total_weight);
```

>*input*:<br>Enter the number of camels:<br>3<br>Enter the height of camel no. 1:<br>1<br>Enter the length of camel no. 1:<br>1<br>Enter the radius of camel no. 1:<br>1<br>Enter the height of camel no. 2:<br>1<br>Enter the length of camel no. 2:<br>1<br>Enter the radius of camel no. 2:<br>1<br>Enter the height of camel no. 3:<br>1<br>Enter the length of camel no. 3:<br>1<br>Enter the radius of camel no. 3:<br>1<br>Enter the weight of the truck:<br>2000<br><br>*output*:<br>The Total weight of the truck is: 2009.424561

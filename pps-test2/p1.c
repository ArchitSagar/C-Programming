#include <stdio.h>
#include <math.h>


struct _point
  {
      float x;
      float y;
  };
  typedef struct _point Point;
  
Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
    Point a,b;
    a=input();
    b=input();
    float res;
    dist(a,b,&res);
    output(a,b,res);
    return 0;
}

Point input()
{
    Point num;
    scanf("%f%f",&num.x,&num.y);
    return num;

}
void dist(Point a, Point b, float *res)
{
    *res= (0.5*(pow((b.x-a.x),2)+pow((b.y-a.y),2)));
}
void output(Point a, Point b, float res)
{
    printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.1f",a.x,a.y,b.x,b.y,res);

}
#include <math.h>

typedef struct{
    float x;
    float y;
} Point;

typedef struct{
    Point p1;
    Point p2;
    Point p3;
} Triangle;

double distanceBetweenTwoPoints(Point p1, Point p2){
    double tempX = pow(abs(p2.x - p1.x), 2.0);
    double tempY = pow(abs(p2.y - p1.y), 2.0);
    return sqrt(tempX+tempY);
}

//area = h * b/2
//OR use 'Heron's Formula' = Area = sqrt(s(s-a)(s-b)(s-c))
//s = the 'semi-perimeter' (a+b+c)/2
double triArea(Triangle t){
    float a, b, c, s, area;
    a = distanceBetweenTwoPoints(t.p1, t.p2);
    b = distanceBetweenTwoPoints(t.p2, t.p3);
    c = distanceBetweenTwoPoints(t.p3, t.p1);

    s = (a+b+c)/2.0;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    return area;

}
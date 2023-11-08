#include<conio.h>
#include<stdio.h>
#define pi 3.14
struct circle
{
    double radius;
}s1;
void circlecalc(int r);
int main() {
    printf("Enter the radius of the circle\n");
    scanf("%lf",&s1.radius);
    circlecalc(s1.radius);
    return 0;
}
void circlecalc(int r) {
    printf("The area of circle: %lf\nThe circumference of circle: %lf\n",pi*r*r,pi*2*r);
}

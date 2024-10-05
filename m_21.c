#include <stdio.h>
#include <math.h>

int isTriangle(double a, double b, double c) {   //to check if that three side can make a tringle
    return (a + b > c) && (b + c > a) && (c + a > b);
}

double calculateArea(double a, double b, double c) {   // to calculate the area of a triangle using Heron's formula
float s=(a+b+c)/2;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    double side1, side2, side3;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);


    if (isTriangle(side1, side2, side3)) {                      //using first UDF
        double area = calculateArea(side1, side2, side3);      //using second UDDF
        printf("The area of the triangle is: %.2lf\n", area);
    } else {
        printf("The given lengths do not form a triangle.\n");
    }

    return 0;
}

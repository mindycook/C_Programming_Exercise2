
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


float convertFtoC(float Fh);
float calculateAreaWidthHight(float width, float height);
double calculateAreaRadius(double radius);

float convertFtoC(float Fh){
    Fh = (  Fh-32.0) * (5.0/9);
    return Fh;
}

float calculateAreaWidthHight(float width, float height){
    return width*height;
}

double calculateAreaRadius(double radius){
    return (3.14 * pow(radius, 2.0));
}


int main(){

    printf("%f\n", convertFtoC(33));
    printf("%f\n", calculateAreaWidthHight(2, 3));
    printf("%f\n", calculateAreaRadius(3.5));

    return 0;
}
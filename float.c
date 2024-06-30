#include<stdio.h>
int main(){
    float a=5.5;
    float b;
    float c;
    scanf("%f %f", &b, &c);
    float sum=b+c;
    printf("%0.2f \n %0.1f \n %0.2f", a, b, sum);
    return 0;
}
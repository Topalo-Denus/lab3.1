#include <stdio.h>
#include <math.h>
int main(void){

float a,b,c;

printf ("\nedit b=");
scanf("%f",&b);

printf ("\nedit c=");
scanf("%f",&c);

if(c==5)
a = sqrt(b)+2*(sqrt(c));

if(c==0)
a=(b)/(c-6);

if(c==-5)
a=b+3*(pow(c,3));

printf("\na=%.1f",a);


return 0;
}

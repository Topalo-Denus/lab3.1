#include <stdio.h>
#include <math.h>
int main(void){

float a,b,c;
metka:

printf ("\nedit b=");
scanf("%f",&b);

printf ("\nedit c=");
scanf("%f",&c);

if (c!=5 && c!=0 && c!=-5)
{
printf("\nCannot calculate  Try again...\n" );
goto metka;}
if(c==5)
a = sqrt(b)+2*(sqrt(c));

if(c==0)
a=(b)/(c-6);

if(c==-5)
a=b+3*(pow(c,3));

printf("\nversion if a=%.1f",a);

if(c==5)
a = sqrt(b)+2*(sqrt(c));

else if(c==0)
a=(b)/(c-6);

else
a=b+3*(pow(c,3));

printf("\nversion else if a=%.1f",a);

return 0;
}
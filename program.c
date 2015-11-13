#include <stdio.h>
float a,b,c;

int main()
{
printf("Enter a,b,c:\n");
scanf("%f %f %f",&a,&b,&c);
printf("%f,%f,%f",c*b/a,a*c/b,b*a/c);
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    float d,e,f,y;
    scanf("%d %d",&a,&b);
    c=a+b;
    x=a-b;
    scanf("%f %f",&d,&e);
    f=d+e;
    y=d-e;
    printf("%d %d \n",c,x);
    printf("%.1f %.1f",f,y);
    return 0;
}
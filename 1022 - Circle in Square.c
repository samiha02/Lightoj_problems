#include<stdio.h>

#define pi 2*acos(0.0)

int main()

{
    int tcase,i,ccase=1;

    double r,area_of_circle,area_of_square,s,actual_area;

    scanf("%d",&tcase);

    for(i = 1 ; i <= tcase ; i++){

        scanf("%lf",&r);

        s = 2*r;

        area_of_circle = pi*r*r;

        area_of_square = s*s;

        actual_area = area_of_square-area_of_circle;

        printf("Case %d: %0.2lf\n",ccase,actual_area);

        ccase++;

    }

    return 0;

}

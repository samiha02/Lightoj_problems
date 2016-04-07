#include<stdio.h>

int main()

{
    int T,a,b,i,sum,ccase=1;

    scanf("%d",&T);

    for(i = 1 ; i <= T ; i++){

        scanf("%d %d",&a,&b);

        sum = a+b;

        printf("Case %d: %d\n",ccase,sum);

        ccase++;

    }

    return 0;
}

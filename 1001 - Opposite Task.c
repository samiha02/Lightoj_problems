#include<stdio.h>

int main()

{
  int tcase,n,i,a,b;

  scanf("%d",&tcase);

  for(i = 1 ; i <= tcase ; i++){

    scanf("%d",&n);

    a = n/2;

    b = n-a;

    printf("%d %d\n",a,b);

  }
  return 0;

}

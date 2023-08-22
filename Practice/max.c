#include<stdio.h>
#include<math.h>
int main()
{
int a,b;	
printf("enter number");

scanf("%d", &a);
printf("second number");
scanf("%d", &b);
int max;
  if ( a>b )
  {
  	max = a;
  }
  else
  { max = b;
  }
  printf("%d is max ",max);

    return 0;

}


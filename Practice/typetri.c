#include<stdio.h>
int main(){
int s1 , s2 ,s3,sum = 0  ;
printf("Enter first side : ");
scanf("%d",&s1);
int max = s1;
printf("Enter second side : ");
scanf("%d",&s2);
if(s2>max)
{
	max = s2;
}
printf("Enter therd side : ");
scanf("%d",&s3);
if(s3>max)
{
	max = s3;
}

sum = s1 + s2 + s3 -max;

if( sum > max)
{
	if(max == s1)
	{
		if(s1*s1 == s2*s2 + s3*s3)
		{
			printf("This is right angle Triangle!");
			return 0;
		}
	}
		if(max == s2)
     	{
		if(s2*s2 == s1*s1 + s3*s3)
		{
			printf("This is right angle Triangle!");
			return 0;
		}
	    }
	    	if(max == s3)
	{
		if(s3*s3 == s2*s2 + s1*s1)
		{
			printf("This is right angle Triangle!");
			return 0;
		}
	}
	
	
	if(s1 == s2 && s2 ==s3 )
	{
		printf("This is isoscal triangle!");
		return 0;
	}
	else if( s1==s2 ||s2 ==s3||s3==s1)
	{
		printf("This is equilateral triangle");
		return 0;
	}
	else {printf("This is scalene Triangle!");
	return 0;
	}
	
}

printf("This is not valid triangle!!!");
return 0;
}


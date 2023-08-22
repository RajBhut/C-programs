#include<stdio.h>
#include<math.h>
int main()
{
	
//char var = 3; // note : 3 in binary = 0000 0011
//printf("%d" , var << 1);
// left shift is eqeal to multiplication by 2^righyoprand. 
//var = 3 , var << 1  output: 6 = [ 3 * 2^1]; var << 4 output : 48 =[ 3 * 2^4]

int new;
int i =0;
 while(i <= 100)
 {
 	int bi = 1;
 	while(bi<8)
 	{
	 
 	new = i * (pow(2,bi));
// 	printf("%d  after %d left shift is now %d \n
//	 z",i , bi, new);
printf("%d << %d = %d |",i , bi , new);
 	bi++;
 
 }
 printf("<-:for %d  \n\n" , i);
 	
	 	i++;
 	
 
 }
    return 0;

}


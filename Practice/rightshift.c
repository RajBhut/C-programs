#include<stdio.h>
#include<math.h>
int main()
{
	
//char var = 3; // note : 3 in binary = 0000 0011
//printf("%d" , var >> 1);
// left shift is eqeal to division by 2^righyoprand. 
//var = 3 , var << 1  output: 1 = [ 3 / 2^1]; var = 32  >> 4 output : 2 =[ 32 / 2^4]

int new;
int i =0;
 while(i <= 100)
 {
 	int bi = 1;
 	while(bi<8)
 	{
	 
 	new = i / (pow(2,bi));

printf("%d >> %d = %d |",i , bi , new);
 	bi++;
 
 }
 printf("<-:for %d  \n\n" , i);
 	
	 	i++;
 	
 
 }
    return 0;

}


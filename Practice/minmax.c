#include <stdio.h> // use for input-output function
#include <limits.h> // use for inbuilt limits functions
int main()
{
	int min = INT_MIN;
	int max = INT_MAX;
	 unsigned int umax = UINT_MAX;
     unsigned int umin = 0;
     short int smin = SHRT_MIN;
     short int smax = SHRT_MAX;
     short unsigned sumin = 0; // minimum unsigned value is always "0" there is no symbolic constant for min. 
     short unsigned sumax = USHRT_MAX;
	
		printf("maximum value is %d and minimum value is %d \n", max, min ); // %d = desimal use for desimal value
		printf("maximum  unsined value is %u and minimum unsigned value is %u \n", umax, umin );// for unsigned value we cant use %d we have to use %u -> %u = unsigned desimal value
		printf("maximum  short value is %d and minimum short value is %d \n", smax, smin );
		printf("maximum  unsined value is %u and minimum unsigned value is %u \n", sumax, sumin );
// % ld for long int , %lu for unsigned long int , %lld for long long int ; % llu for unsigned long long int; 
// "NOTE"-> long long max = 8 bytes

		return 0;
}


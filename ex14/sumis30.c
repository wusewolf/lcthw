#include <stdio.h>

//sum is odd, it cann't be even
int main()
{
	int a[]= {1,3,5,7,9,11,13,15};
	int len = sizeof(a)/sizeof(int);
	int i=0, j=0, k=0, sum=0;

	for(; i<len; i++) {
		for(; j<len; j++) {
			for(; k<len; k++) {
				sum = a[i] + a[j] + a[k];
				if(30 == sum) {
					printf("%-2d+%2d+%2d=%d\n", a[i],a[j],a[k],sum);
					sum = 0;
				 }
			}
			k = 0;
		}
		j = 0;
	}

	return 0;
}

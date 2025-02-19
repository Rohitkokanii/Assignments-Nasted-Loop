// Q 1 . Accept minimum and maximum value from user
//-- Print Only Prime Numbers

#include<stdio.h>

int main() {
	int min, max;

	printf("\nEnter Min->>Max no. = ");
	scanf_s("%d%d",&min,&max);

	
	for (int i = min; i <= max; i++) {
		int num = i;
		int isPrime = 1;
		if (num < 2) {
			continue;
		}
		for (int j = 2; j < num; j++) {
			if (num % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			printf("\nPrime No. = %d \n", num);
		}	
	}

	return 0;
}
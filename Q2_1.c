//Q 2 . Accept One Integer Value From User , 
// -- Print First 10 Prime Numbers from that User Entered Value 

#include<stdio.h>

int main() {

	int num;
	printf("\nEnter No. = ");
	scanf_s("%d",&num);
	int count = 0;
	for (int i = num; 1; i++) {
		int checkPrime = i;
		int isPrime = 1;
		
		for (int j = 2; j < checkPrime; j++) {
			if (checkPrime % j == 0) {
				isPrime = 0;
				break;
			}
		}
		if (isPrime) {
			count++;
			printf("\n%d] Prime no. = %d\n",count,checkPrime);
		}
		if (count == 10) {
			break;
		}
	}
	return 0;
}
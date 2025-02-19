// Q 2 . Accept One Integer Value From User , 
// first 10 armstrong numbers from that user entered value

#include<stdio.h>

int main() {
	int input;
	int count = 0;

	printf("\nEnter No. = ");
	scanf_s("%d",&input);

	for (int i = input; 1; i++) {
		int num = i;
		int orgNum = i;
		int a = i;
		int numCount = 0;
		int sumPower = 0;


		while (num > 0) {
			numCount++;
			num /= 10;
		}
		for (int j = 1; j <= numCount;j++) {
			int lastDigit = a % 10;
			int mult = 1;
			for (int b = 1; b <= numCount; b++) {
				mult = mult * lastDigit;
			}
			sumPower += mult;
			a /= 10;
		}
		if (orgNum == sumPower) {
			count++;
			printf("\n%d] Armstrong = %d\n",count,sumPower);
		}
		if (count == 10) {
			break;
		}
	}
	
	return 0;
}
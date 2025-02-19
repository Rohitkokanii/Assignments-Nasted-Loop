// Q 1 . Accept minimum and maximum value from user
// Print Only Armstrong Numbers

#include<stdio.h>

int main() {
	int min,max;

	printf("\nEnter Min->Max No. = ");
	scanf_s("%d%d",&min,&max);

	for(int b=min;b<=max;b++){
		int num = b;
		int numCount=b;
		int orgNum = b;
		int count = 0;
		int lastDigit;
		int sumMult = 0;
	
		while (numCount > 0) {
			count++;
			numCount /= 10;
		}

		for (int i = 1; i <= count; i++) {
			lastDigit = num % 10;
			int mult = 1;
			for (int j = 1; j <= count; j++) {
				mult = mult * lastDigit;
			}
			sumMult = sumMult + mult;
			num /= 10;
		}
		if (sumMult == orgNum) {
			printf("\nArmstrong = %d\n", sumMult);
		}
	}
	return 0;
}

// Q 1 . Accept minimum and maximum value from user
//- Print Only Palindrome Numbers

#include<stdio.h>

int main() {
	int min,max;
	printf("\nEnter Min -> Max No. = ");
	scanf_s("%d%d", &min,&max);

	
	int lastDigit;
	int rev = 0;

	for(int i=min;i<=max;i++){
		int num = i;
		int orgNum = i;
		while (num > 0) {
			lastDigit = num % 10;
			rev = rev * 10 + lastDigit;
			num /= 10;
		}

		if (rev == orgNum) {
			printf("\nPalindrom = %d\n", rev);
		}
		rev = 0;
	}

	return 0;
}
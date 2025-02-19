//Q 2 . Accept One Integer Value From User,
//First  10 palindrome numbers from that user entered value

#include<stdio.h>

int main() {

	int a;
	int count = 0;
	printf("\nEnter No. = ");
	scanf_s("%d",&a);

	for (int i = a; 1; i++) {
		int num = i;
		int orgNum = i;
		int lastDigit;
		int rev = 0;

		while (num > 0) {
			lastDigit = num % 10;
			rev = rev * 10 + lastDigit;
			num /= 10;
		}
		if (rev == orgNum) {
			count++;
			printf("\n%d] Palindrom No = %d\n",count,rev);
		}
		if (count == 10) {
			break;
		}

	}
}
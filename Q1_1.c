//Q 1.Accept minimum and maximum value from user
//-- Print Multiplication Tables Of All Even Numbers Only

#include<stdio.h>

int main() {
	int min, max;
	printf("\nEnter Two No. Min -> Max = \n");
	scanf_s("%d%d", &min, &max);

	for (int i = min; i <= max; i++) {
		int num = i;
		if (num % 2 != 0) {
			continue;
		}
		for (int i = 1; i <= 10; i++) {
			printf("\n %d * %d = %d",num,i,num*i);
		}
		printf("\n");
	}

	return 0;
}
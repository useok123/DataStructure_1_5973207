#include<stdio.h>

void main(void) {
	unsigned int input = 0;
	printf("정수를 입력하세요: ");
	scanf_s("%u", &input);
	int result = input;
	printf("입력된 정수의 32비트 표현: ");
	if (input == 0) {
	}
	else {
		for (int i = 31; i >= 0; i--) {
			printf("%d", (input >> i) & 1);
		}
	}

}
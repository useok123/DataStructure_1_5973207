#include<stdio.h>

void main(void) {
	unsigned int input = 0;	//변수 초기화
	printf("정수를 입력하세요: ");	//문자열 출력
	scanf_s("%u", &input);	//임의의 정수 입력
	int result = input;	//result 변수에 값 대입
	printf("입력된 정수의 32비트 표현: ");	//문자열 출력
	if (input == 0) {
	}
	else {	//입력값이 0이 아닐때 
		for (int i = 31; i >= 0; i--) {	//i가 0보다 작아질때까지 반복함
			printf("%d", (input >> i) & 1);	//32비트를 출력한다
		}
	}

}
#include<stdio.h>

void main(void) {
	unsigned int input = 0;
	printf("������ �Է��ϼ���: ");
	scanf_s("%u", &input);
	int result = input;
	printf("�Էµ� ������ 32��Ʈ ǥ��: ");
	if (input == 0) {
	}
	else {
		for (int i = 31; i >= 0; i--) {
			printf("%d", (input >> i) & 1);
		}
	}

}
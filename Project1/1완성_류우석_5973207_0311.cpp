#include<stdio.h>

void main(void) {
	unsigned int input = 0;	//���� �ʱ�ȭ
	printf("������ �Է��ϼ���: ");	//���ڿ� ���
	scanf_s("%u", &input);	//������ ���� �Է�
	int result = input;	//result ������ �� ����
	printf("�Էµ� ������ 32��Ʈ ǥ��: ");	//���ڿ� ���
	if (input == 0) {
	}
	else {	//�Է°��� 0�� �ƴҶ� 
		for (int i = 31; i >= 0; i--) {	//i�� 0���� �۾��������� �ݺ���
			printf("%d", (input >> i) & 1);	//32��Ʈ�� ����Ѵ�
		}
	}

}
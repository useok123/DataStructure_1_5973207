#include <stdio.h>
#include <string.h>	//strlen �������

int main() {
	char input[200];	//���� �迭
	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%[^\n]s", input, (int)sizeof(input));	//���ڿ� �Է�
	int len = strlen(input);	//���ڿ� ����
	printf("���ڿ��� ����: %d\n", strlen(input));	//���ڿ� ���� ���
	for (int i = 0; i < len; i++) {	//�ݺ�
		if (input[i] >= 'a' && input[i] <= 'z') input[i] = input[i] - 32;	//�ƽ�Ű�ڵ� Ȱ��, �ҹ����� ��쿡 �빮�ڷ� ��ȯ
		else if (input[i] >= 'A' && input[i] <= 'Z') input[i] = input[i] + 32;	//�ƽ�Ű�ڵ� Ȱ��, �빮���� ��쿡 �ҹ��ڷ� ��ȯ
	}
	printf("��ȯ�� ���ڿ�: ");
	printf("%s", input);	//��ȯ�� ���ڿ� ���.
}
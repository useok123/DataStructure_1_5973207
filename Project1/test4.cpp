//반복문에 사용할 num과 i, j 선언;
//사용자에게 보여줄 문자열 출력
//정수를 num에 입력받음
//j와 소수 출력문을 반복시키기 위한 i 반복문 시작(i는 2부터 num보다 작거나 같을때 까지 반복)
//	{
//		j 반복문 시작(j는 2부터 i 미만까지 반복)
//			{
//				i를 j로 나누었을때 0으로 나머지가 떨어진다면
//					{
//						반복문을 멈춘다.
//					}
//			}
//		i와 j가 같은 값이라면
//			{
//				정수를 출력한다.
//			}
//	}

#include<stdio.h>

int main() {
	int num;
	printf("정수 n을 입력하세요: ");
	scanf_s("%d", &num);
	printf("300 이하의 소수: ");
	int i;
	int j;

	for (i = 2; i <= num; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d ", i);
		}
	}
	return 0;
}
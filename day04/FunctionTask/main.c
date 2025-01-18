#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// �Է��� �޾� �� ���� ���� ������ ����
	int num1, num2, result;
	char oper;

	// ���� ���� ���� ������ ��� ���
	printf("[����] [������] [����] �Է�: ");
	scanf("%d %c %d", &num1, &oper, &num2);
	// 3 + 5

	result = calculator(num1, num2, oper);
	printf("%d %c %d = %d\n", num1, oper, num2, result);


	// �׽�Ʈ ���̽�
	result = calculator(3, 5, '+') == 8;
	printf("3 + 5 = %s\n", result ? "����" : "����"); // 1 �� ���� ��.

	result = calculator(30, 15, '-') ==  15;
	printf("30 - 15 = %s\n", result ? "����" : "����"); // 1 �� ���� ��.

	result = calculator(10, 15, '*') == 150;
	printf("10 * 15 = %s\n", result ? "����" : "����"); // 1 �� ���� ��.

	result = calculator(33, 15, '/') == 2;
	printf("33 / 15 = %s\n", result ? "����" : "����"); // 1 �� ���� ��.

	return 0;
}

// �Լ��� �ּ� �ۼ� ���
/*
* �� ������ �����ڸ� char�� ���޹޾�
* ����� ����� ��ȯ�ϴ� �Լ�
* @param num1 ù��° ����
* @param num2 �ι�° ����
* @param char ���� Ÿ���� ������
* @return �� ������ ���� ���
*/
int calculator(int num1, int num2, char oper) {
	// ��ȯ���� ���� ���� ����
	int result = 0;
	
	// ���޹��� �� ������ ���޹��� �����ڿ� ����
	// ����� �޶����� �Ѵ�.
	// 1. �߸��� �κ��� ��ģ��.
	// 2. +, -, *, /�� ��� �����Ѵ�.
	//     / �����⿡ ���ؼ��� �� ��� (int)
	// 3. ���� ���ڰ� �ƴ� ���� ���� ���
	//    ��������� 0�� ��ȯ�Ѵ�.
	switch (oper) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = (int)(num1 / num2);
		break;
	//default:
	//	result = 0;
	}
	return result;
}
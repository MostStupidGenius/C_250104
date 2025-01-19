#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// ���޵� ���ڸ� ���� ū ������ �ϴ� ���丮���� ����, ����Ͽ� ��ȯ
// n!
// n * (n-1) * ... * 2 * 1
int factorial(int n) {
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

// ���޵� ���ں��� 0������ ���ڸ� ��� ���ϴ� �Լ�
int sumAll(int n) {
	if (n <= 0) return 0; // �⺻��� -> ��͸� ���ߴ� ����
	return n + sumAll(n - 1); // ��ͻ��
}

// �ǽ� ����1
// ���޹��� �� ���� num1���� num2������ ���� ���ϴ�
// ����Լ� �����
// ��Ʈ: �� ������ ��� �����ϴ� ���

int sumWith(int start, int end) {
	if (start >= end) return end;
	return start + sumWith(start + 1, end);
}

int main() 
{
	// ����Լ�(Recursive Function)
	// ����Լ��� �ڱ��ڽ��� ȣ���ϰų� �⺻��ʸ� ��ȯ�ϴ�
	// ������� ū ������ ������ �۰� �ɰ��� ������ ó���ϴ� ����̴�.
	// �⺻���: ���ȣ���� ���ߴ� ����
	// ��ͻ��: �Լ��� �ڱ��ڽ��� ȣ���ϴ� �κ�
	int sum = sumAll(100);
	//printf("sum = %d\n", sum);

	int factorialResult = factorial(5);
	//printf("fact %d\n", factorialResult);

	// ����Լ��� Ȱ��Ǵ� ���
	// ���� Ʈ�� ��ȸ
	// ���丮 Ž��
	// ���� �˰��� - �� ���� Quick Sort, ���� ���� Merge Sort

	int start = 1, end = 100;

	int resultSum = sumWith(start, end);
	printf("result sum %d, %d = %d", start, end, resultSum);

	return 0;
}
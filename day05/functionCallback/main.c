#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>


// �Լ��� ����
// ����{} ���� �Լ� �̸��� ������ �ñ״�ó�� �����ϸ�
// main() �Ʒ����� �Լ��� �����ϴ��� main() �ȿ���
// �ش� �Լ��� ����� �� �ִ�.
void makeArray(int arr[], int size, int (*func)(int));
int square(int x);
int doubleValue(int x);

int main()
{
	// �ݹ��Լ�(callback)
	// �ٸ� �Լ��� �Ű������� ���޵Ǿ� ���߿� ȣ��Ǵ� �Լ��� ���Ѵ�.
	// �迭 ���� �� �ʱ�ȭ
	int arrInt[5] = {1, 2, 3, 4, 5};

	// �迭�� ���� ����
	int size = sizeof(arrInt) / sizeof(*arrInt);

	// �Լ� ������ ����
	int (*func)(int);
	func = square; // �����ϴ� �Լ�
	func = doubleValue; // �� ��� �ø��� �Լ�

	// �ʿ��� �� ����
	// �Լ��� ���� ����
	makeArray(arrInt, size, func);

	// �ٲ� �迭�� �� Ȯ��
	for (size_t i = 0; i < size; i++) {
		printf("%d ", arrInt[i]);
	}
	return 0;
}

// �ݹ��Լ� func
void makeArray(int arr[], int size, int (*func)(int)) {
	// �迭�� �迭�� ����, �Լ��� ���޹޾Ƽ�
	// �迭�� ��Ҹ� �Լ��� ��������� ä���ִ� �Լ�
	// �̶� �Լ��� �����ϴ� ���� �Լ��� ����ϴ� �ʿ��� �����Ѵ�.
	for (int i = 0; i < size; i++) {
		arr[i] = func(arr[i]);
	}
}

// ������ ������ �����ϴ� �Լ�
int square(int x) { return x * x; }

// ������ ������ 2�� ���� �Լ�
int doubleValue(int x) { return x * 2; }
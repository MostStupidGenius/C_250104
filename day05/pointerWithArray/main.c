#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// �迭�� �Լ��� ���޵� �� ������ ������ ����ȴ�.
// �Ϲ������� ������ ������ 4byte Ȥ�� 8byte�� ������.
// �����ϴ� �������̱� ������ ���� �� �޸� ũ�⸦ Ȯ���� �� ����.
//int getArrSize(int *arr) {
//	unsigned long long size = 0;
//
//	// �迭�� ũ��
//	size = sizeof(arr);
//	printf("arr size: %lld\n", size);
//
//	// ����� ũ��
//	unsigned long long elementSize = sizeof(arr[0]);
//	printf("ele size: %lld\n", elementSize);
//
//	// ��� ���� ���ϱ�
//	int result = (int)(size / elementSize);
//	printf("result: %d\n", result);
//
//	return result;
//}

int main()
{
	// �����Ϳ� �迭
	// �迭�� �̸�(������)�� ù��° ����� �޸� �ּҸ� ����Ű�� ������ ����̴�.
	// �� ��Ҵ� �޸𸮻󿡼� ���������� ����ȴ�. -> �ε����� ���ؼ� ȿ�������� ����
	// int arr[5] = {1, 2, 3, 4, 5};
	// int *ptr = arr; // arr�� &arr[0]�� �����ϴ�.
	// *arr : arr�迭�� ������ �ּҿ� ����� ��
	//
	int arr[5] = { 1, 2, 3, 4, 5 };
	printf("%d\n", *arr);

	// *(arr + 0) => arr[0]
	// *(arr + 1) => arr[1]

	// - �迭�� ��� ���� ���ϱ�
	// �迭�� ũ�� / �迭�� ù��° ����� ũ�� => ����� ����

	// �迭�� ũ��
	int arrSize = (int)sizeof(arr);
	// ����� ũ��
	int elementSize = (int)sizeof(*arr);
	printf("element: %d\n", elementSize);

	// ��� ���� ���ϱ�
	int arrCount = arrSize / elementSize;

	// ����ϱ�
	printf("arrCount = %d\n", arrCount);

	// �迭 ��ȸ�Ͽ� �� ����ϱ�
	for (size_t i = 0; i < arrCount; i++) {
		printf("%lld : %d\n", i, arr[i]);
	}
	
	return 0;
}
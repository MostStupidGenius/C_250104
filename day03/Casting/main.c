#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// ����ȯ
	// �ϳ��� ������ Ÿ�Կ��� �ٸ� ������ Ÿ������
	// �����ϴ� ���� �ǹ��Ѵ�.
	// 
	// �ڵ� ����ȯ(�Ϲ���, �Ͻ���)
	// ���� ������ Ÿ���� �ٸ� ������ ������ ���� ��
	// ���� �ڷ����ʿ��� �Ͼ��
	// ���� �ڷ��� ���� ū �ڷ��� ������ �� Ÿ���� �����Ѵ�.
	// ������ char < 
	// ������ short < int < long < long long < 
	// �Ǽ��� float < double
	int num = 10;
	double doubleOne = num; // �ڵ� ����ȯ
	// printf("%f", doubleOne);// 10.000000
	// ���� ������ �ƴ� �ڵ� ����ȯ�� �Ͼ�� ����
	num = 10;
	doubleOne = 3.3;
	double sum = num + doubleOne; // 13.3
	//printf("%f", sum); // 13.300000

	// ���� ����ȯ(�����)
	// �� ū �ڷ������� ���� �ڷ������� ����ȯ�� �� ��
	// ��������� � �ڷ������� �ٲ��� ������� ����
	// ���Ѵ�.
	// �̷��� ����ȯ�� ���̴� (�ڷ���)�� �Ұ�ȣ()��
	// ĳ���� ������(����ȯ ������)��� �θ���.
	// (�����ڷ���)ū�ڷ�����
	num = 10;
	doubleOne = 3.2;
	int total = num + (int)doubleOne;
	//printf("%d", total);

	doubleOne = 3.6;
	double doubleTwo = 5.8;
	// �� �Ǽ��� ���ؼ� ����total�� ���� ��
	total = (int)doubleOne + (int)doubleTwo;
	// ���1
	//printf("1 %d\n", total);

	// �� �Ǽ��� ���ؼ� ����total�� ���� ��
	total = (int)(doubleOne + doubleTwo);
	// ���2
	//printf("2 %d\n", total); // 9

	// ������(char)�� �ٸ� ���������� �ٲٴ� ���
	char a1 = 'a'; // 'a' 97�� ����
	char A1 = (char)(a1 - 32); // 'A' 65�� ����
	A1 = (char)(a1 + 1); // 'b' 98�� ����
	printf("%c", A1);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

// ��������
// ���α׷��� ���۵� �� ������ ������ �Ҵ�Ǿ�
// ���α׷��� ������ ����� ������ �޸𸮿� ��� ����


// ���� ���� �ʱ�ȭ
int globalVar = 0;


// ���������� �����Ͽ� �� ���� ����
void count1() {
	globalVar++;
}
void count2() {
	globalVar++;
	printf("%d\n", globalVar);
}

// ���������� ���� �̸����� �������� �ʱ�ȭ
void count3() {
	int globalVar = 99;
	printf("%d\n", globalVar);
}

int main() 
{
	// �������� ���
	printf("%d\n", globalVar); // 0

	count1(); // globalVar = 1;
	count2(); // 2
	count3(); // �������� globalVar�� ȣ��Ǿ� 99���
	count2(); // 3

	return 0;
}
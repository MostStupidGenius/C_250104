#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

enum Days
{
	SUN, // 0
	MON, // 1
	TUE, // 2
	// ���� ���� ������ ���� �ִ�.
	WED=4, // 4
	// �̶� ������ ���� 1�� ���� ������ ���� ����� �����ȴ�.
	THU, // 5
	FRI, // 6
	SAT
};

int main() 
{
	// ������(enumeration)
	// ������ ������� �ϳ��� �̸����� ��� ����
	// �⺻������ ���� �������� �ʾҴٸ� ù��° ����� 0���� ����
	// ������ ����� 1�� ���ϴ� ������� ���ο� ����� ���� �����ȴ�.
	enum Days today = MON;

	printf("%d\n", today);

	const int SUNDAY = 0, MONDAY = 1;
	int option[5] = { 31, 1, 2, 3, 4 };
	printf("%d\n", option[SUNDAY]);

	return 0;
}
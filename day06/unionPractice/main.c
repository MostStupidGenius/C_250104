#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
// ����ü ���� ���
union Data {
	int i;
	double d;
	char str[50];
};
int main() 
{
	// ����ü(union)
	// ���� ��� �������� ���� �޸� ������ ��ġ�صΰ�
	// �ʿ信 ���� ���� ���� Ÿ������ ������ �� �ִ� ����� ���� �ڷ����̴�.
	// ����ü ����
	union Data data;
	data.i = 30;
	printf("int: %d\n", data.i);
	data.d = 3.14;
	printf("double: %lf\n", data.d);
	printf("int: %d\n", data.i);

	// ���ڿ��� strcpy�� �̿��ؼ� ���� �־�� �Ѵ�.
	// strcpy(data.str, "���ڿ�");




	return 0;
}
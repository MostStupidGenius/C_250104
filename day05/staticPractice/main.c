#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

static int stGlobalVar;

void printSomething() {
	// static �������� ����
	static int localStVar;

	// �������� ��� �� 1����
	printf("global %d\n", stGlobalVar++);

	// �������� ��� �� 1����
	printf("local %d\n", localStVar++);
}


int main() 
{
	// static�̶�
	// ������ �Լ��� ����(scope)�� ����(lifetime; �����ֱ�)��
	// �����ϴ� �� ���Ǵ� �����
	// �������� + static
	// static�� ���� ���� ���� ������ �Լ� ����� �޸� ����������
	// static�� ���� ������ ���α׷��� ����� ������
	// �޸𸮿� �����ȴ�.
	// static ������ Ư¡
	// - �ʱ�ȭ �ڵ�� �ش� �κ��� ������ ����������
	//	�����δ� ���� 1ȸ�� ����ȴ�.
	
	// �������� + static
	// �ش� ���������� ����� �ҽ����� �������� ������ �����ϴ�.
	

	// static ����
	// ����� ���� �ʱ�ȭ���� �ʴ��� �ڵ����� 0���� �ʱ�ȭ�ȴ�.
	
	stGlobalVar = 3;

	printSomething();
	printSomething();
	printSomething();
	printSomething();
	printSomething();


	return 0;
}
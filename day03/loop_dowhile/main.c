#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// do~while��
	// do �ڿ� �ݺ��� �ڵ� ����� ������
	// �ڵ� ��� �ڿ� while(���ǽ�)�� ��ġ�ȴ�.
	// do~while���� ���ǰ� �����ϰ� ���� 1ȸ��
	// ������ ����ȴ�.
	// do{�ڵ���}while(���ǽ�);
	// ����: ���ϴ� ���� �Է��� ������ ������ �Է¹޴´�.
	int num;
	int condition;
	do {
		printf("���� 1���� 4 ������ �� �Է�: ");
		scanf_s("%d", &num);
		// ���ǽ��� Ȯ���ϱ� ���� ��� �κ�
		//condition = num < 1 || num > 4;
		condition = num >= 1 && num <= 4;
		if (!condition) { // �߸� �Է��� ���
			printf("�߸��� ���� �Է��߽��ϴ�. �ٽ� �Է����ּ���.\n");
		}
		// ���ǽ��� �˻��ϴ� �κ�
	} while (!condition);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// switch��
	// �־��� ������ ���� Ȯ���Ͽ�
	// ��Ȯ�� ��ġ�ϴ� case�� �ڵ� ����� �����ϰ�
	// �Ʒ��� �귯���� �Ʒ��� �ڵ带 �̾ �����Ѵ�.
	// ������ �Ϲ������� "�귯����"�� �������� ���� ������ �ƴϱ� ������
	// break;��� �帧 Ż�� ����� �̿��Ͽ� 
	// "�귯����"�� ���´�.
	int num = 0;
	scanf("%d", &num);

	// switch ������ num ������ ��� ���� �˻��Ѵ�.
	// �̶� switch() �Ұ�ȣ() �ȿ� ���� ����
	// �ݵ�� �������� �Ѵ�.
	switch (num) {
		// num�� ���� case 3:�� ���
	case 3:
		printf("num�� ���� 3�Դϴ�.\n");
		break; // switch���� Ż���Ѵ�.
	case 4:
		printf("num�� ���� 4�Դϴ�.\n");
		break; // switch���� Ż���Ѵ�.
	default:
		printf("���� � ��쵵 �ƴմϴ�.\n");
	}

	int score = 0;
	// �Է�
	switch (score) {
	case 1:
		printf("��� ��� ���� ��¼��");
	case 2:
		printf("�ǹ� ��� ���� ��¼��");
	case 3:
		printf("����� ��� ���� ��¼��");
		break;
	default:
		printf("���� ȸ�� ���� ��¼��");
	}
	return 0;
}
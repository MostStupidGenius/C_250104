#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

enum MenuOptions {
	SAVE = 1, // 1
	LOAD, // 2
	EDIT, // 3
	EXIT // 4
};

int main() 
{
	// ������ �ǽ�
	// ����ڷκ��� ���ڸ� �ϳ� �Է¹޾Ƽ�
	// 1�� SAVE
	// 2�� LOAD
	// 3�� EDIT
	// 4�� EXIT
	// �� ������ ���� enum MenuOptions�� �����
	// enum MenuOptions choice��� �̸����� �����ϰ�
	enum MenuOptions choice = 0;

	// �� ��������: ��ü�� �ݺ������� ���Ѵ�.
	//		choice�� 4�� EXIT�� �ƴϸ� ���� �ݺ�
	while(choice != 4){
		printf("1. save\n2. load\n3. edit\n4. exit\n��ȣ ����: ");
		int _ = scanf("%d", &choice); // �Է¹ޱ�
		// switch������ �Է¹��� ���� ���� ���� �� ��� 
		switch (choice) {
		// case SAVE:... ������ �� ��ɺ� �̸� ���
		case SAVE:
			printf("SAVE");
		// �� ���̽����� break; ���� �� ��.
			break;
		case LOAD:
			printf("LOAD");
			break;
		case EDIT:
			printf("EDIT");
			break;
		case EXIT:
			printf("EXIT");
			break;
		// 1~4���� �ƴ� ���� ������
		// �ٽ� �Է����ּ��並 ���
		default:
			printf("�ٽ� �Է����ּ���.");
		}
		// �ٹٲ� �ϰ�ó��
		printf("\n\n");
	
	}

	return 0;
}
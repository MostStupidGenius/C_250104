#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h> // ���ڿ� ������� �߰�

int main()
{
	// ���ڿ��� charŸ���� �迭�� ǥ���Ǹ�,
	// ���ڵ��� ���ӵ� ������ �ǹ��Ѵ�.
	// �̶� ������ ���ڴ� '\0'(�� ����)�� �־�
	// �ݵ�� ���ڿ��� ���Ḧ ��Ÿ���� �Ѵ�.
	// ���ڿ��� ����� �ʱ�ȭ
	char str1[] = "Hello"; // �ڵ� ũ�� �Ҵ�(�� ���� ����)
	char str2[10] = {'H', 'i', '\0'}; // ���� �ʱ�ȭ
	char str3[20] = "Programming"; // ũ�� ���� �ʱ�ȭ
	printf("\n%s %s %s\n", str1, str2, str3);

	// ���ڿ� ó�� �Լ�
	// ���� ���ڿ� ���� ��ȯ(�� ���� ����)
	// strlen()
	char str[] = "Hello";
	int length = strlen(str); // 5�� int���� length�� ����.
	printf("%d\n", length);

	// �� ���ڿ��� �ٸ� ���ڿ��� �����ϰ� ����
	// strcpy()
	// ���ο� ���ڿ� ���� �� �ʱ�ȭ
	char newStr[] = "Source";
	char dest[20]; // ���縦 ���� ���ڿ� ���� ����
	strcpy(dest, newStr); // dest ������ "Source"��� ���ڿ� ���� �����.
	printf("new: %s\ndest: %s\n", newStr, dest);
	newStr[0] = 's'; // ���� ���ڿ� ������ ���� ����
	printf("new: %s\ndest: %s\n", newStr, dest);
	// �� ������ ���� ���� �޶�����.

	// �� ���ڿ��� �����Ͽ� �ϳ��� ���ڿ� ����
	// strcat() - concatenate �����ϴ�
	// strcat �Լ��� ù��° ������ �ι�° ���� ���� �̾� �پ�
	// ù��° ������ �� ���ڿ��� ���� ���� ����.
	char catStr1[20] = "Hello"; // �ִ� ���̸� �� ũ�� ��´�.
	char catStr2[] = " World";
	strcat(catStr1, catStr2); // catStr1�� "Hello World"�� ��
	printf("%s\n", catStr1);// ����غ���

	// �� ���ڿ� ���ϱ�(���ϼ� Ȯ��)
	// strcmp() - compare(���ϴ�)
	char cmpStr1[] = "apple";
	char cmpStr2[] = "canana";
	int result = strcmp(cmpStr1, cmpStr2);
	// ���� result�� -1�̶��
	// cmpStr1�� cmpStr2���� ���������� �ռ��� �ǹ��Ѵ�.
	// 1�̸� �ݴ�
	// 0�̸� ����
	// ���޵� ������ ������ �� ū���� �ռ��ٰ� ����.
	// >	==	<
	// -1	0	1
	printf("strcmp(cmpStr1, cmpStr2):\n\t%d\n", result);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
#include <string.h>

struct Person {
	char name[50];
	int age;
	float height;
};

// ����ü�� �����ϴ� �� �����ִ� �Լ�
struct Person createPerson(char *name, int age, float height) {
	struct Person p;
	strcpy(p.name, name);
	p.age = age;
	p.height = height;
	return p;
}



int main() 
{
	// ����ü
	// ���� ���� �ִ� �����͸� �ϳ��� ���� �����ϵ��� �ϱ� ����
	// ���� ����

	// ����ü�� ���� ���
	// "ȫ�浿"�̶�� �Ѹ��� ����� �����Ϸ���
	// ���� ������ ��� �����Ͽ� �����ؾ� �Ѵ�.
	// �̶� �� �������� �̸��� ��Ģ���ְ� ���� ���� ������
	// ���� ��ü�� ���� �Ǿ� �ֱ� ������
	// �ý��������� ���ü��� ������ ���� ����.
	char hongName[50] = "ȫ�浿";
	int hongAge = 30;
	float h0ngHeight = 180.3;
	
	// ����ü�� ����ϴ� ���
	struct Person hong;
	//hong.name = "ȫ�浿";// ���ڿ��� ���� �Ҵ��ϴ� ����� �� �� ����.
	// strcpy()�Լ��� ���� �����Ͽ� �����ؾ� �Ѵ�.
	strcpy(hong.name, "ȫ�浿");
	hong.age = 30;
	hong.height = 180.3;

	//struct Person people[100];
	struct Person go = createPerson("��浿", 33, 175.3);
	printf("�̸�: %s\n����: %d\nŰ: %f\n", go.name, go.age, go.height);

	// positional ������� ��� ������ ���� �����Ͽ� ����ü�� ����� ���
	// ����ü�� ������ �� ������� ������ ������� ���� �����ؾ� �Ѵ�.
	struct Person dangmu = {"ȫ�繫", 24, 172.3};
	printf("�̸�: %s\n����: %d\nŰ: %f\n", dangmu.name, dangmu.age, dangmu.height);
	
	// ��� ������ ��Ȯ�� ���� ����ִ� ���
	// ������ �߿����� �ʴ�.
	struct Person sunsin = {
		.age = 34,
		.name = "�̼���",
		.height = 182.3
	};
	printf("�̸�: %s\n����: %d\nŰ: %f\n", sunsin.name, sunsin.age, sunsin.height);

	struct Person* hongPtr = &hong;
	hongPtr->age = 20;
	printf("ȫ�浿 ����: %d\n", hong.age); // 20

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// �迭�� �̿��� ���� ������ �����صΰ�
	// �������� ����� ������.
	// ����̶� �� �հ� / ����

	// ������
	int scores[] = {85, 90, 75, 95, 80, 100};
	// ���� �հ�
	int sum = 0;

	// �迭�� ���� ���
	// sizeof()�Լ��� ���޵� ���� ������ ũ�⸦ ��ȯ�Ѵ�.
	// �̶� �迭�� �����ϸ� �迭�� ��ü ũ�Ⱑ ������(����� ũ�� * ����)
	// �� ��ü ũ�⿡�� �迭�� 0��° ����� ũ�⸦ ������ ������ ���´�.
	 
	//printf("%lld\n", sizeof(scores));
	int length = sizeof(scores) / sizeof(scores[0]);

	// ����� ���� �Ǽ� ���� ����;
	double average;

	for (int i = 0; i < length; i++) {
		// i���� �̿��� �迭�� ��ҿ� �����Ͽ� ������ �����´�.
		// ������ sum�� �߰��Ѵ�.
		//sum = sum + scores[i];
		sum += scores[i];
	}
	average = sum / length;
	printf("%f\n", average);
	return 0;
}
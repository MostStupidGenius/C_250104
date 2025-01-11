#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// if문 실습하기
	// score라는 int타입의 변수 선언
	int score;
	// 입력을 안내하는 문구 추가
	printf("0부터 100사이의 점수 입력: ");
	// scanf를 통해서 %d로 정수값을 입력받아
	// &score에 입력받은 값을 담고
	scanf("%d", &score);
	// 도전과제1 : 출력할 알파벳을 scoreChar라는 char변수를 선언하여
	char scoreChar = 'F';

	// score에 담긴 값을 if문을 통해 점수에 따른 알파벳 출력
	// 90 이상 100 이하 A
	if (score >= 90/* && score <= 100*/) {
		printf("당신의 학점은 A");
	}
	// 80 이상 90 미만 B
	else if (score >= 80) { // && score < 90
		printf("당신의 학점은 B");
	}
	// 70 이상 80 미만 C
	else if (score >= 70) { // && score < 80
		printf("당신의 학점은 C");
	}
	// 70 미만 F 도전과제2: else 안 쓰기
	else {
		printf("당신의 학점은 F");
	}
	printf("\n\n");

	// 이때 입력받는 값은 0부터 100 사이로 정상적으로
	// 입력받는다고 가정한다.

	// if문을 이용해서 scoreChar변수를 바꾼다.
	if (score >= 90) {
		scoreChar = 'A';
	}
	else if (score >= 80) {
		scoreChar = 'B';
	}
	else if (score >= 70) {
		scoreChar = 'C';
	}
	// 위의 조건식이 모두 만족하지 않을 경우
	// 초기값인 'F'가 scoreChar에 담긴 상태 그대로 있을 것이다.
	// 따라서 else로 'F'문자를 넣을 필요가 없어진다.

	// if문을 모두 빠져나간 뒤에 scoreChar로 알파벳 출력
	// 일괄처리
	printf("당신의 점수는 %c입니다.\n\n", scoreChar);

	scoreChar = 'A';
	if (score < 90) {
		scoreChar = (char)(scoreChar + 1);
	}
	if (score < 80) {
		scoreChar = (char)(scoreChar + 1);
	}
	if (score < 70) {
		scoreChar = (char)(scoreChar + 3);
	}
	printf("당신의 학점은 %c입니다.\n", scoreChar);

	printf("삼항연산 당신의 학점은 %c입니다.", (score >= 90 ? 'A' : (score >= 80 ? 'B' : (score >= 70 ? 'C' : 'F'))));

	return 0;
}
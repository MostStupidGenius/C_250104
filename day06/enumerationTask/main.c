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
	// 열거형 실습
	// 사용자로부터 숫자를 하나 입력받아서
	// 1번 SAVE
	// 2번 LOAD
	// 3번 EDIT
	// 4번 EXIT
	// 위 내용을 토대로 enum MenuOptions을 만든다
	// enum MenuOptions choice라는 이름으로 선언하고
	enum MenuOptions choice = 0;

	// ★ 도전과제: 전체를 반복문으로 감싼다.
	//		choice가 4번 EXIT가 아니면 무한 반복
	while(choice != 4){
		printf("1. save\n2. load\n3. edit\n4. exit\n번호 선택: ");
		int _ = scanf("%d", &choice); // 입력받기
		// switch문으로 입력받은 숫자 값에 따라 각 기능 
		switch (choice) {
		// case SAVE:... 등으로 각 기능별 이름 출력
		case SAVE:
			printf("SAVE");
		// 각 케이스마다 break; 잊지 말 것.
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
		// 1~4번이 아닌 값이 들어오면
		// 다시 입력해주세요를 출력
		default:
			printf("다시 입력해주세요.");
		}
		// 줄바꿈 일괄처리
		printf("\n\n");
	
	}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
// fileIO.c
// 파일 읽기/쓰기 모드
// 'w' write: 파일이 없다면 이를 생성하고 내용을 적는다.
// ★ 기존 내용이 있다면 없애고 처음부터 새로 쓴다.
// 'a' append:파일이 없다면 이를 생성하고 내용을 적는다.
// ★ 기존 내용이 있다면 그 뒤에 이어서 내용을 적는다.
// 'r' read: 파일이 없으면 오류
// ★ 읽어올 때 buffer를 통해서 값을 받아와야 한다.
// 'b' binary: 위의 다른 모드와 조합하여 이진방식으로 파일을 읽고 쓴다.
// 미디어파일(음성, 영상, 이미지)을 읽거나 쓸 때 사용된다.

int main() 
{ 
	// 파일 쓰기 예제
	// 쓰기w방식으로 test.txt 파일을 다루기 위한 포인터 생성
	// 'w'방식은 파일이 없으면 생성, 있으면 덮어쓰기를 시행한다.
	FILE* fp = fopen("test.txt", "w");

	// 가져온 파일이 없기 때문에 열 수 없다.
	// -> 실패
	if (fp == NULL) {
		printf("파일 열기 실패\n");
		// fp가 비어있기 때문에 여기서는 fclose를 할 필요가 없다.
		return 1; // 프로그램 종료
	}

	// 파일에 내용 입력
	fprintf(fp, "Hello, World\n");
	printf("내용 입력1\n");
	// 파일을 정상적으로 열었다면 fclose(fp)로
	// 파일을 닫아주어야 한다.
	// 파일 쓰기 -> 닫기
	fclose(fp); 

	// 이어쓰기
	// 'a' 모드는 기존의 내용 뒤에 이어서 내용을 쓰는 방식이다.
	// 파일이 없다면 'w'와 마찬가지로 파일 생성하고
	// 내용을 적는다.
	FILE* fpa = fopen("test.txt", "a");
	fprintf(fpa, "added text\n");
	printf("내용 입력2\n");
	// 파일 포인터 닫기
	fclose(fpa);


	FILE* fpr = fopen("test.txt", "r");
	// 가져온 파일의 내용을 한 줄 씩 버퍼를 통해 가져오기 위해
	// 문자열 버퍼를 선언
	char buffer[100];

	// 버퍼란
	// 내용 전체를 한꺼번에 가져오는 방식이 아니라
	// buffer라는 중간 전달자를 통해 한번 크게 담은 다음
	// 이를 전달하는 방식을 의미한다. -> 버퍼링

	// 파일의 내용을 buffer에 임시로 담아 그 값이 NULL(비어있음)이 아니라면
	// buffer에 담은 내용을 출력
	printf("내용 읽기 시작\n");
	while (fgets(buffer, sizeof(buffer), fpr) != NULL) {
		printf("%s", buffer);
	}
	printf("내용 읽기 끝\n");
	// 파일 포인터 닫기
	fclose(fpr);

	return 0;
}
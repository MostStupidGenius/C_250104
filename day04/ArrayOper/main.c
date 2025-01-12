#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 2차원 배열(행렬) 연산
	// 두 개의 2x3 행렬 선언 및 초기화
	int A[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int B[2][3] = { {7, 8, 9}, {10, 11, 12} };
	// 결과를 저장할 배열 선언
	int result[2][3];

	// 행렬 덧셈 수행
	// 외부 배열의 길이만큼 반복
	for (int i = 0; i < 2; i++) {
		// 내부 배열의 길이만큼 반복
		for (int j = 0; j < 3; j++) {
			result[i][j] = A[i][j] + B[i][j];
		}
	}

	// 결과 행렬 출력
	for (int i = 0; i < 2; i++) {
		// 내부 배열의 길이만큼 반복
		for (int j = 0; j < 3; j++) {
			// i행 j열의 원소 출력
			printf("%d ", result[i][j]);
		}
		printf("\n"); // 행이 끝날 때마다 줄바꿈
	}


	return 0;
}
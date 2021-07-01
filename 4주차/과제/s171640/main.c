#include "Header.h"

int main(){
	int i, n, m; 		// n : 테스트 케이스 갯수, m : 책 페이지
	int **arr; 		// 책의 모든 페이지를 구성하는 각 숫자들(0~9)의 개수를 저장할 배열

	scanf("%d", &n); 	// 테스트 케이스 갯수 저장

	// arr[n][10]의 2차원 배열 생성
	arr = (int**)malloc(sizeof(int*)*n);
	for(i=0; i<n; i++){
		arr[i] = (int*) malloc (sizeof(int)*10);
	}

	// 책 페이지 입력 받은 후 계산
	for(i=0; i<n; i++){ 		// 테스트 케이스 개수만큼 반복
		scanf("%d", &m); 	// 책페이지 저장
		func(arr[i], m); 	// func 함수로 배열 arr[i], 변수 m 넘겨서 계산
	}

	// 출력 후 2차원 배열 동적 할당 해제
	for(i=0; i<n; i++){
		Output(arr[i]); 	// 계산 결과 출력
		free(arr[i]); 		// 할당 해제
	}
	free(arr); 			// 할당 해제

	// 프로그램 종료
	return 0;
}

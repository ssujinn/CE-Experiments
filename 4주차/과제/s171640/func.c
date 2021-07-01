#include "Header.h"

void func(int *arr, int m){
	int i, num, r;

	for (i = 0; i < 10; i++){
		arr[i] = 0; 		// arr 모든 원소 0으로 초기화
	}

	for (i = 0; i < m; i++){ 	// 1페이지부터 m페이지까지 차례로 검사
		num = i + 1;		// num : 현재 페이지
		while(num > 0){
			r = num % 10;	// r : num의 마지막 자리 숫자
			arr[r]++;	// arr에 저장
			num = num / 10; 
		}
	}
}

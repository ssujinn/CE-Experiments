#include "Header.h"

void Output(int *arr){
	int i;

	// 배열에 저장된 숫자 차례로 출력
	for (i=0;i<10;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

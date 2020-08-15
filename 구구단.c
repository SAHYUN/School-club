//구구단 출력 코드
 
#include <stdio.h>

int main() {
	int a = 1;
	int b = 1;
	for(a = 1; a <= 9; a++){
		for(b = 1; b <= 9; b++){
			printf("%d * %d = %d \n", a, b, a * b);
		}
		printf("\n");
		}
	return 0;
}


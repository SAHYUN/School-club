//13을 제외하고 25까지 출력하는 코드. 
#include <stdio.h>

int main() {
	int a = 0;
	for(a = 1; a <= 25; a++){
		if(a != 13){
			printf("%d ", a);
				if(a % 5 == 0){
					printf("\n");
				}
		}
	}
	return 0;
}


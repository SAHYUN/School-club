//13�� �����ϰ� 25���� ����ϴ� �ڵ�. 
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


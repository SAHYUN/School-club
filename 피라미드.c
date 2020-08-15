//0과 1로 이루어진 피라미드를 그리는 코드 
#include <stdio.h>

int main() {
	int a=1,b=1,c=1;
	for(a = 1; a <= 10; a++){
		for(b = 1; b <= 10; b++){
			if(b <= c){
				printf("1 ");
			}
			else{
				printf("0 ");
			}
		}
		printf("\n");
		c++;
	}
	
}

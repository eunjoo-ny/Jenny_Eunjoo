#include<stdio.h>

int main(void) {
	int i, j;
	for (i = 1;i <= 100;i++) {
		for (j = 2;j <= i - 1;j++) {
			if (i % j == 0) {
				break;
			}
			if(i==j){
				printf("100������ �Ҽ�:%d", i);
				
			}
			printf("%d\n");
			return 0;
		}
	}
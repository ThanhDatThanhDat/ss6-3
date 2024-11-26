#include<stdio.h>

int main(){
	
	int a = 123456, b;
	do{
		printf("Nhap mat khau :");
	scanf("%d", &b);
	} 	while( a != b);
			printf("Sai mat khau.\n");
			
    printf("Mat khau dung.\n");

	return 0; 
} 

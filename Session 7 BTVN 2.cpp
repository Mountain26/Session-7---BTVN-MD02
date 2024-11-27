#include <stdio.h>

int main(){
	
	int num[5];
	int i; 
	 
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
		printf("Gia tri ban nhap vao mang %d :", i+1);
		scanf("%d", &num[i]);
	}
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
	printf("Mang [%d]:%d \n", i, num[i] ); 
} 
}

#include <stdio.h>

int main(){
	int i, n; 
	
	printf("Moi ban nhap vao so phan tu trong mang ban muon: ");
	scanf("%d", &n);
	
	int num[n];
	
	for(i=0;i<sizeof(num)/ sizeof(int);i++){
	printf("Gia tri ban nhap vao mang %d:", i+1);
	scanf("%d", &num[i]);
}
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
	printf("Mang [%d]:%d \n", i, num[i] );
}
}

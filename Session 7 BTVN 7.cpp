#include <stdio.h>

int main(){
	int i, n; 
	
	printf("Moi ban nhap vao so phan tu trong mang ban muon:");
	scanf("%d", &n);
	
	int num[n];
	
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
	printf("Moi ban nhap phan tu le vao mang:");
	scanf("%d", &num[i]);
	
	while(num[i]%2==0){
	printf("Ban can nhap phan tu le vao mang:");
	scanf("%d", &num[i]);
	}
}
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
	printf("Mang [%d]:%d\n", i, num[i] );
}
}

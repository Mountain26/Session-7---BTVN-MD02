#include <stdio.h>

int main(){
	
	int num[5]={1,15,76,89,23};
	int i; 
	 
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
		printf("Gia tri co trong mang la mang:%d\n", num[i]);
	}
	printf("Do dai cua mang la: %d", sizeof(num)/ sizeof(int));
}

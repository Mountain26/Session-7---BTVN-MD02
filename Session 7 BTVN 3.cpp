#include <stdio.h>

int main(){
	
	int num[5]={1,15,76,89,23};
	int i;
	int count=0; 
	 
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
		if(num[i]%2==0){
			printf("Gia tri co trong mang la mang:%d\n", num[i]);
			count++; 
		}
	}
	if(count==0){
		printf("Mang khong chua so chan");
	}
}

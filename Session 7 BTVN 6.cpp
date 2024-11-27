#include <stdio.h>

int main(){
	
	int num[5]={1,15,76,89,23};
	int i;
	 
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
		if(num[i]%2==0){
			printf("Gia tri chan co trong mang tang them 2 don vi la: %d\n", num[i] + 2);
		}
		if(num[i]%2!=0){
			printf("Gia tri le co trong mang tang them 3 don vi la: %d\n", num[i] + 3);
		}
	}
}

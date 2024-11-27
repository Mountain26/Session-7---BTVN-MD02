#include <stdio.h>

int main(){
	
	int num[5]={1,15,76,89,23};
	int i; 
	int max, min;
	
	max = num[0];
	min = num[0];
	
	for(i=0;i<sizeof(num)/sizeof(int); i++){
		if (max < num[i]){
			max=num[i];
		}
		if (min > num[i]){
			min=num[i];
		}
	}
	
	printf("Phan tu lon nhat trong mang la: %d\n", max);
	printf("Phan tu nho nhat trong mang la: %d\n", min);
	
	return 0;
}

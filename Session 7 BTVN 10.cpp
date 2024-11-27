

#include <stdio.h>

int main(){
	int i, n, bienDem = 0;
	
	printf("Moi ban nhap vao so phan tu trong mang ban muon:");
	scanf("%d", &n);
	
	int num[n];
	
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
	printf("Gia tri ban nhap vao mang %d :", i+1);
	scanf("%d", &num[i]);
}
	for(i=0;i<sizeof(num)/ sizeof(int); i++){
	printf("Mang [%d]:%d \n", i, num[i] );
}
    
	for (int k = 0; k<n; k++) {
		bienDem = 0;
		for(i=1; i<=num[k]; i++){
            if (num[k]%i==0) {
                bienDem++;
            }
        }
            if(bienDem==2){
        printf("%d la so nguyen to.\n", num[k]);
			}
}
}

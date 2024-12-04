#include<stdio.h>
#include<stdlib.h>
int C(int n,int k){
	if(k==0 || n == k ){
		return 1;
	}
	return C(n-1,k-1) + C(n-1,k);
}

int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	int k;
	printf("Nhap so k: ");
	scanf("%d",&k);
	printf("%d",C(n,k));
}


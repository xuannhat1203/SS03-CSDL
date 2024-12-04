#include<stdio.h>
int dequy(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * dequy(n - 1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d", dequy(n));
}

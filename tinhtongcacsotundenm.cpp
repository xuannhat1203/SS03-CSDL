#include<stdio.h>
int tinhtong(int n, int m) {
    if (n > m) {
        return 0; 
    }
    return n + tinhtong(n + 1, m); 
}
int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	printf("%d",tinhtong(n,m));
}

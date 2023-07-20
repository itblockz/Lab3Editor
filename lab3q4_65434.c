#include <stdio.h>
int main() {
	int sum = 0;
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int cnt = 1;
	while(n>0) {
		sum += n;
		cnt++;
		printf("enter a number : ");
		scanf("%d",&n);
	}
	printf("summation = %d\n", sum);
	printf("average = %.2f\n", (float)sum/cnt);
	return 0;
}

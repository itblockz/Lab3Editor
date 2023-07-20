#include <stdio.h>
int main() {
	int sum = 0;
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	int cnt = 0;
	while(n>0) {
		cnt++;
		sum += n;
		printf("enter a number : ");
		scanf("%d",&n);
	}
	float avg = (cnt > 0) ? (float)sum/cnt : 0;
	printf("summation = %d\n", sum);
	printf("average = %.2f\n", avg);
	return 0;
}

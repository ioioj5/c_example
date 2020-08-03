#include<stdio.h>
#define N 9
// ц╟ещеепР
//  
int main() {
	int a[N] = {2, 6, 1, 0, 8, 5, 7, 4, 3};
	
	for(int i = 0; i < N; i++) {
		printf("%2d: ", i+1);
		for (int j = 0; j < N - i - 1; j++) {
			int temp;
			if (a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		for (int k = 0; k < N; k++) {
			printf("%d ", a[k]);
		}
		printf("\n");
	}
	printf("==========================\n");
	for(int i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}

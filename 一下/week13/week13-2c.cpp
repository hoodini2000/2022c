#include <stdio.h>
int main()
{
	int a[10],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		a[i]*=a[i];
	}
	for(int i=0;i<n;i++){
		printf("%d,",a[i]);
	}
	printf("\n");
}

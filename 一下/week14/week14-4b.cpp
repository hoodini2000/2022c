#include <stdio.h>
int main()
{
	int K;
	scanf("%d",&K);
	int sum=0;
	for(int i=1;i<1000;i++){
		sum+=i;
		if(sum>K){
			printf("%d",i);
			break;
		}
	}
}

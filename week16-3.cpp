#include <stdio.h>
int a[2000],n;
int main()
{
	printf("請按任意鍵繼續 . . . \n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=-9999999,sell,buy;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]-a[i]>max){
				max=a[j]-a[i];
				sell=a[j];
				buy=a[i];
			}
		}
	}
	printf("最大利潤=%d-%d=%d\n",sell,buy,max);
}

# 2022c
資傳一甲程式設計的倉庫
# week01
# week02
# week03
# week04
# week05
# week06
## step1 考試九九乘法表 
```cpp
#include <stdio.h>
int main()
{
    for( int i=1 ; i<=9 ; i++ ){
        for(int j=1; j<=9; j++){
            printf("%d*%d%=%2d " ,j,i, i*j);
        }
        printf("\n");
    }
}
```
## step2 鷹架星
```cpp
#include <stdio.h>
int main()
{
	for(int i=1;i<=5;i++){
		int star= i*2-1;
		printf("鷹架:%d %d星\n",i,star);
		}
}
```
## step2 鷹架星空格
```cpp
#include <stdio.h>
int main()
{
	for(int i=1;i<=5;i++){
		int space = 5-i;
        int star = i*2-1;
		for(int k=0;k<space; k++){
            printf(" ");
		}
		for(int k=0;k<star; k++){
            printf("*");
		}
        printf("鷹架:%d樓 %d空格 %d星\n",i,space,star);
    }
}
```
## step3 暴力破解法
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,ans;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d",ans);
}
```
## step4 暴力破解法有點慢
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數: ");
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
```
## step5 成立
```cpp
#include <stdio.h>
int main()
{
    int a=10;
    if(-999) printf("-999成立\n");
    if(-3) printf("-3成立\n");
    if(-2) printf("-2成立\n");
    if(-1) printf("-1成立\n");
    if(0) printf("0不成立所以什麼都沒印\n");
    if(1) printf("1成立\n");
    if(2) printf("2成立\n");
    if(3) printf("3成立\n");
    if(4) printf("4成立\n");
    if(999) printf("999成立\n");
    if("a==0") printf("不管什麼東西,幾乎都成立\n");
}

#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&b>=c)printf("%d",a*100+b*10+c+1);
	else if(a>=c&&c>=b)printf("%d",a*100+c*10+b+1);
	else if(b>=a&&a>=c)printf("%d",b*100+a*10+c+1);
	else if(b>=a&&c>=a)printf("%d",b*100+c*10+a+1);
	else if(c>=a&&a>=b)printf("%d",c*100+a*10+b+1);
	else if(c>=b&&b>=a)printf("%d",c*100+b*10+a+1);
}

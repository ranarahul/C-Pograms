#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the values = ");
	scanf("%d %d %d",&a,&b,&c);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	a = a + b + c;
	b = a - ( b + c );
	c = a - ( b + c );
	a = a - ( b + c );
	printf("after swapping the value \n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	getch();
	return 0;
}

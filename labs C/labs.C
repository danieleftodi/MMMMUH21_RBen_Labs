#include<stdio.h>

int main()
{
				int x, y, big;
				char c;
				printf("enter x:");
				scanf("%d", &x);
				printf("enter y:");
				scanf("%d", &y);
			
				big = x > y ? x : y;
				c = x > y ? 'x' : 'y';
			
				printf("% c : % d\n", c, big);
			
				getchar();
}
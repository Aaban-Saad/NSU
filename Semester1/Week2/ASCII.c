#include <stdio.h>
int main()
{
	while(1)
	{
		char a;
		printf("\n	Enter a character: ");
		scanf(" %c",&a);
		printf("	%c = %d",a,a);
		if(a >= 48 && a<=57)
		{
			printf("\n	Number");
		}
		else if(a >= 65 && a <=90)
		{
			printf("\n	Upper case");
		}
		else if(a >= 97 && a <=122)
		{
			printf("\n	Lower case");
		}
		else
		{
			printf("\n	Other");
		}
		printf("\n	------------------------");
	}
return 0;
}

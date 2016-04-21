#include <stdio.h>
#include <cstdlib>

int main(int argc, char **argv)
{
	if(argc!=3)
	{
		printf("Incorrect arguments number. Exiting...\n");
		exit(1);
	}
	int number=atoi(argv[1]);
	if(number<1)
	{
		printf("Incorrect number. Exiting...\n");
		exit(2);
	}
	char character=argv[2][0];
	if(character=='f')
	{
		if(number==1) printf("0");
		else if (number==2) printf("1");
		else
		{
			int a=0, b=1, c;
			for(int counter=2; counter<number; counter++)
			{
				c=a+b;
				a=b;
				b=c;
			}
			printf("%d", c);
		}
	}
	else if(character=='e')
	{
		printf("1");
	} else
	{
		printf("Incorrect letter. Exiting...");
		exit(3);
	}
	
	
	
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,t,c,row=0,table;
    int position;
    char player[2];
    for(i=10;i>0;i--)
	{
		t=i-1;
		if((row%2) == 0)
		{
			c=0;
			for(j=10;j>=1;j--)
			{
				table=(i*j)+(t*c++);

				if(position==table)
					printf("%s\t",player);
				else
				printf("%d\t",table);

            }
			row++;
		}
		else
		{
			c=9; 
			for(j=1;j<=10;j++)
			{
				table=(i*j)+(t*c--);

				if(position==table)
					printf("%s\t",player);
				else
					printf("%d\t",table);
			}


			row++;
		}
		printf("\n\n");
	}
}

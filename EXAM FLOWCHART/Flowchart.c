#include<stdio.h>

int main(void)
{
	double num, sum;
	int c, k;
	
	sum= 0.00;
	c= 1;
	k=0;

	printf("                             WELCOME                   ");
	printf("\n\nPlease  write an integer number :  ");
	scanf("%lf", &num);

	do {
			if ((c % 2) == 0) {
			
			sum = sum +  (1/ (double) c);
			k = k + 1;
			c = c + 1;
		}
		else {
			c = c + 1;
		}
	} while (c <= num);

		

			printf("\n\nResult is equal to  %.2lf \n\n", num /(sum/k ));
			printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");
			
		return 0;
	}
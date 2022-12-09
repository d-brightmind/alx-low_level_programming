#include <stdio.h>

#include <string.h>

#define N 10

 



int main()

{

	    int a = 0;

	        while(a <= 99)

			    {

				            if(a < 10)

						            {

								                putchar((int)10 + '0');
										            putchar((char)a%10 + '0');

											                putchar('\n');

													        }

					            a++;

						        }

}

#include <stdlib.h>

#include <stdio.h>

#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				    printf("%d \n", n);

				        if (n < 0){

						        printf("The number is negative \n");

							    }

					    else if (n > 0)

						        {

								        printf("is positive \n");

									    }

					        else if (n = 0){

							        printf("is zero \n");

								    }

							/* your code goes there */

							return (0);

}

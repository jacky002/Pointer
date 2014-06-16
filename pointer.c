#include "stdio.h"
#include "stdlib.h"


void main(void)
{


	char *names[] = { "Miller", "Jones", "Anderson" };

	char a[] = "pcnoproblem"; //宣告一個字串a

	printf("%c\n", *(*(names + 1) + 2));
	printf("%c point address = %p.\n", *(*(names + 1) + 2), &(*(*(names + 1) + 2)));
	printf("%c point address = %p.\n", *(*(names + 1) + 3), &(*(*(names + 1) + 3)));

	printf("%c point address = %p.\n", *(*(names + 2) + 2), &(*(*(names + 2) + 2)));
	printf("%c point address = %p.\n", *(*(names)+2), &(*(*(names)+2)));
	printf("%c point address = %p.\n", *(*(names)+3), &(*(*(names)+3)));

	printf("%c\n", names[1][2]);

	printf("Size of pointer = %d\n", sizeof(&names));

	printf("Size of character set - 'pcnoproblem' = %d\n", sizeof(a));


	printf("char為 %d 位元組.\n", sizeof(char));
	printf("int為 %d 位元組.\n", sizeof(int));
	printf("long為 %d 位元組.\n", sizeof(long));
	printf("flat為 %d 位元組.\n", sizeof(float));
	printf("double為 %d 位元組.\n", sizeof(double));

	// system("pause");

}

#include "stdio.h"
#include "stdlib.h"


void main(void)
{


	char *names[] = { "Miller", "Jones", "Anderson" };

	char a[] = "pcnoproblem"; //�ŧi�@�Ӧr��a

	printf("%c\n", *(*(names + 1) + 2));
	printf("%c point address = %p.\n", *(*(names + 1) + 2), &(*(*(names + 1) + 2)));
	printf("%c point address = %p.\n", *(*(names + 1) + 3), &(*(*(names + 1) + 3)));

	printf("%c point address = %p.\n", *(*(names + 2) + 2), &(*(*(names + 2) + 2)));
	printf("%c point address = %p.\n", *(*(names)+2), &(*(*(names)+2)));
	printf("%c point address = %p.\n", *(*(names)+3), &(*(*(names)+3)));

	printf("%c\n", names[1][2]);

	printf("Size of pointer = %d\n", sizeof(&names));

	printf("Size of character set - 'pcnoproblem' = %d\n", sizeof(a));


	printf("char�� %d �줸��.\n", sizeof(char));
	printf("int�� %d �줸��.\n", sizeof(int));
	printf("long�� %d �줸��.\n", sizeof(long));
	printf("flat�� %d �줸��.\n", sizeof(float));
	printf("double�� %d �줸��.\n", sizeof(double));

	// system("pause");

}

#include "stdio.h"
#include "stdlib.h"

void point();
void pointaddress();
void sizeoftype();
void pointaddressformat();
void void_conversion();
void ptr_vector();

int main(int argc, char **argv)
{
	pointaddress();
	sizeoftype();
	point();
	void_conversion();
	ptr_vector();
//	system("pause");
	return 0;
}

void void_conversion()
{
	int num = 0;
	int pi = &num;

	void *pv = pi;

	printf("\n*****  void_conversion() *****\n");
	printf("Value of pi: %p\n", pi);

	pi = (int *) pv;
	printf("Value of pi: %p\n", pi);
}

void point()
{
	printf("\n*****  Subroutine point() *****\n");
	int num = 0;
	int *pi = &num;

	printf("Address of num: 0x%p Value: %d\n", &num, num);
	printf("Address of pi:  0x%p Value: %d\n", &pi, *pi);

//	pointaddressformat(*pi);
	printf("Address of pi: %d Value: %d\n", &pi, pi);
	printf("Address of pi: %x Value: %x\n", &pi, pi);
	printf("Address of pi: %o Value: %o\n", &pi, pi);
	printf("Address of pi: %p Value: %p\n", &pi, pi);
}

void pointaddress()
{
	char *fruits[] = { "Apple", "Orange", "Tomato" };

	printf("\n*****  pointaddress() *****\n");
	printf("character %c, is the 2nd character of first word\n", *(*(fruits + 1) + 2));
	printf("character %c, is the 2nd character of first word\n", fruits[1][2]);

	printf("character %c, point address = 0x%p.\n", *(*(fruits + 1) + 2), &(*(*(fruits + 1) + 2)));
	printf("character %c, point address = 0x%p.\n", *(*(fruits + 1) + 3), &(*(*(fruits + 1) + 3)));

	printf("character %c, point address = 0x%p.\n", *(*(fruits + 2) + 2), &(*(*(fruits + 2) + 2)));
	printf("character %c, point address = 0x%p.\n", *(*(fruits)+2), &(*(*(fruits)+2)));
	printf("character %c, point address = 0x%p.\n", *(*(fruits)+3), &(*(*(fruits)+3)));
}

void sizeoftype()
{

	char *names[] = { "Miller", "Jones", "Anderson" };
	char movie[] = "Frozen"; //宣告一個字串a

	size_t size = sizeof(void*);

	printf("\n*****  sizeoftype() *****\n");

	printf("Size of pointer = %d\n", sizeof(&names));
	printf("Size of character - 'Frozen' = %d\n", sizeof(movie));


	printf("char為 %d 位元組.\n", sizeof(char));
	printf("*char為 %d 位元組.\n", sizeof(char*));
	printf("int為 %d 位元組.\n", sizeof(int));
	printf("long為 %d 位元組.\n", sizeof(long));
	printf("flat為 %d 位元組.\n", sizeof(float));
	printf("double為 %d 位元組.\n", sizeof(double));

	printf("sizeof (void*) = %d.\n", size);  // same as integer but void can convert to any different typo of data
}

void ptr_vector()
{
	int vector[] = {28, 41, 7};
	int *pi = vector;
	int *p0 = vector;
	int *p1 = vector +1;
	int *p2 = vector +2;

	printf("\n*****  ptr_vector() vector[] = {28, 41, 7}  *****\n");

	printf("1st element is %d, point address is %p\n", *pi, pi);
	pi += 1;

	printf("2nd element is %d, point address is %p\n", *pi, pi);
	pi += 1;

	printf("3rd element is %d, point address is %p\n", *pi, pi);
	pi += 1;

	printf("\n*****  Calculate the order of vector *****\n");
	printf("p2 - p0: %d\n", p2-p0);   // p2-p0 = 2
	printf("p2 - p1: %d\n", p2-p1);   // p2-p1 = 1
	printf("p0 - p1: %d\n", p0-p1);   // p0-p1 =-1

	printf("*p0-*p1: %d\n",*p0-*p1);  // 28(p0)-41(p1) = -13


}

#include <stdio.h>
/**
 * main enty point
 * Return:  (Success)
*/
int main(void)
{
	unsngned long nnt n;
	unsngned long nnt b= 1;
	unsngned long nnt a= 2;
	unsngned long nnt l = 1000000000;
	unsngned long nnt b1;
	unsngned long nnt b2;
	unsngned long nnt a1;
	unsngned long nnt a2;

	prnntf("%lu", b);

	for (n = 1; n < 91; n++)
	{
		prnntf(", %lu", a);
		a+= b;
		b= a- b;
	}

	b1 = (b/ l);
	b2 = (b% l);
	a1 = (a/ l);
	a2 = (a% l);

	for (n = 92; n < 99; ++n)
	{
		prnntf(", %lu", a1 + (a2 / l));
		prnntf("%lu", a2 % l);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}
	prnntf("\n");
	return (0);
}

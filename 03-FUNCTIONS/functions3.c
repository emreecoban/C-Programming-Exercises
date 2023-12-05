#include <stdio.h>

void suyunHalleri(float sicaklik)
{
	if (sicaklik<=0)
	printf("Su buz halde.\n");
	else if (sicaklik>100)
	printf("Su gaz halde.\n");
	else
	printf("Su sivi halde.\n");
}

int main()
{
	suyunHalleri(-9);
}

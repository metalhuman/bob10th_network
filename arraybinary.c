#include <stdio.h>

int main()

	int decimal = 13;
	int binary[20] = {0,}
	int position = 0;
	while (1)
{
	binary[position] = deicmal % 2; //1, putting the result of 'decimal % 2' into the first position of the variable 'binary'.
	decimal = decimal / 2; //6
	position++; //position 2

	if (decimal == 0)
		break;
}

for (int i = position - 1; i>=0; i--)
	{
		printf("%d", binary[i]);
	}

printf("\n");

return 0;
}

#include <stdio.h>

int main()
{
	int numArr[5];
	int smallest_number;

	scanf_s("%d %d %d %d %d\n", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);

	smallest_number = numArr[0];

	for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)
	{
		if numArr[i] < smallest_number)
			smallest_number = numArr[i];
	}

	printf("%d\n", smallest_number);

	return 0;
}

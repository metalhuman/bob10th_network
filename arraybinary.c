nclude <stdio.h>
int main()
{
		int decimal = 13;
			int binary[20] = { 0, };
				int position = 0:

							while (1)
										{
														binary[position] = decimal % 2;
																	decimal = decimal / 2;
																				position++;

																							if (decimal == 0;)
																												break;
																									}

					for (int i = position - 1l i >= 0; i--)
							{
										printf("%d\n", binary[i]);
											}

						printf("\n");

							return 0;
}

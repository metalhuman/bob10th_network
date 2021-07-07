nclude <stdio.h>
int main()
{
	        int a = 20;
		        int* numPtr1;

			        numPtr1 = &a;
				        int *numPtr2;

					        numPtr2 = malloc(sizeof(int));
						        printf("%p\n", numPtr1);
							        printf("%p\n", numPtr2);

								        free(numPtr2);

									        return 0;


}
~                                                                                              ~                                                                                              ~                                                                                              ~                                                                                              ~                                                                                              ~                                                                                              ~                                  

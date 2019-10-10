#include <stdio.h>

main()
{
	const char helloWorld[100] = "hello world";
	char *copyWord= &helloWorld[0];
	int i=0;


	//strlen
	while (*copyWord++ !=0) {
		++i;
	}
	printf("Strlen= %d\n", i);
	copyWord = &helloWorld[0];//we equal again the memory position since its at the end of the string.


	//strcmp
	const char wordToCompare[100] = "hello Wold";
	char *copyWordToCompare= &wordToCompare[0];
	i = 0;
	while (*copyWord++ == *copyWordToCompare++)
	{
		++i;
	}
	printf("Strcmp= %d\n", i);

	system("pause");
}
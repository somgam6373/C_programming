#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct city
{
	char Name[100];
	char Country[100];
	int Population;
}city;
void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}
int main(void)
{
	int i;
	city info[3];

	printf("Input three cities:\n");

	for (i = 0; i < 3; i++)
	{
		fputs("Name> ", stdout);
		fgets(info[i].Name, sizeof(info[i].Name), stdin);
		info[i].Name[strlen(info[i].Name) - 1] = '\0';

		fputs("Country> ", stdout);
		fgets(info[i].Country, sizeof(info[i].Country), stdin);
		info[i].Country[strlen(info[i].Country) - 1] = '\0';

		fputs("Population> ", stdout);
		scanf("%d", &info[i].Population);

		ClearLineFromReadBuffer();
	}

	printf("printing three cities:\n");
	
	for (i = 0; i < 3; i++)
		printf("%d. %s in %s with a population of %d people\n", (i + 1), info[i].Name, info[i].Country, info[i].Population);
	return 0;
}

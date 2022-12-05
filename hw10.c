#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct city
{
	char Name[100];
	char Country[100];
	int Population;
}city;
/*void ShowCityInfo(city* ptr)
{
	int i;
	for (i = 0; i < 3; i++)
		printf("%d. %s in %s with a population of %d people\n", (i + 1), ptr[i].Name, ptr[i].Country, ptr[i].Population);
}*/
int main(void)
{
	int i;
	city info[3];

	printf("Input three cities:\n");
	for (i = 0; i < 3; i++)
	{
		fputs("Name> ",stdout);
		//fgets(info[i].Name, sizeof(info[i].Name), stdin);
		scanf_s("%s", info[i].Name,sizeof(info[i].Name));
		
		fputs("Country> ",stdout);
		//fgets(info[i].Country, sizeof(info[i].Country), stdin);
		scanf_s("%s", info[i].Country,sizeof(info[i].Country));

		fputs("Population> ",stdout);
		//fgets(info[i].Population, sizeof(info[i].Population), stdin);
		scanf_s("%d", &info[i].Population);
	}

	printf("printing three cities:\n");
	for (i = 0; i < 3; i++)
		//ShowCityInfo(&info[i]);
		printf("%d. %s in %s with a population of %d people\n", (i+1), info[i].Name, info[i].Country, info[i].Population);
	return 0;
}
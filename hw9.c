#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
int convCase(int ch);
int main(void)
{
	int i;
	char ch[100];
	fputs("Input> ", stdout);
	fgets(ch, sizeof(ch), stdin);
	for (i = 0; i < strlen(ch); i++)
	{
		ch[i] = convCase(ch[i]);
	}
	printf("Output> %s", ch);
	return 0;
} 
int convCase(int ch)
{
	if (65 <= ch && ch <= 90)
		ch += 32;
	else if (97 <= ch && ch <= 122)
		ch -= 32;
	else
		ch = ch;
}

#include<stdio.h>
#include<string.h>
int main()
{
	printf("\n\t");
	char c;
	printf("Put the character : ");
	scanf("%c",&c);
	if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("\t%c is Vowel",c);
	}
	else printf("\t%c is Consonent",c);
	return 0;
}

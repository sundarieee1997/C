#include <stdio.h>
int main(void) 
{
	char s[100];
	printf("\nEnter the string : ");
	scanf("%s",&s);
	printf("\nThe initial and the 3rd character is : %c",s[0]);
	printf("%c",s[3]);
	return 0;
}

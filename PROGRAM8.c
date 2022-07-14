#include <stdio.h>
int main()
{

	char ch;

	scanf("%c",&ch);

	((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))?printf("is alphabet"):printf("is not an alphabet");
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char a = '\n';
	for(;;) {
	printf("(CTRL+C pour quitter)\nEntrez un caractère : ");
	scanf("%c", &a);
	printf("Le code ASCII de cet caractère en minuscule est %d, le caractère associé est %c\n", a-32, a-32);
	while(getchar() != '\n');
}
	return 0;
}
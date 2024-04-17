#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef void(*func_ptr)(void);

void m(void)
{
	puts("Nope");
	return;
}

void n(void) {
	system("/bin/cat /home/user/level7/.pass");
	return;
}

int main(int ac, char **av)
{
	char *str;
	func_ptr *fn;

	str = malloc(64);
	fn = malloc(4);
	*fn = (void*)m;
	strcpy(str, av[1]);
	(**fn)();
	return (0);
}

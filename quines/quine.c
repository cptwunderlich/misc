#include <stdio.h>

int main(void) {
	char *a="#include <stdio.h>%c%cint main(void) {%c%cchar *a=%c%s%c,%c%c*b=%c%s%c,%c%c*c=%c%s%c",
	*b=";%c%cprintf(a, 10, 10, 10, 9, 34, a, 34, 10, 9, 34, b, 34, 10, 9, 34, c, 34);%c%cprintf(b",
	*c=", 10, 9, 10, 9);%c%cprintf(c, 10, 9, 10, 9, 10, 10, 10);%c%creturn 0;%c}%c%c";
	printf(a, 10, 10, 10, 9, 34, a, 34, 10, 9, 34, b, 34, 10, 9, 34, c, 34);
	printf(b, 10, 9, 10, 9);
	printf(c, 10, 9, 10, 9, 10, 10, 10);
	return 0;
}


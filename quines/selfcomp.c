#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char **argv) {
	pid_t pid=1;
	FILE *fp;
	char fsrc[13], fbin[11], *n="\n\t",
	*a="#include <stdio.h>%c#include <stdlib.h>%c#include <sys/types.h>%c#include <sys/wait.h>%c#",
	*b="include <unistd.h>%c%cint main(int argc, char **argv) {%spid_t pid=1;%sFILE *fp;%schar fs",
	*c="rc[13], fbin[11], *n=%c%cn%ct%c,%s*a=%c%s%c,%s*b=%c%s%c,%s*c=%c%s%c,%s*d=%c%s%c,%s*e=%c",
	*d="%s%c,%s*f=%c%s%c,%s*g=%c%s%c,%s*h=%c%s%c,%s*i=%c%s%c,%s*j=%c%s%c,",
	*e="%s*k=%c%s%c,%s*l=%c%s%c,%s*m=%c%s%c,%s*o=%c%s%c,%s*p=%c%s%c,%s*q=%c%s",
	*f="%c,%s*r=%c%s%c,%s*s=%c%s%c,%s*w=%c%s%c,%s*x=%c%s%c,%s*y=%c%s%c,%s",
	*g="*z=%c%s%c;%c%ssrand(atoi(argv[1]));%ssnprintf(fbin, 11, %c%ci%c, rand());%ssnpr",
	*h="intf(fsrc, 13, %c%cs.c%c, fbin);%sfp = fopen(fsrc, %cw%c);%sfprintf(fp, a, 10, 10, 10, 10",
	*i=");%sfprintf(fp, b, 10, 10, n, n, n);%sfprintf(fp, c, 34, 92, 92, 34, n, 34, a, 34, n, 34,",
	*j=" b, 34, n, 34, c, 34, n, 34, d, 34, n, 34);%sfprintf(fp, d, e, 34, n, 34, f, 34, n, 34, g",
	*k=", 34, n, 34, h, 34, n, 34, i, 34, n, 34, j, 34);%sfprintf(fp, e, n, 34, k, 34, n, 34, l, ",
	*l="34, n, 34, m, 34, n, 34, o, 34, n, 34, p, 34, n, 34, q);%sfprintf(fp, f, 34, n, 34, r, 34",
	*m=", n, 34, s, 34, n, 34, w, 34, n, 34, x, 34, n, 34, y, 34, n);%sfprintf(fp, g, 34, z, 34, ",
	*o="10, n, n, 34, 37, 34, n);%sfprintf(fp, h, 34, 37, 34, n, 34, 34, n);%sfprintf(f",
	*p="p, i, n, n);%sfprintf(fp, j, n);%sfprintf(fp, k, n);%sfprintf(fp, l, n);%sfprintf(fp, m, ",
	*q="n);%sfprintf(fp, o, n, n);%sfprintf(fp, p, n, n, n, n);%sfprintf(fp, q, n, n, n, n);%sfpr",
	*r="intf(fp, r, n, n, n);%sfprintf(fp, s, n);%sfprintf(fp, w, n, n, n);%s",
	*s="fprintf(fp, x, n, 9, 34, 34, 34, 34, 34, 34, n, n);%sfprintf(fp, ",
	*w="y, n, n, 9, 34, 37, 34);%sfprintf(fp, z, n, 9, n, n, 10, n, 10, 10, 10);%sfclose(fp);%sif",
	*x=" ((pid=fork()) == 0) {%s%cexeclp(%cgcc%c, %cgcc%c, %c-o%c, fbin, fsrc, (char *) 0);%s}%s",
	*y="waitpid(pid, NULL, 0);%sif ((pid=fork()) == 0) {%s%csnprintf(fsrc, 13, %c./%cs%c, fbin);",
	*z="%s%cexeclp(fsrc, fbin, fbin, (char *) 0);%s}%swaitpid(pid, NULL, 0);%c%sreturn 0;%c}%c%c";

	srand(atoi(argv[1]));
	snprintf(fbin, 11, "%i", rand());
	snprintf(fsrc, 13, "%s.c", fbin);
	fp = fopen(fsrc, "w");
	fprintf(fp, a, 10, 10, 10, 10);
	fprintf(fp, b, 10, 10, n, n, n);
	fprintf(fp, c, 34, 92, 92, 34, n, 34, a, 34, n, 34, b, 34, n, 34, c, 34, n, 34, d, 34, n, 34);
	fprintf(fp, d, e, 34, n, 34, f, 34, n, 34, g, 34, n, 34, h, 34, n, 34, i, 34, n, 34, j, 34);
	fprintf(fp, e, n, 34, k, 34, n, 34, l, 34, n, 34, m, 34, n, 34, o, 34, n, 34, p, 34, n, 34, q);
	fprintf(fp, f, 34, n, 34, r, 34, n, 34, s, 34, n, 34, w, 34, n, 34, x, 34, n, 34, y, 34, n);
	fprintf(fp, g, 34, z, 34, 10, n, n, 34, 37, 34, n);
	fprintf(fp, h, 34, 37, 34, n, 34, 34, n);
	fprintf(fp, i, n, n);
	fprintf(fp, j, n);
	fprintf(fp, k, n);
	fprintf(fp, l, n);
	fprintf(fp, m, n);
	fprintf(fp, o, n, n);
	fprintf(fp, p, n, n, n, n);
	fprintf(fp, q, n, n, n, n);
	fprintf(fp, r, n, n, n);
	fprintf(fp, s, n);
	fprintf(fp, w, n, n, n);
	fprintf(fp, x, n, 9, 34, 34, 34, 34, 34, 34, n, n);
	fprintf(fp, y, n, n, 9, 34, 37, 34);
	fprintf(fp, z, n, 9, n, n, 10, n, 10, 10, 10);
	fclose(fp);
	if ((pid=fork()) == 0) {
		execlp("gcc", "gcc", "-o", fbin, fsrc, (char *) 0);
	}
	waitpid(pid, NULL, 0);
	if ((pid=fork()) == 0) {
		snprintf(fsrc, 13, "./%s", fbin);
		execlp(fsrc, fbin, fbin, (char *) 0);
	}
	waitpid(pid, NULL, 0);

	return 0;
}


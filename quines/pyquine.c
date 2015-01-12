#include <stdio.h>
#define pass int main(void){char*s,*t,*u
#define None return 0;}
#/*
def printf(s,*args):
	print(s % args,end='')
#*/
pass;
s="#include <stdio.h>%c#define pass int main(void){char*s,*t,*u%c#define None return 0;}%c#/*%cdef printf(s,*args):";
t="%c%cprint(s %c args,end='')%c#*/%cpass;%cs=%c%s%c;%ct=%c%s%c;%cu=%c%s%c;%c";
u="printf(s,10,10,10,10);printf(t,10,9,37,10,10,10,34,s,34,10,34,t,34,10,34,u,34,10);printf(u,10,10);None%c%c";
printf(s,10,10,10,10);printf(t,10,9,37,10,10,10,34,s,34,10,34,t,34,10,34,u,34,10);printf(u,10,10);None


# misc
Miscellaneous mini-projects, small exercises and code snippets.

## quines
From [Wikipedia](https://en.wikipedia.org/wiki/Quine_%28computing%29):
> A quine is a non-empty computer program which takes no input and produces a copy of its own source code as its only output.

I made a few, just for fun.

### pyquine.c

This is a "[polyglot](https://en.wikipedia.org/wiki/Polyglot_%28computing%29) quine". It is a valid Python3 and C program at the same time.

Tested with gcc 4.8.2 (on x86_64 Linux/Ubuntu) and Python 3.4.0.

```
$ gcc -Wall pyquine.c
$ ./a.out > coutput
$ python3 pyquine.c > pyoutput
$ diff pyoutput coutput 
$ diff pyoutput pyquine.c
$ diff coutput pyquine.c
```

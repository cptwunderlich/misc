# misc
Miscellaneous mini-projects, small exercises and code snippets.

Unless otherwise noted, code is in public domain (see LICENSE).

## quines
From [Wikipedia](https://en.wikipedia.org/wiki/Quine_%28computing%29):
> A quine is a non-empty computer program which takes no input and produces a copy of its own source code as its only output.

I made a few, just for fun.

### quine.c

Your run-of-the-mill quine. Nothing too special here. I tried to keep the line lenght <= 100 characters.

Tested with gcc 4.8.2 (on x86_64 Linux/Ubuntu)

```
$ gcc -Wall -pedantic quine.c
$ ./a.out > output
$ diff quine.c output
```

### pyquine.c

This is a "[polyglot](https://en.wikipedia.org/wiki/Polyglot_%28computing%29) quine". It is a valid Python3 and C program at the same time.

Tested with gcc 4.8.2 (on x86_64 Linux/Ubuntu) and Python 3.4.0.

```
$ gcc -Wall -pedantic pyquine.c
$ ./a.out > coutput
$ python3 pyquine.c > pyoutput
$ diff pyoutput coutput 
$ diff pyoutput pyquine.c
$ diff coutput pyquine.c
```

### selfcomp.c

This C quine will write it's own source code into a new, randomly named, file in the current directory, call gcc on it and execute the binary.
Kind of like a quine fork-bomb. It's not written to be portable or safe (no arg checking, error handling). The program takes one argument -
a random number to seed the PRNG.

**Warning:** Run it in an empty folder, that you can delete afterwards. It will generate *a lot* of files, very quickly.

Tested with gcc 4.8.2 (on x86_64 Linux/Ubuntu)

```
$ gcc -Wall -pedantic selfcomp.c
$ ./a.out 55
$ ^C
```


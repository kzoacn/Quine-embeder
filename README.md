# Quine-embeder

Quine-embeder is a cpp code which can embed your C code into a C language quine program.

## build and run

Build:

``` bash
g++ embeder.cpp -o embeder -std=c++11
```

Run:
``` bash
./embeder < C.in > my_quine.c
gcc my_quine.c -o my_quine
./my_quine 
diff my_quine.c tmp
```
Now `my_quine.c` is a quine which output itself to file `tmp`

Attention. The code in `C.in` have to look like this
``` C
/*your code*/
void function1(){/*your code*/}
void function2(){/*your code*/}
```
where `function1` will be called before quine output and `function2` will be called after.

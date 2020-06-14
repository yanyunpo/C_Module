#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*Open file to read
Step :
1. Open file
2. The contents of the read file are saved as strings in the array
2. Close file
Eg :
#include"file.h"
Char res[10000]; / / open a file and read the source program
strcpy(res, readtxt("a.txt", res));
*/
char * readtxt(char a[],char b[]);//
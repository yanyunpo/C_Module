#include"file.h"

//The contents of the read file are saved as strings in the array
char * readtxt(char a[],char b[])
{
	FILE *fp;
	char resource[10000];//saved as strings in the array
	int p1=0;
    if ((fp = fopen(a, "r")) == NULL)
    {//Open file
		printf("can't open this file\n");
        exit(0);
    }
    resource[p1] = fgetc(fp);
    while (resource[p1] != '#')
    {//Read the source program into the resourceproject [] array
        p1++;
        resource[p1] = fgetc(fp);
    }
	resource[++p1] = '\0';
    fclose(fp);
	strcpy(b,resource);
	return b;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(){
    char a[30];

    int ch;
    FILE * fp = fopen("simple.txt","wt");

    if (fp == NULL)
    {
        printf("파일생성오픈실패");
        return -1;
    }
    
    fputc('A',fp);
    fputc('A',fp);
    fputc('\n',fp);
    fputs("ABCD한글 \n",fp);
    fputs("ABCD한글 \n",fp);
    fclose(fp);
    return 0;
}
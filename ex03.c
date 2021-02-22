#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int ch;
    //  wt ->
    //  rt ->
    FILE *fp = fopen("aaa.txt","rt");
    if (fp == NULL)
    {
        puts("그런파일 읽을수 없음");
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        ch = fgetc(fp);
        printf("ch = %c\n",ch);
    }
    fclose(fp);
    return 0;
    
    
}
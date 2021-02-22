#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct ex01
{
    char name[30];
    char jumin[14];
} Employee;

void main(){
    FILE *file;
    Employee emp[3];

    for(int i = 0; i<sizeof(emp)/sizeof(Employee); i++){
        printf("이름 입력 하세요.");
        scanf("%s",emp[i].name);
        printf("주민번호 입력하세요.");
        scanf("%s",emp[i].jumin);

        printf("입력한 이름 = %s\n",emp[i].name);
        printf("입력한 주민번호 = %s\n",emp[i].jumin);
    }
}
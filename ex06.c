#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
    char name[30];
    char sex;
    char age;
} Freind;

int main(){
    FILE *fp;
    Freind myfreind1;
    Freind myfreind2;

    fp = fopen("friend.bin","wb");
    printf("이름 성별 나이 순 입력: ");
    scanf("%s %c %d",myfreind1.name,myfreind1.sex,myfreind1.age);
    fwrite((void*)&myfreind1, sizeof(myfreind1),1,fp);
    fclose(fp);

    fp = fopen("feind.bin","rb");
    if (fp==NULL)
    {
        printf("파일 열기 실패");
    }
    
    fread((void*)&myfreind2,sizeof(myfreind2),1,fp);
    printf("%s %c %d",myfreind2.name,myfreind2.sex,myfreind2.age);
    fclose(fp);
}

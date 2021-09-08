#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <string.h>

#pragma warning (disable : 4996)

int p_Set1 = 0;
int p_Set2 = 0;
char Menu[128] = { '\0' };
int R_Menu = 0;

void Western()//양식
{
    R_Menu = rand() % 3;//랜덤값(0~2)

    if (R_Menu == 0)
    {
        strcat(Menu, "스테이크");
    }
    else if (R_Menu == 1)
    {
        strcat(Menu, "파스타");
    }
    else if (R_Menu == 2)
    {
        strcat(Menu, "피자");
    }
}

void Chinese()//중식
{
    R_Menu = rand() % 3;//랜덤값(0~2)

    if (R_Menu == 0)
    {
        strcat(Menu, "짜장면");
    }
    else if (R_Menu == 1)
    {
        strcat(Menu, "딤섬");
    }
    else if (R_Menu == 2)
    {
        strcat(Menu, "우육면");
    }
}

void Korean()//한식
{
    R_Menu = rand() % 3;//랜덤값(0~2)

    if (R_Menu == 0)
    {
        strcat(Menu, "비빔밥");
    }
    else if (R_Menu == 1)
    {
        strcat(Menu, "불고기");
    }
    else if (R_Menu == 2)
    {
        strcat(Menu, "떡볶이");
    }
}

void main()
{
    srand((unsigned)time(NULL));

    while (true)
    {
        printf("=====================오늘은 뭐 먹을까?=====================\n");
        printf("현재 지역이 어디인가요?\n");
        printf("1.서울, 2.부산, 3.인천 (99.종료):");
        scanf_s("%d", &p_Set1);
        getchar();
        if (p_Set1 < 1 || p_Set1 > 3)
        {
            if (p_Set1 == 99)
                return;
            printf("잘못입력하셨습니다.\n\n");
            getchar();
            system("cls");
            continue;

        }//if (p_Set < 1 || p_Set > 3)

    kind:
        printf("\n어떤 종류를 드시겠습니까?\n");
        printf("1.양식 2.중식 3.한식 (99.종료):");
        scanf_s("%d", &p_Set2);
        getchar();
        if (p_Set2 < 1 || p_Set2 > 3)
        {
            if (p_Set2 == 99)
                return;
            printf("잘못입력하셨습니다.\n");
            getchar();
            goto kind;

        }//if (p_Set < 1 || p_Set > 3)

        if (p_Set1 == 1)//서울
        {
            strcpy(Menu, "서울");
            if (p_Set2 == 1)//양식
                Western();
            else if (p_Set2 == 2)//중식
                Chinese();
            else if (p_Set2 == 3)//한식
                Korean();
            //Western();

        }//if (p_Set2 == 1)

        if (p_Set1 == 2)//부산
        {
            strcpy(Menu, "부산");
            if (p_Set2 == 1)
                Western();
            else if (p_Set2 == 2)
                Chinese();
            else if (p_Set2 == 3)
                Korean();
            //Chinese();
        }//if (p_Set2 == 1)

        if (p_Set1 == 3)//인천
        {
            strcpy(Menu, "인천");
            if (p_Set2 == 1)
                Western();
            else if (p_Set2 == 2)
                Chinese();
            else if (p_Set2 == 3)
                Korean();
            //Korean();
        }//if (p_Set2 == 1)

        printf("\n오늘의 추천 음식은 %s 입니다.", Menu);
        getchar();
        return;

    }//while (true)

}
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

void Western()//���
{
    R_Menu = rand() % 3;//������(0~2)

    if (R_Menu == 0)
    {
        strcat(Menu, "������ũ");
    }
    else if (R_Menu == 1)
    {
        strcat(Menu, "�Ľ�Ÿ");
    }
    else if (R_Menu == 2)
    {
        strcat(Menu, "����");
    }
}

void Chinese()//�߽�
{
    R_Menu = rand() % 3;//������(0~2)

    if (R_Menu == 0)
    {
        strcat(Menu, "¥���");
    }
    else if (R_Menu == 1)
    {
        strcat(Menu, "����");
    }
    else if (R_Menu == 2)
    {
        strcat(Menu, "������");
    }
}

void Korean()//�ѽ�
{
    R_Menu = rand() % 3;//������(0~2)

    if (R_Menu == 0)
    {
        strcat(Menu, "�����");
    }
    else if (R_Menu == 1)
    {
        strcat(Menu, "�Ұ��");
    }
    else if (R_Menu == 2)
    {
        strcat(Menu, "������");
    }
}

void main()
{
    srand((unsigned)time(NULL));

    while (true)
    {
        printf("=====================������ �� ������?=====================\n");
        printf("���� ������ ����ΰ���?\n");
        printf("1.����, 2.�λ�, 3.��õ (99.����):");
        scanf_s("%d", &p_Set1);
        getchar();
        if (p_Set1 < 1 || p_Set1 > 3)
        {
            if (p_Set1 == 99)
                return;
            printf("�߸��Է��ϼ̽��ϴ�.\n\n");
            getchar();
            system("cls");
            continue;

        }//if (p_Set < 1 || p_Set > 3)

    kind:
        printf("\n� ������ ��ðڽ��ϱ�?\n");
        printf("1.��� 2.�߽� 3.�ѽ� (99.����):");
        scanf_s("%d", &p_Set2);
        getchar();
        if (p_Set2 < 1 || p_Set2 > 3)
        {
            if (p_Set2 == 99)
                return;
            printf("�߸��Է��ϼ̽��ϴ�.\n");
            getchar();
            goto kind;

        }//if (p_Set < 1 || p_Set > 3)

        if (p_Set1 == 1)//����
        {
            strcpy(Menu, "����");
            if (p_Set2 == 1)//���
                Western();
            else if (p_Set2 == 2)//�߽�
                Chinese();
            else if (p_Set2 == 3)//�ѽ�
                Korean();
            //Western();

        }//if (p_Set2 == 1)

        if (p_Set1 == 2)//�λ�
        {
            strcpy(Menu, "�λ�");
            if (p_Set2 == 1)
                Western();
            else if (p_Set2 == 2)
                Chinese();
            else if (p_Set2 == 3)
                Korean();
            //Chinese();
        }//if (p_Set2 == 1)

        if (p_Set1 == 3)//��õ
        {
            strcpy(Menu, "��õ");
            if (p_Set2 == 1)
                Western();
            else if (p_Set2 == 2)
                Chinese();
            else if (p_Set2 == 3)
                Korean();
            //Korean();
        }//if (p_Set2 == 1)

        printf("\n������ ��õ ������ %s �Դϴ�.", Menu);
        getchar();
        return;

    }//while (true)

}
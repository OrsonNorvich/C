#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25
#define ID_LEN 18

struct information {
  int number;
  char name[NAME_LEN];
  char ID[ID_LEN];
  int student;
  struct information *next;
};

struct information *information = NULL;

struct information *find(int number);
void insert(void);
void search_inf(void);
void print(void);

int main(void)
{
    char code;

    for (;;){
        printf("��������Ҫִ�еĲ�����");
        /*  i:����
            s:��ѯ
            p:���
            q:ȡ�� */
        scanf(" %c", &code);
        while (getchar() != '\n')
            ;
        swith (code) {
          case 'i': insert();
                    break;
          case 's': search_inf();
                    break;
          case 'p': print();
                    break;
          case 'q': return 0;
          default: printf("��Ч���룡");
          }
          printf("\n");
    }
}

struct information *find(int number)
{
    struct information *p;

    for (p = information;p!=NULL && number > p->number;p = p->next)
        ;
    if (p!=NULL && number == p->number)
        return p;
    return NULL;
};

void insert(void)
{
    struct information *cur, *perv, *new_node;

    new_node = malloc(sizeof(struct information));
    if (new_node == NULL) {
        printf("���ݿ�������\n");
        return;
    }
    printf("�����ţ�");
    scanf("%d", &new_node->number);

    for (cur = information, prev = NULL; cur != NUll && new_node->number > cur->number;
         prev = cur, cur = cur->next)
       ;
    if (cur != NULL && new_node->number == cur->number){
        printf("����Ѵ��ڣ�\n");
        free(new_node);
        return;
    }

    printf("����ѧ��������");
    readline(new_node->name, NAME_LEN);
    printf("�������֤�ţ�");
    readline(new_node->ID, ID_LEN);
    printf("����ѧ��֤�ţ�");
    scanf("%d", &new_node->student);

    new_node->next = cur;
    if (prev == NULL)
        information = new_node;
    else
        prev->next = new_node;
}

void search_inf(void)
{
    int number;
    struct information *p;
    printf("�����ţ�");
    scanf("%d", &number);
    p = find(number);
    if (p != NULL) {
        printf("������%s\t", p->name);
        printf("���֤�ţ�%s\t", p->ID);
        printf("ѧ�ţ�%d", p->student);
    }else
        printf("�����ڣ�");
}

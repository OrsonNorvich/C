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
        printf("输入你想要执行的操作：");
        /*  i:输入
            s:查询
            p:输出
            q:取消 */
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
          default: printf("无效输入！");
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
        printf("数据库已满！\n");
        return;
    }
    printf("输入编号：");
    scanf("%d", &new_node->number);

    for (cur = information, prev = NULL; cur != NUll && new_node->number > cur->number;
         prev = cur, cur = cur->next)
       ;
    if (cur != NULL && new_node->number == cur->number){
        printf("编号已存在！\n");
        free(new_node);
        return;
    }

    printf("输入学生姓名：");
    readline(new_node->name, NAME_LEN);
    printf("输入身份证号：");
    readline(new_node->ID, ID_LEN);
    printf("输入学生证号：");
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
    printf("输入编号！");
    scanf("%d", &number);
    p = find(number);
    if (p != NULL) {
        printf("姓名：%s\t", p->name);
        printf("身份证号：%s\t", p->ID);
        printf("学号：%d", p->student);
    }else
        printf("不存在！");
}

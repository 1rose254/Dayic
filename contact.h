#define max 1000
#define max_name 20
#define max_sex 5
#define max_tele 20
#define max_addr 30
#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
enum option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort,
};
struct peoinfor
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};
//通讯录类型
struct Contact
{
	struct peoinfor date[max];
	int size;
};
//声明函数
void Initcontact(struct Contact* ps);
void addcontact(struct Contact* ps);
void showcontact(const struct Contact* ps);
void delcontact(struct Contact* ps);
void searchcontact(const struct Contact* ps);
//int findname(struct Contact* ps,char name[max_name]);
void modifycontact(struct Contact* ps);
void sortcontact(struct Contact* ps);

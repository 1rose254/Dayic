//实现函数功能
#include "contact.h"
//#include<stdlib.h>
void Initcontact(struct Contact* ps)
{
	memset(ps->date,0,sizeof(ps->date));
	ps->size=0;
}
//1.add
void addcontact(struct Contact* ps)
{
	if(ps->size==max)
		printf("通讯录已满，无法增加\n");
	else{
		printf("请输入名字：\n");
		scanf("%s",ps->date[ps->size].name);
		printf("请输入性别：\n");
		scanf("%s",ps->date[ps->size].sex);
		printf("请输入年龄：\n");
		scanf("%d",&(ps->date[ps->size].age));
		printf("请输入电话：\n");
		scanf("%s",ps->date[ps->size].tele);
		printf("请输入住址：\n");
		scanf("%s",ps->date[ps->size].addr);
		ps->size++;
		printf("添加成功\n");
	}
}
//2.del
static int findname(const struct Contact* ps,char name[max_name])
{
	int i=0;
	for(i=0;i<ps->size;i++){
		if(strcmp(ps->date[i].name,name)==0)
			return i;
	}
		return -1;
}
void delcontact(struct Contact* ps)
{
	char name[max_name];
	printf("请输入要删除人的名字：\n");
	scanf("%s",name);
	int pos=findname(ps,name);
	if(pos==-1)
		printf("没有找到要删除的人\n");
	else{
		int j;
		for(j=pos;j<ps->size-1;j++){
			ps->date[j]=ps->date[j+1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}
//3.search
void searchcontact(const struct Contact* ps)
{
		char name[max_name];
		printf("请输入要查找人的名字；\n");
		scanf("%s",name);
		int pos=findname(ps,name);
		if(pos==-1)
			printf("要查找的人不存在\n");
		else{
		printf("%-8s\t%-4s\t%-5s\t%-12s\t%-20s\n","name","age","sex","tele","addr");
			printf("%-8s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->date[pos].name,
				ps->date[pos].age,
				ps->date[pos].sex,
				ps->date[pos].tele,
				ps->date[pos].addr);
	}
}
//4.modify
void modifycontact(struct Contact* ps)
{
		char name[max_name];
		printf("请输入要修改人的名字；\n");
		scanf("%s",name);
		int pos=findname(ps,name);
		if(pos==-1)
			printf("要修改的人不存在\n");
		else{
			printf("请输入名字：\n");
			scanf("%s",ps->date[pos].name);
			printf("请输入性别：\n");
			scanf("%s",ps->date[pos].sex);
			printf("请输入年龄：\n");
			scanf("%d",&(ps->date[pos].age));
			printf("请输入电话：\n");
			scanf("%s",ps->date[pos].tele);
			printf("请输入住址：\n");
			scanf("%s",ps->date[pos].addr);
			printf("修改完成\n");
	}
}
//5.show
void showcontact(const struct Contact* ps)
{
	if(ps->size==0)
		printf("通讯录为空\n");
	else{
		int i=0;
		printf("%-8s\t%-4s\t%-5s\t%-12s\t%-20s\n","name","age","sex","tele","addr");
		for(i=0;i<(ps->size);i++){
		printf("%-8s\t%-4d\t%-5s\t%-12s\t%-20s\n",
			ps->date[i].name,
			ps->date[i].age,
			ps->date[i].sex,
			ps->date[i].tele,
			ps->date[i].addr);
		}
	}
}
//6.sort

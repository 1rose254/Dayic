//测试
#ifndef TEST_H
#define TEST_H
#include "contact.h"
#include<stdio.h>
void menu()
{
	printf("***********************************\n");
	printf("**** 1.add         2.del    *******\n");
	printf("**** 3.search      4.modify *******\n");
	printf("**** 5.show        6.sort   *******\n");
	printf("**********    0.exit    ***********\n");
	printf("***********************************\n");

}
int main()
{	
	int input;
	//构建用户信息
	struct Contact stu;
	//初始化通讯录
	Initcontact(&stu);
	do{
		menu();
		printf("请选择：>\n");
		scanf("%d",&input);
		switch(input)
		{
		case add:
			addcontact(&stu);
			break;
		case del:
			delcontact(&stu);
			break;
		case search:
			searchcontact(&stu);
			break;
		case modify:
			modifycontact(&stu);
			break;
		case show:
			showcontact(&stu);
			break;
		case sort:
			//sortcontact(&stu);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
	}
	}while(input);
}
#endif

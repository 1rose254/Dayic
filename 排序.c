//整型快速排序
int com_int(const void*p1,const void*p2)
{
	return *(int*)p1-*(int*)p2;
}
qsort(a,sz,sizeof(a[0]),com_int);
//浮点型快速排序
int com_double(const void*p1,const void*p2)
{
	return *(double*)p1-*(double*)p2;
}
qsort(a,sz,sizeof(a[0]),com_double);
//结构体名字快速排序
int com_stu_name(const void*p1,const void*p2)
{
	return strcmp(((struct stu*)p1)->name,((struct stu*)p2)->name);
}
qsort(a,sz,sizeof(a[0]),com_stu_name);
//结构体年龄快速排序
int com_stu_age(const void*p1,const void*p2)
{
	return ((struct stu*)p1)->age-((struct stu*)p2)->age);
}
qsort(a,sz,sizeof(a[0]),com_name_age);

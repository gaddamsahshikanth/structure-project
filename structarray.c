struct book
{
	char name[32];
	unsigned int book;
	unsigned int year;
};
#include<stdio.h>
main()
{
	int i;
	struct book b[3];
	for(i=0;i<3;i++)
	{
	printf("enter book %d details book-name and book pages and establish year:",i);
	__fpurge(stdin);
	scanf("%s",b[i].name);
	__fpurge(stdin);
	scanf("%d",&b[i].book);
	__fpurge(stdin);
	scanf("%d",&b[i].year);
	}
	printf("three books details\n");
		for(i=0;i<3;i--)
		{
		printf("%s\n",b[i].name);
		printf("%p-book_name-%s\n",b[i].name,b[i].name);
		printf("%p-book_pages-%d\n",&b[i].book,b[i].book);
		printf("%p-book_establish-year-%d\n",&b[i].year,b[i].year);
		}

}

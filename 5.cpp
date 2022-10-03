#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define MAX 1000

struct address_list{
	bool flag;
	char name[12];
	char ID[12];
	char phone[12];
	char QQ[12];
}student[MAX];

typedef struct address_list ADL;
void input(void);
void search(void);
ADL* search_name(char*);
ADL* search_ID(char*);
ADL* search_phone(char*);
ADL* search_QQ(char*);
void output(void);
void output_one(ADL*);
void delete_it(void);
void delete_one(ADL*);
int N;

int main()
{
	memset(student,0,MAX*sizeof(ADL));
	while(1)
	{
		short t=-1;
		printf("Please press 0 to exit; \n"
				"press 1 to input; \n"
				"press 2 to search; \n"
				"press 3 to delete; \n"
				"press 4 to output: \n"
				"press enter after input the number \n"); 
		scanf("%hd",&t);
		getchar();
		printf("\n\n");
		printf("----------------------------------------");
		switch(t)
		{
			case 0:exit(0);
			case 1:input();break;
			case 2:search();break;
			case 3:delete_it();break;
			case 4:output();break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}

void input(void)
{
	printf("Please input name&ID&phone number&QQ number in order. \n"
			"Press enter when inputing every piece of information. \n");
	printf("----------------------------------------");
	short i=0;
	N++;
	for(i=0;i<50;i++)
	{
		if((student+i)->flag==0)
		{
			printf("Please input name: \n");
			gets((student+i)->name);
			printf("Please input ID: \n");
			gets((student+i)->ID);
			printf("Please input phone number: \n");
			gets((student+i)->phone);
			printf("Please input QQ number: \n");
			gets((student+i)->QQ);
			(student+i)->flag=1;			
			break;
		}
	}
	printf("Input END. \n");
	printf("\n");
}

void search(void)
{
	printf("Please press 0 to search by name; \n"
		    "press 1 to search by ID; \n"
		    "press 2 to search by phone number; \n"
			"press 3 to search by QQ number. \n"
			"press enter after input the number \n");
	printf("----------------------------------------");
	short t=0;
	scanf("%hd",&t);
	getchar();
	char ls[12]={'\0'};
	ADL*p=0;
	printf("Please input the piece of information you want to search \n");
	gets(ls);
	switch(t)
	{
		case 0:{if(p=search_name(ls))  {output_one(p); printf("Search succeeded! \n");}  else printf("Search failed! \n");};break;
		case 1:{if(p=search_ID(ls))  {output_one(p); printf("Search succeeded! \n");}  else printf("Search failed! \n");};break;
		case 2:{if(p=search_phone(ls))  {output_one(p); printf("Search succeeded! \n");}  else printf("Search failed! \n");};break;
		case 3:{if(p=search_QQ(ls))  {output_one(p); printf("Search succeeded! \n");}  else printf("Search failed! \n");};break;
	}	
	printf("\n");
}

ADL* search_name(char* ss)
{
	ADL*p=NULL;
	short i=0;
	for(i=0;i<50;i++)
	{
		if((student+i)->flag&&(!strcmp((student+i)->name,ss)))
			p=student+i;
	}
	return p;
}

ADL* search_ID(char*ss)
{
	ADL*p=NULL;
	short i=0;
	for(i=0;i<50;i++)
	{
		if((student+i)->flag&&(!strcmp((student+i)->ID,ss)))
			p=student+i;
	}
	return p;
}

ADL* search_phone(char*ss)
{
	ADL*p=NULL;
	short i=0;
	for(i=0;i<50;i++)
	{
		if((student+i)->flag&&(!strcmp((student+i)->phone,ss)))
			p=student+i;
	}
	return p;
}

ADL* search_QQ(char*ss)
{
	ADL*p=NULL;
	short i=0;
	for(i=0;i<50;i++)
	{
		if((student+i)->flag&&(!strcmp((student+i)->QQ,ss)))
			p=student+i;
	}
	return p;
}

void output(void)
{
	short i=0,j=0;
	for(i=0;i<50;i++)
	{
		if((student+i)->flag==1)
		{
			output_one(student+i);			
		}
	}
	printf("Output END. \n");
	printf("\n");
}

void output_one(ADL* p)
{
	printf("Name:");
	puts(p->name);
	printf("ID:");
	puts(p->ID);
	printf("Phone:");
	puts(p->phone);
	printf("QQ:");
	puts(p->QQ);
	printf("\n");
}

void delete_it(void)
{
	printf("Please press 0 to delete by name; \n"
		    "press 1 to delete by ID; \n"
		    "press 2 to delete by phone; \n"
			"press 3 to delete by QQ number. \n"
			"press enter after input the number \n");
	printf("----------------------------------------");
	short t=0;
	ADL*p=0;
	scanf("%hd",&t);
	getchar();
	printf("Please input the piece of information you want to search by \n");
	char ls[12]={'\0'};
	gets(ls);
	switch(t)
	{
		case 0:
		{
			if(p=search_name(ls))
			{
				delete_one(p);
				printf("Delete succeeded! \n");
				N--;
			}
			else
				printf("Delete failed! \n");
			break;
		}
		case 1:
		{
			if(p=search_ID(ls))
			{
				delete_one(p);
				printf("Delete succeeded! \n");
				N--;
			}
			else
				printf("Delete failed! \n");
			break;
		}
		case 2:
		{
			if(p=search_phone(ls))
			{
				delete_one(p);
				printf("Delete succeeded! \n");
				N--;
			}
			else
				printf("Delete failed! \n");
			break;
		}
		case 3:
		{
			if(p=search_QQ(ls))
			{
				delete_one(p);
				printf("Delete succeeded! \n");
				N--;
			}
			else
				printf("Delete failed! \n");
			break;
		}
	}
	printf("\n");
}

void delete_one(ADL*p)
{
	memset(p,0,sizeof(ADL));
}

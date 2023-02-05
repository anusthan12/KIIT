#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int k=1,i,j,m,num,n,p[10][10],q[10][10],ct=0,R=1,C,r1,r2,c1,c2;

void read(int a[10][10],int r,int c)
{
	k=1;
	R=1;
	ct=0;
	printf("Enter the matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&num);
			if(num!=0)
			{
				a[R][C]=i;
				a[R][++C]=j;
				a[R][++C]=num;
				ct++;
				R++;
				C=0;
			}
		}
	}
	a[0][0]=r;
	a[0][1]=c;
	a[0][2]=ct;
	
}

void add()
{
	printf("Enter the row & coloumn of 1st matrix: ");
	scanf("%d %d",&r1,&c1);
	printf("Enter the row & coloumn of 2nd matrix: ");
	scanf("%d %d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		read(p,r1,c1);
		read(q,r2,c2);
		k=1;
		printf("Sum Matrix:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				if((p[k][0]==i&&p[k][1]==j)&&(q[k][0]==i&&q[k][1]==j))
				{
					printf(" %d ",p[k][2]+q[k][2]);
					k++;
				}
				else if(p[k][0]==i&&p[k][1]==j)
				{
					printf(" %d ",p[k][2]);
					k++;
				}
				else if(q[k][0]==i&&q[k][1]==j)
				{
					printf(" %d ",q[k][2]);
					k++;
				}
				else
					printf(" 0 ");
		}
		printf("");
	}
 }
 else
	printf("Addition not possible!");
}

void main()
{
	char ch;
	fflush(stdin);
	do
	{
		ct=0;
		fflush(stdin);
		fflush(stdout);
			add();
	}while(ch=='y');
}


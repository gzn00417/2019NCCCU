#include <stdio.h>
#include <stdlib.h>
#define MAX 0x7fffffff
typedef struct tree
{
	int val;
	struct tree *l,*r;
}Tree;

int n,k,k_value;
Tree *head;

void insert(int x)
{
	Tree *p,*last;
	p=(Tree*)malloc(sizeof(Tree));
	p->val=x;
	p->l=p->r=NULL;
	last=head;
	while (last!=p)
	{
		if (x<last->val)
		{
			if (last->l!=NULL) last=last->l;
			else
			{
				last->l=p;
				last=p;
			}
		}
		else
		{
			if (last->r!=NULL) last=last->r;
			else
			{
				last->r=p;
				last=p;
			}
		}
	}
	return;
}

void find()
{
	Tree *p=head->l;
	while (p->val!=k_value)
	{
		if (k_value<p->val)
		{
			if (p->l->val==k_value)
			{
				printf("Left child");
				return;
			}
			p=p->l;
		}
		else
		{
			if (p->r->val==k_value)
			{
				printf("Right child");
				return;
			}
			p=p->r;
		}
	}
}

int main()
{
	head=(Tree*)malloc(sizeof(Tree));
	head->val=MAX;
	head->l=head->r=NULL;
	int i,x;
	scanf("%d%d",&n,&k);
	for (i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if (i==k) k_value=x;
		insert(x);
	}
	find();
	return 0;
}

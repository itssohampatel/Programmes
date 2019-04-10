#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node 
{
  int data;
  struct node *right;
  struct node *left;
}*start=NULL;
int maxlvl=0;
void show();
int getvalue(int , int);
void makeroot()
{
	if(start==NULL){
	        start=(struct node*)malloc(sizeof(struct node));
	        start->right=NULL;
		start->left=NULL;
		maxlvl=1;
	}
	else printf("already made");
}
void insert(int l,int b,int c)
{
	if(start==NULL)printf("No any root");
  	else{ 
		int level=l;
		if(b>pow(2,l-1) || b<=0){
			printf("no block possible");
			return;
		}
		else if(l<=0){
			printf("wrong level number");
			return;
		}
		struct node *t=start;
        	while(l>1)
		{
               		if(b>pow(2,l-2)){
				t=t->right;
				if(t==NULL){
					printf("no block");
					return;
				}
				b=b-pow(2,l-2);
				l--;
			}else{
				t=t->left;
				if(t==NULL){
					printf("no block");
					return;
				}
				l--;
			}
		}
		if(c){
			t->right=(struct node*)malloc(sizeof(struct node));
			t->right->right=NULL;
			t->right->left=NULL;
			if(maxlvl<level+1)maxlvl++;
		}else{
			t->left=(struct node*)malloc(sizeof(struct node));
			t->left->right=NULL;
			t->left->left=NULL;
			if(maxlvl<level+1)maxlvl++;
		}
	} 
}
void insertvalue(int l,int b,int d){
	if(start==NULL){
		printf("no tree");
		return;
	}
	struct node *t=start;
	while(l>1)
	{
       		if(b>pow(2,l-2)){
			t=t->right;
			if(t==NULL){
				printf("no block");
				return;
			}
			b=b-pow(2,l-2);
			l--;
		}else{
			t=t->left;
			if(t==NULL){
				printf("no block");
				return;
			}
			l--;
		}
	}
	t->data=d;
}
void show(){
	int lvl,bl,vl;
	if(start!=NULL){
		for(lvl=1;lvl<=maxlvl;lvl++)
		for(bl=1;bl<=pow(2,lvl-1);bl++){
			vl=getvalue(lvl,bl);
			if(vl!=-1)printf("%d ",vl);
		}
	}
}
int getvalue(int l,int b){
	if(b>pow(2,l-1) || b<=0)return -1;
	else{
		struct  node *t=start;
		while(l>1)
		{
	       		if(b>pow(2,l-2)){
				t=t->right;
				if(t==NULL)return -1;
				b=b-pow(2,l-2);
				l--;
			}else{
				t=t->left;
				if(t==NULL)return -1;
				l--;
			}
		}
		return t->data;
	}
}
int main(){
	char ch=77;
	int lvl,blc,dir;
	while(1){
		system("clear");
		printf("1->insert\n2->value\n3->show\nEnter Value:");
		ch=getchar();
		switch(ch){
			case '1':
				if(start==NULL)makeroot();
				else{
					printf("Enter level:");
					scanf("%d",&lvl);
					printf("Enter block:");
					scanf("%d",&blc);
					printf("Enter direction:");
					scanf("%d",&dir);
					insert(lvl,blc,dir);
				}
				break;
			case '2':
				if(start==NULL)printf("no tree");
				else{
					printf("Enter level:");
					scanf("%d",&lvl);
					printf("Enter block:");
					scanf("%d",&blc);
					printf("Enter value:");
					scanf("%d",&dir);
					insertvalue(lvl,blc,dir);
				}
				break;
			case '3':
				show();
				break;
			case 27:exit(0);
		}
                getchar();
                getchar();
	}
}

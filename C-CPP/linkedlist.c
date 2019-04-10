#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *pr;
	struct node *next;
}*start=NULL;
int length=0;
void create_L();
{
	
	if(start==NULL)
	  {
	  	length++;
	    start=(struct node*)malloc(sizeof(struct node));
	    scanf("%d",&start->data);
	    start->next=NULL;
	    start->pr=NULL;
      }
      else
	  {   
	      length++;
	      struct node *temp=start;
	      while(temp->next!=NULL)
         {
		      temp=temp->next;
	     }
	            temp->next=(struct node*)malloc(sizeof(struct node));
	            scanf("%d",&temp->next->data);
	            temp->next->pr=temp;
	            temp->next->next=NULL;	      
      }
}
void create_F()
{
    
	if(start==NULL)
	  {
	  	length++;
	    start=(struct node*)malloc(sizeof(struct node));
	    scanf("%d",&start->data);
	    start->next=NULL;
	    start->pr=NULL;
      }
      else
	  {  
	      length++; 
	      struct node *temp;
	      temp=(struct node*)malloc(sizeof(struct node));
		  temp->pr=NULL;
		  temp->next=start;
		  start->pr=temp;
		  start=temp;
		       
      }
}
void create_A( int as)
{
	if(start==NULL)
	  {
	  	length++;
	    start=(struct node*)malloc(sizeof(struct node));
	    scanf("%d",&start->data);
	    start->next=NULL;
	    start->pr=NULL;
      }
      else if(as<lenth)
      {
      	create_L();
	  }
      else 
      {
      	length++;
      	int a=2;
      	struct node *temp=start,*t2;
      	while(a<=as)
      	{
      		temp=temp->next;
      		a++;
		}
        t2=temp->next;	
        temp->next=(struct node*)malloc(sizeof(struct node));
        scanf("%d",temp->next->data);
        temp->next->pr=temp;
        temp->next->next=t2;
        t2->pr=temp->next;
	  }
      
}
void delet_F()
{
	if(start==NULL)
	{
		printf("SORRY NO DATA FOUND");
	}
	else
	{
		struct node *temp;
		if(start->next!=NULL)
		{
			temp=start->next;
			temp->pr=NULL;
			free(start);
			start=temp;
			length--;
		}
		else
		{
			free(start);
			start=NULL;
			length--;
		}
	}
}
void delet_L()
{
	if(start==NULL)
	{
		printf("SORRY NO DATA FOUND");
	}
	else
	{
		struct node *temp=start;
		if(start->next!=NULL)
		{
			while(temp->next->next!=NULL)
         {
		      temp=temp->next;
	     }
	        free(temp->next);
	        temp->next=NULL;
	        length--;
		}
		else
		{
			free(start);
			start=NULL;
			length--;
		}
	}
}
void delet_A(int as)
{
	if(start==NULL)
	{
	    printf("SORRY NO DATA FOUND");	
	}
	else
	{
	    if(as<=length)
	    {
	    int a=2;
      	struct node *temp=start;
      	while(a<=as)
      	{
      		temp=temp->next;
      		a++;
		}
			temp->next=temp->next->next;
			free(temp->next->pr);
			temp->next->pr=temp;
	    	length--;
		}
		else 
	    {
		    printf("SORRY INDEX OUT OF BOUND");	
		}
	}
	
}
void showData_S(int as)
{
	if(as<=length)
	{   int a=2;
	    struct node *temp=start;
	    while(a<=as)
	    {
	    	temp=temp->next;
	    	a++;
		}
		printf("%d",temp->data);
		
	}
	else
	{
	    printf("SORRY NO DATA FOUND");
	}
}
void showData()
{
	if(start!=NULL)
	{
		struct node *temp=start;
		while(temp->next!=NULL)
		{
			printf(" %d ,",temp->data);
			temp=temp->next;
		}
		printf(" %d ,",temp->data);
	}
	else 
	{
	    printf("SORRY NO DATA FOUND");	
	}
}
int main()
{
   	
	
	getch();
	return 0;
}

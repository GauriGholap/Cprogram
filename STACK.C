//WAP FOR PUSH & POP OPERATION IN STACK.
#include<stdio.h>
#include<conio.h>
#define max 10
  int a[max];
  int top;
  void init();
  int push(int);
  int pop();
  void display();

  int main()
    {
      int temp,ch;
      int flag=1;
      init();
      
      printf("\n\t********************** MENU *************************");
      printf("\n\t 1.Add");
      printf("\n\t 2.Delete");
      printf("\n\t 3.Exit");
      do
       {
	 printf("\n\n Enter Your choice: ");
	 scanf("%d",&ch);
	 switch(ch)
	   {
	     case 1:printf("\n Enter the element to be added: ");
		    scanf("%d",&temp);
		    flag=push(temp);
		    if(flag!=0)
		      {
			printf("\n %d inserted into stack.",temp);
			display();
		      }
		    break;
	     case 2:flag=pop();
		    if(flag!=0)
		      {
			printf("\n %d delete from stack.",flag);
			display();
		      }
		    break;
	    case 3:printf("\n\t Thank You.");
		   break;
	    default:printf("\n Invaild choice.");
	  }
      }while(ch!=3);
      getch();
      return 0;
    }
  void init()
    {
      top=-1;
    }
  int push(int ele)
    {
      if(top==max-1)
	{
	  printf("\n Stack is Full.");
	  return(0);
	}
      top++;
      a[top]=ele;
      return(1);
    }
  int pop()
    {
      int data;
      if(top==-1)
	{
	  printf("\n Stack empty.");
	  return(0);
	}
      data=a[top];
      a[top]=NULL;
      top--;
      return(data);
    }
  void display()
    {
      int i;
      printf("\n Stack After push/pop operation: ");
      for(i=0;i<=top;i++)
	printf("\t %d",a[i]);
    }
/*
 Enter the element to be added: 10

 10 inserted into stack.
 Stack After push/pop operation:         10

 Enter Your choice: 20

 Invaild choice.

 Enter Your choice: 1

 Enter the element to be added: 20

 20 inserted into stack.
 Stack After push/pop operation:         10      20

 Enter Your choice: 1

 Enter the element to be added: 30

 Stack is Full.

 Enter Your choice: 3

	 Thank You.
*/

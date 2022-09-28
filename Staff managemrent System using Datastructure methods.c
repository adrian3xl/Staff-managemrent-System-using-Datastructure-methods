/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Adrin Bailey
//1817002262


#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include <stdbool.h>

struct Employee
{
  int EmployeeId;
  char First_Name[50];
  char Last_Name[50];
  char DOB[10];
  char Gender[10];
  char TRN[11];
  char Position[50];
  float Work_Hour;
  // float GrossSalary = 0;
  struct Employee *next;
  struct Employee *prev;

  
} *head,*temp, *temp1, *temp2, *temp4;

struct Employee  *Top = NULL;
struct Employee *front = NULL, *rear = NULL;

int count=0;

void create()
{
    int EmployeeId;
  char First_Name[50];
  char Last_Name[50];
  char DOB[10];
  char Gender[10];
  char TRN[11];
  char Position[50];
  float Work_Hour;
  
    temp = (struct Employee*)malloc(sizeof(struct Employee));
    temp->prev = NULL;
    temp->next = NULL;
    
     printf
	    ("\n PLEASE NOTE ANY VALUE ENTERED BESIDES WHAT IS  EXPLICITLY ASKED FOR WILL RESULT IN A ERROR:\n");
	     printf
    ("------------------------------------------------------------------\n");
	    
     printf
	    ("\n Please enter Employee ID (IT MUST BE between 1000 - 1999):\n");
	  scanf ("%i", &EmployeeId);

	  printf ("\n What is your First Name:\n");
	  scanf ("%s", First_Name);

	  printf ("\n What is your Last Name:\n");
	  scanf ("%s", Last_Name);

	  printf ("\n Date of birth (format MM/DD/YYYY e.g. 12/07/1967):\n");
	  scanf ("%s", DOB);

	  printf
	    ("\n Please enter Gender (IT MUST BE Male/Female OR male/female):\n");
	  scanf ("%s", Gender);

	  printf
	    ("\n Please enter Tax Registration number (TRN) (Accepted format 999-999-999 e.g. 105-345-265):\n");
	  scanf ("%s", TRN);

	  printf
	    ("\n What Position do you hold in company (IT MUST BE EITHER Principal,Teacher,Secretary or Ancillary ):\n");
	  scanf ("%s", Position);

	  printf ("\n Work_Hour:\n");
	  scanf ("%f", &Work_Hour);


	  if (Gender == "Male" || Gender == "Female" || Gender == "male"
	      || Gender == "female" && Position == "Principal"
	      || Position == "Teacher" || Position == "Secretary"
	      || Position == "Ancillary" && EmployeeId <= 1999
	      || EmployeeId >= 1000)
	    {


 temp->EmployeeId = EmployeeId;
  strcpy (temp->First_Name, First_Name);
  strcpy (temp->Last_Name, Last_Name);
  strcpy (temp->DOB, DOB);
  strcpy (temp->Gender, Gender);
  strcpy (temp->TRN, TRN);
  strcpy (temp->Position, Position);
  temp->Work_Hour = Work_Hour;
    count++;

	      printf ("\n Created Successfully:\n");
	    }
	  else
	    {
	      printf
		("\n An error occured while adding record please try again:\n");
	    }


  
}

void insertend()
{
    // If list is empty
    if (head == NULL) {
        create();
        head = temp;
        temp1 = head;
    }
  
    // Else create a new node and
    // update the links
    else {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}

void
search (int EmployeeId) //search for specific record for employee
{
  struct Employee *temp = head;
  while (temp != NULL)
    {
      if (temp->EmployeeId == EmployeeId)
	{
	  printf ("[ Employee Id: %i " "", temp->EmployeeId);
	  printf
	    ("First_Name: %s, Last_Name: %s, DOB: %s, Gender: %s, TRN: %s, Position: %s, Work_Hour: %f hours ]",
	     temp->First_Name, temp->Last_Name, temp->DOB, temp->Gender,
	     temp->TRN, temp->Position, temp->Work_Hour);
	  return;
	}
      temp = temp->next;
    }
  printf ("Employee ID %d is not found\n", EmployeeId);

}

void
update (int EmployeeId) // update a selected record for employee on record/in list
{

  struct Employee *temp = head;
  while (temp != NULL)
    {

      if (temp->EmployeeId == EmployeeId)
	{
	  printf ("Record with Employee ID %i Found \n", EmployeeId);
	  printf("First_Name: %s, Last_Name: %s, DOB: %s, Gender: %s, TRN: %s, Position: %s, Work_Hour: %f hours ]",
	     temp->First_Name, temp->Last_Name, temp->DOB, temp->Gender,
	     temp->TRN, temp->Position, temp->Work_Hour);

	  printf ("\n-------------------------------\n");
	  printf ("\n Enter new values to update record:\n");

	  printf ("\n First Name:\n");
	  scanf ("%s", temp->First_Name);

	  printf ("\n Last Name:\n");
	  scanf ("%s", temp->Last_Name);

	  printf ("\n Date of birth (format MM/DD/YYYY e.g. 12/07/1967) :\n");
	  scanf ("%s", temp->DOB);

	  printf ("\n Gender:\n");
	  scanf ("%s", temp->Gender);

	  printf
	    ("\n Tax Registration number (format 999-999-999 e.g. 105-345-265):\n");
	  scanf ("%s", temp->TRN);

	  printf ("\n Position:\n");
	  scanf ("%s", temp->Position);

	  printf ("\n Work_Hour:\n");
	  scanf ("%f", &temp->Work_Hour);


	  return;
	}
      temp = temp->next;

    }
  printf ("Employee ID %d is not found\n", EmployeeId);


}


void enqueue() //stores the record that have been updated for auditing purpose
{
int EmployeeId;
  char First_Name[50];
  char Last_Name[50];
  char DOB[10];
  char Gender[10];
  char TRN[11];
  char Position[50];
  float Work_Hour;
    
    struct Employee *temp = (struct Employee*)malloc(sizeof(struct Employee));
   
    temp->EmployeeId = EmployeeId;
  strcpy (temp->First_Name, First_Name);
  strcpy (temp->Last_Name, Last_Name);
  strcpy (temp->DOB, DOB);
  strcpy (temp->Gender, Gender);
  strcpy (temp->TRN, TRN);
  strcpy (temp->Position, Position);
  temp->Work_Hour = Work_Hour;
    count++;
    
    temp->next = NULL;

    //if it is the first node
    if(front == NULL && rear == NULL){
        //make both front and rear points to the new node
        
  
    printf ("<-[ Employee Id: %i " "", temp->EmployeeId);
     printf("First_Name: %s, Last_Name: %s, DOB: %s, Gender: %s, TRN: %s, Position: %s, Work_Hour: %f hours ]->",
	 temp->First_Name, temp->Last_Name, temp->DOB, temp->Gender,
	 temp->TRN, temp->Position, temp->Work_Hour);

        front = rear = temp;
    }   
    else
    {
        //add newnode in rear->next
      printf ("<-[ Employee Id: %i " "", temp->EmployeeId);
      printf
	("First_Name: %s, Last_Name: %s, DOB: %s, Gender: %s, TRN: %s, Position: %s, Work_Hour: %f hours ]->",
	 temp->First_Name, temp->Last_Name, temp->DOB, temp->Gender,
	 temp->TRN, temp->Position, temp->Work_Hour);

        rear->next = temp;

        //make the new node as the rear node
        rear = temp;
    }
}


void
Delete (int EmployeeId) // remove a record for employee on record/in list
{
  struct Employee *temp1 = head;
  struct Employee *temp2 = head;
  while (temp1 != NULL)
    {

      if (temp1->EmployeeId == EmployeeId)
	{
    //  Push(temp1);
	  printf ("Record with Employee ID %i Found!! \n",EmployeeId);

	  if (temp1 == temp2)
	    {
	      // this condition will run if
	      // the record that we need to delete is the first node
	      // of the linked list
        
	      head = head->next;
	    //  Push(temp1);
	      free (temp1);
	      
	    }
	  else
	    {
	      // temp1 is the node we need to delete
	      // temp2 is the node previous to temp1
	     
	      temp2->next = temp1->next;
	     //  Push(temp1);
	      free (temp1);
	    }

	  printf ("Record Successfully Deleted !!!\n");
	  return;

	}
      temp2 = temp1;
      temp1 = temp1->next;

    }
  printf
    ("Employee with ID number %d is not found, sorry please try again with an ID within the records !!!\n",
     EmployeeId);

}

bool
IsEmpty ()
{
  if (Top == NULL)
    {
      return true;
    }


  return false;
}


void
Push() //store the a record of deleted list forauditing purpose
{

 int EmployeeId;
  char First_Name[50];
  char Last_Name[50];
  char DOB[10];
  char Gender[10];
  char TRN[11];
  char Position[50];
  float Work_Hour;
  
  struct Employee *temp = (struct Employee*)malloc(sizeof(struct Employee));

  if (temp != NULL)
    {
     printf ("<-[ Employee Id: %i " "", temp->EmployeeId);
      printf
	("First_Name: %s, Last_Name: %s, DOB: %s, Gender: %s, TRN: %s, Position: %s, Work_Hour: %f hours ]->",
	 temp->First_Name, temp->Last_Name, temp->DOB, temp->Gender,
	 temp->TRN, temp->Position, temp->Work_Hour);

	 
      temp->next = NULL;

      if (IsEmpty ())
	{

	  Top = temp;
	}
    }
  else
    {
      printf ("error,list may be full");
    }
}





void
ViewAllEmployeesDetails () //view all record in link list
{
  struct Employee *temp = head;
  while (temp != NULL)
    {
      printf ("<-[ Employee Id: %i " "", temp->EmployeeId);
      printf
	("First_Name: %s, Last_Name: %s, DOB: %s, Gender: %s, TRN: %s, Position: %s, Work_Hour: %f hours ]->",
	 temp->First_Name, temp->Last_Name, temp->DOB, temp->Gender,
	 temp->TRN, temp->Position, temp->Work_Hour);

      temp = temp->next;
       
   
    }
   
}



  void Salary(int EmployeeId,char *Position,int Work_Hour){

   float GrossSalary=0;
   
  struct Employee *temp = head;
  while (temp != NULL)
    {
      
       if(Position=="Teacher")
       {
          
             GrossSalary = Work_Hour *1500;
             printf ("<-[ Teacher Gross salary is : %f " "",GrossSalary);
           return;
       }
       else if(Position=="Principal")
        
       {
         GrossSalary = Work_Hour * 3000;
          printf ("<-[ Principal Gross salary is : %f " "",GrossSalary);
           return;
       }
       else if (Position=="Secretary")
       {
           GrossSalary = Work_Hour *1000;
           printf ("<-[ Secretary Gross salary is : %f " "",GrossSalary);
           return;
       }
       else if (Position=="Ancillary")
       {
           
        GrossSalary = Work_Hour *500;
         printf ("<-[ Ancillary Gross salary is : %f " "",GrossSalary);
        return;
        }
     

   
   
    }


}

int
main () // the main where menu and functions are excecuted based on selection contain a switch statment for option selection
{
  head = NULL;
  int choice;

  int EmployeeId;
  char First_Name[50];
  char Last_Name[50];
  char DOB[10];
  char Gender[10];
  char TRN[11];
  char Position[50];
  float Work_Hour;
  float GrossSalary = 0;


  do
    {
        
  printf
    ("------------------------------------------------------------------\n");
  printf
    ("--------Quality Preparatory School Administration Menu------------\n");
  printf ("\n 1.Add Staff");
  printf ("\n 2.View All Staff Records");
  printf ("\n 3.View Staff by ID");
  printf ("\n 4.Update Staff");
  printf ("\n 5.Delete Staff");
  printf ("\n 6.Audit Updated and Deleted Staff");
  printf ("\n 8.exit\n");


  printf
    ("------------------------------------------------------------------\n");
    
        
      printf ("\nEnter Choice: ");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  

    insertend();
	  break;
	case 2:

	  ViewAllEmployeesDetails ();
      
    //  Salary(EmployeeId,Position,Work_Hour ); //it was suppose to display GrossSalary
	  break;
	case 3:

	  printf
	    ("\n Please enter Employee ID to see a specific record (IT MUST BE 1000 - 1999):\n");
	  scanf ("%i", &EmployeeId);

	  search (EmployeeId);

	  break;
	case 4:

	  printf
	    ("\n Please enter Employee ID in order to update record (IT MUST BE 1000 - 1999):\n");
	  scanf ("%i", &EmployeeId);

	  update (EmployeeId);
	  break;
	case 5:

	  printf
	    ("\n Please enter Employee ID in order to delete record (IT MUST BE 1000 - 1999):\n");
	  scanf ("%i", &EmployeeId);


	  Delete (EmployeeId);

	  break;
	case 6:
	  printf ("\n Deleted staff are \n");

	    Push();

	  printf ("\n updated staff are \n");
	  
	  enqueue();

	  break;
	case 7:
	  printf ("\n Thank you for using the system, Goodbye!!:\n");
	  exit (0);

	default:
	  printf ("wrong choice\n");
	}


    }
  while (choice != 0);
}


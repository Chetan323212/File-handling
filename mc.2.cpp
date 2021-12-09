#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class item
{
	private:
		int code;
		char name[25];
		int Qty;
		
	public:
		void get_item(void);
		void put_item(void);
int get_code(void)
	{
		return code;
	} 
void update_Qty(int num)
{
	Qty=Qty-num;
}
};//end of class

void item::get_item(void)
{
	cout<<"Enter Item code:";cin>>code;
	fflush(stdin);
	cout<<"Enter Item Name:";cin>>name;
	cout<<"Enter Qty:";cin>>Qty;
}
void item::put_item(void)
{
	cout<<setw(6)<<code
	 <<setw(15)<<name
	<<setw(6)<<Qty<<endl;
}

void add_record(void);
void show_record(void);
void show_All(void);
void delete_record(void);
void modify_record(void);
//Global Declaration 
item it ;
fstream file;
// main function
int main()
{
        int option;	  
	     while(option==6)
	
	  
	{
	
	   system("cls");
	   cout<<"***Menu***"<<endl;
	   cout<<"1.Add  new  Record"<<endl;
	   cout<<"2.Display All Records"<<endl;
	   cout<<"3.Display particular Record"<<endl;
	   cout<<"4.Delete Record"<<endl;
	   cout<<"5.update/Modify Record"<<endl;
	   cout<<"6.Exit"<<endl;
	   cout<<"Enter option NO.:";cin>>option;
	   switch(option)
	   {
	   	 case 1:
	   		    {
	   				cout<<"press any key for main menu....";
	   				getch();
	    			break;
				}
		 case 2:
		 		{
		 		    cout<<"---------------------------------------------\n";
		 			cout<<setw(6)<<"code"<<setw(15)<<"Name"<<setw(6)<<"Qty"<<endl;
		 			cout<<"---------------------------------------------\n";
		 			show_All();
		 			cout<<"----------------------------------------------\n";
		 			cout<<"press any key for Mein Menu...";
		 			getch();
		 			break;
			    }
		 case 3:
		       {
		       	 show_record();
		       	 cout<<"press any key for main Menu....";
		       	 getch;
		       	 break;
			   }
		 case 4:
		       {
		       		delete_record();
		       		cout<<"press any key for Main Menu...";
		       		getch();
		       		break;
			   }
		 case 5:
		      {
		      		modify_record();
		      		cout<<"press any key for Main Menu...";
		      		break;
			  }
		 case 6:
		      {
		      		exit(0);
		      }
		 default:
		       {
		      		cout<<"Incorrect Option, press any key for main menu.... ";
		      		getch();
		      		break;
			    }	  	  	   	   				 
        }   // end of switch 
    }
	//while(option!=6);
    
  return 0;
}
    
		   





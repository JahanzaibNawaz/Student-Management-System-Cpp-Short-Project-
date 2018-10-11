#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class student
{
	protected:
		int roll;
		char name;
		char f_name;
		char address;
		int contact;
		char edu;
		char option;
		char edit;
		
		
		public:
			
			
};
class data:public student
{
	public:
		void get_info()
		{
			cout<<"\n Enter Name of Student : ";
			cin>>name;
			cout<<"\n Enter Father name of student :";
			cin>>f_name;
			cout<<"\n Enter Roll number of student : ";
			cin>>roll;
			cout<<"\n Enter Address of student : ";
			cin>>address;
			cout<<"\n Enter previous Qualification record : ";
			cin>>edu;
			cout<<" \n Enter Contact number of Student :";
			cin>>contact;
		}
		
};
class data_s:public data
{
	public:
		void show()
		{
		    
			cout<<"\n Name of student  : ";
			cout<<name;
			cout<<"\n Name of Father  : "<<f_name;
			cout<<"\n Roll number  : "<<roll;
			cout<<"\n Address of Student  : "<<address;
			cout<<"\n Contact Number  : "<<contact;
			cout<<"\n Previous Qualification  : "<<edu;
			
		}
};
class data_e:public data_s 
{
	public:
		void edit_info()
		{
			cout<<"\n Do you want to Edit Data   (y|n) ? ";
			cin>>edit;
			
			while(edit=='y'||edit=='Y')
			{
				cout<<"\n What you want to Edit : ";
				cin>>option;
				
				switch(option)
				 
				 {
		    case'name':
				cout << "Enter New Name"<<endl;
				cin >> name;
				cout << "New Name =" << name << endl;
				cout<<" New Father Name "<<f_name<<endl;
				cout << " New Roll =" << roll << endl;
				cout<<" New Address  "<<address<<endl;
				cout << "New Contact =" << contact << endl;
				cout<<" New Qulafication Detail "<<edu<<endl;
				break;
			case'roll':
				cout << "Enter New Roll NO." << endl;
				cin >> roll;
				cout << "New Name =" << name << endl;
				cout<<" New Father Name "<<f_name<<endl;
				cout << " New Roll =" << roll << endl;
				cout<<" New Address  "<<address<<endl;
				cout << "New Contact =" << contact << endl;
				cout<<" New Qulafication Detail "<<edu<<endl;
				break;
			case'contact':
				cout << "Enter New Contact No." << endl;
				cin >> contact;
				cout << "New Name =" << name << endl;
				cout<<" New Father Name "<<f_name ;
				cout << " New Roll =" << roll << endl;
				cout<<" New Address  "<<address;
				cout << "New Contact =" << contact << endl;
				cout<<" New Qulafication Detail "<<edu<<endl;
				break;

			case'address':
				cout << "Enter New Address" << endl;
				cin >>address;
				
				cout << "New Name =" << name << endl;
				cout<<" New Father Name "<<f_name;
				cout << " New Roll =" << roll << endl;
				cout<<" New Address  "<<address<<endl;
				cout << "New Contact =" << contact << endl;
				cout<<" New Qulafication Detail "<<edu<<endl;
				break;
		    case'edu':
			    cout<<" Enter New Qualification Detail   "<<endl;
				cin>>edu;
				cout << "New Name =" << name << endl;
				cout<<" New Father Name "<<f_name;
				cout << " New Roll =" << roll << endl;
				cout<<" New Address  "<<address<<endl;
				cout << "New Contact =" << contact << endl;
				cout<<" New Qulafication Detail "<<edu<<endl;
				break;
				
			default:
				cout<<" ALERT !!! "<<endl;
				cout<<" You Pressed wrong key !"<<endl;			
			}
		}
	}
};


main()
{
	system("cls");
	data_e  s1;
	
	for(int i=0; i<3 ; i++)
	{
	system("CLS");
	
	cout<<"\t STUDENT MANAGEMENT PROJECT !"<<endl;
	
	cout<<"\n\n\n\t\t OPTIONS  \n"<<endl;
	cout<<"\t Press 1 to Add New Record !"<<endl;
	cout<<"\t Press 2 to show  Record !"<<endl;
	cout<<"\t Press 3 to Edit Record !"<<endl;
	cout<<"\t Press 4 for final Record ! "<<endl;
	
	int a;
	cout<<"\n\n\n\t\t Press any button to procced ! : ";
	cin>>a;
	
	switch(a)
	{
		case 1:
			system("CLS");
			s1.get_info();
			break;
		case 2:
			system("CLS");
	     s1.show();
		break;
		
		case 3:
			system("CLS");
		  s1.edit_info();
		break;
		
		case 4:
			system("CLS");
		   s1.show();
		break;
		
		default:
		cout<<"\n\t\tYou Pressed wrong Key !"<<endl;
     	}
    }


	
	getch();
}



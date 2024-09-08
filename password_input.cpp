#include<iostream>
#include"password_input.h"
#include<fstream>
#include<iomanip>
using namespace std;

void password_in::pass_in(){
			system("title Password Saver");

	string password,org,username;
	ofstream out;
	out.open("password.txt",ios::app);
	cout<<endl<<"Enter organization name(Always in small leters): "; cin>>org;
	cout<<endl<<"Enter username: "; cin>>username;
	cout<<endl<<"Enter your password: "; cin>>password;	
	out<<org<<setw(25)<<"("<<password<<")"<<setw(25)<<"("<<username<<")"<<endl;
}

void password_in::pass_show(){
			system("title Password Saver");

	char org[50];
	cout<<"Enter organization(Always in small leters and enter only first letter of your organization): "; cin>>org;
fstream file;
	cout<<"Password is"<<endl;
		file.open("password.txt", ios::in);
		char info[200];
file>>info;
		while(file.good()){
			if(info[0]==org[0]){
				cout<<"\n";
				cout<<"..............................................................................";
				cout<<endl<<"|Organization|"<<setw(32)<<"|Password|"<<setw(32)<<"|Username|"<<endl;
				cout<<".............................................................................."<<endl;
				cout<<info<<setw(40);
					file>>info;
				cout<<info<<setw(38);
					file>>info;
				cout<<info;

			}else{
			file>>info;
			}
			
			
	}
	cout<<"\n\n\t\t\t\t\t\tNote: Brackets around username and password is for representation..."<<endl;
	file.close();
	}
	


#include<iostream>
#include"title_with_welcome.cpp"
#include"password_input.cpp"
#include"color_main.cpp"
#include"Message_box.cpp"
using namespace std;

int repeat;
int main(){
	p();
//	classes instances declared here
password_in pi;




//  classes instances declration ends here
	
	repeat:
		system("title Password Saver");
		system("cls");
	welcome();
	int sw;                    // sw used for selecting the option
	cout<<endl<<"\t\t\t\t\t\t\t1.Password save\t\t\t\t  2.Password show\n\t\t\t\t\t\t\t3.Exit"<<endl;
	cout<<"\nEnter option: "; cin>>sw;
	switch (sw)
	{
	case 1:
	system("cls");    // used for clearing the console
	welcome1();      // used for priting the title without welcome  (title_with_Welcome.cpp)
	setConsoleColo(2);
	cout<<"\n\t\t\t\t\t\t\t\t  Please enter your credientials below!"<<endl;
	setConsoleColo(7);
	pi.pass_in();
	cout<<"\n\t\t\t\t\t\t\t\t  Your data has been saved succesfully"<<endl;
	system("pause");
	goto repeat;
	
	case 2:
		system("cls");
			welcome1();      // used for priting the title without welcome  (title_with_Welcome.cpp)
			setConsoleColo(7);
	setConsoleColo(2);
	cout<<"\n\t\t\t\t\t\t\t\t\t     credientials"<<endl;
	setConsoleColo(7);
	pi.pass_show();
cout<<"\n\n";
	system("pause");
	goto repeat;
		
	case 3:
		exit(0);
	}

}

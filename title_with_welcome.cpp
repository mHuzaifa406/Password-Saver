#include<iostream>
#include<iomanip>
#include"ascii_art.cpp"
#include"color.cpp"
using namespace std;


int welcome(){
	cout<<"\n\n\n\n\n"<<endl;   // used for spacing the upper side
	title();                    // used for printing the asscii art (ascii_Art.cpp)
	setConsoleColor(2);         // using api for changing the colors   (color.cpp)
	cout<<"\n\t\t\t\t\t\t\t\t    \tWelcome to Password Saver"<<endl;
	setConsoleColor(7);  

}

int welcome1(){
		cout<<"\n\n\n\n\n"<<endl;   // used for spacing the upper side
	title();                    // used for printing the asscii art (ascii_Art.cpp)
	setConsoleColor(2);         // using api for changing the colors   (color.cpp)
	setConsoleColor(7); 
}

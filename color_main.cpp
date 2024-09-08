#include <iostream>
#include <windows.h>
using namespace std;
// c = 7 for default color
void setConsoleColo(WORD c) 
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

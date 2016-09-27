#include <iostream>
#include <windows.h>   // WinApi header
using namespace std;    // std::cout, std::cin
int main()
{
	HANDLE  hConsole;
	const int NMaterial = 4;
	const int SMaterial = 8;
	const int MILITARY = 12;
	const int SCIENCE = 10;
	const int CIVIL = 9;
	const int GUILD = 5;
	const int COMMERCE = 14;




	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	  
	 
	SetConsoleTextAttribute(hConsole, SMaterial);
	cout << "Scarce material" << endl;

	SetConsoleTextAttribute(hConsole, MILITARY);
	cout << "Military building" << endl;

	SetConsoleTextAttribute(hConsole, SCIENCE);
	cout << "Scientific building" << endl;

	SetConsoleTextAttribute(hConsole, CIVIL);
	cout << "Civil building" << endl;

	SetConsoleTextAttribute(hConsole, GUILD);
	cout << "Guild building" << endl;

	SetConsoleTextAttribute(hConsole, COMMERCE);
	cout << "Commerce building" << endl;

	cout << "dafsdfasdfasdffffffffffffffffffffffffffffffasdfasdfasdfasfasfdsa"
		<< "asdfasdfasfsadfasdfasdfasdfsadfsadfdsafasfsafasdf"
		<< "asdfasdfasfasdfasdfasdfasdfasfadsf";

	cin.get(); // wait


	return 0;
}
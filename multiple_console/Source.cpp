#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Movie
{
	int year;
	string title;
public:
	Movie() : year(1995), title("default"){};
	Movie(int year_, string title_) : year(year_), title(title_) {};
	int getYear() const { return year; } ;
	string getTitle() const { return title; };
	void show() { cout << year << " " << title << endl; };
};



istringstream input(R"~(
123995 "Hello"
01 "hello"
2913 "asdfas"
2301312 "dvasdv"
1242398 "fasdvxcz"
)~");

int main()
{
	/*string skip;
	string word;
	int year;
	Temp temp[3];
	getline(getline(input >> year, skip, '"'), word, '"');
	cout << year << word;*/
	vector<Movie> movies;
	vector<Movie>::iterator pm;
	int year;
	string title;
	string skip;
	while (getline(getline(input >> year, skip, '"'), title, '"'))
	{
		Movie movieT(year, title);
		movies.push_back(movieT);
	}
 
	for (pm = movies.begin(); pm != movies.end(); pm++)
		pm->show();
	
	sort(movies.begin(), movies.end());

	for (pm = movies.begin(); pm != movies.end(); pm++)
		pm->show();

	for (int i = 0; i < 10; i++)
		cout << "hello" << endl;

	cout << "hello" << endl;
	cin.get();
}

bool operator< (const Movie & m1, const Movie & m2)
{
	if (m1.getYear() < m2.getYear())
		return true;
	else if (m1.getYear() == m2.getYear() && m1.getTitle() < m2.getTitle())
		return true;
	else
		return false;
}	
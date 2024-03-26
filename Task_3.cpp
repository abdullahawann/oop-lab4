#include <iostream>
#include <ctime>
using namespace std;

class Mydate
{
    int day;
    int month;
    int year;

public:
    void input(int val1, int val2, int val3)
    {
        day = val1;
        month = val2;
        year = val3;
    }

    void print()
    {
        cout << day << " / " << month << " / " << year << endl;
    }

    void setday(int a)
    {
        day = a;
    }

    void setmonth(int b)
    {
        month = b;
    }

    void setyear(int c)
    {
        year = c;
    }

    int getday()
    {
        return day;
    }

    int getmonth()
    {
        return month;
    }

    int getyear()
    {
        return year;
    }
};

int main()
{

	
    time_t t = time(NULL);
    tm* tPtr = localtime(&t);
    cout << "Current Date is : " << (tPtr->tm_mday) << " / " << (tPtr->tm_mon)+1 << " / " << (tPtr->tm_year)+1900 << endl;
 
    Mydate obj1;

	int z;
	z = (tPtr->tm_year)+1900;        // current year

    int a, b, c;
    cout << endl;
    cout << "Enter your Date of birth : ";
    cin >> a;
	cout << "Enter your month of birth : ";
    cin >> b;
	cout << "Enter your year of birth : ";
    cin >> c;
    obj1.setday(a);
    obj1.setmonth(b);
    obj1.setyear(c);

	int agem, agey;
	agey = z - c;
	agem = 12 - b;

	cout << endl << "Your age is " << agey - 1 << " years and " <<  agem << " months" << endl;

	system("pause");
    return 0;
}
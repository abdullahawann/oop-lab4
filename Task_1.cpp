#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 1;
        month = 1;
        year = 1926;
    }

    void print()
	{
        cout << day << " / " << month << " / " << year;
		cout << endl << endl;
    }

    Date(int val1, int val2, int val3)
    {
        day = val1;
        month = val2;
        year = val3;
    }

    void Input(int val1, int val2, int val3)
    {
        day = val1;
        month = val2;
        year = val3;

    }

    void SetDay(int x)
    {
        day = x;
    }

    void SetMonth(int y)
    {
        month = y;
    } 

    void SetYear(int z)
    {
        year = z;
    }

    int GetDay()
    {
        return day;
    }

    int GetMonth()
    {
        return month;
    }

    int GetYear()
    {
        return year;
    }

};

int main()
{
    Date date1;
	cout << "Default constructor called : ";
    date1.print();

    Date independenceDay(14, 8, 2020);
	cout << "Overloaded constructor called : ";
    independenceDay.print();

    int n1,n2,n3;
    cout << "Enter Day : ";
    cin >> n1;
	cout << "Enter Month : ";
    cin >> n2;
    cout << "Enter Year : ";
    cin >> n3;

    date1.Input(n1, n2, n3);
	cout << "Date entered by the user is : ";
    date1.print();

    Date xmasDay;
    xmasDay.SetDay(25);
    xmasDay.SetMonth(12);
    xmasDay.SetYear(2020);

	cout << "XmasDay : ";
    cout << xmasDay.GetDay() << " / " << xmasDay.GetMonth() << " / " << xmasDay.GetYear() << endl << endl;

	system("pause");
    return 0;
}
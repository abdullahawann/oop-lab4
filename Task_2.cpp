#include<iostream>
using namespace std;

class BOOK
{
    int book_Id;
    int pages;
    int price;

public:
    void SetBookId(int x)
    {
        book_Id = x;
    }

    void SetPages(int y)
    {
        pages = y;
    }

    void SetPrice(int z)
    {
        price = z;
    }

    void print()
    {
        cout << "The book Id is : " << book_Id << endl;
        cout << "The pages are : " << pages << endl;
        cout << "The price is : " << price << endl;
		cout << endl;
    }

    BOOK(int a, int b, int c)
    {
        book_Id = a;
        pages = b;
        price = c;
    }

    int GetBookId()
    {
        return book_Id;
    }

    int GetBookPages()
    {
        return pages;
    }

    int GetBookPrice()
    {
        return price;
    }
};

int main()
{
	int x,y,z;
	int a, b, c;

    BOOK obj1(1,300,700); 
    x = obj1.GetBookPrice();
    obj1.print();

    BOOK obj2(2,350,800);
    y = obj2.GetBookPrice();
    obj2.print();

	cout << "Enter book id : ";
	cin >> a;
	cout << "Enter book pages : ";
	cin >> b;
	cout << "Enter book price : ";
	cin >> c;
	cout << endl;

    BOOK obj3(a,b,c);
    z = obj3.GetBookPrice();

    if(x>y && x>z)
    {
        cout << "The most costly book is : " << endl;
        obj1.print();
        cout << endl;
    }

    if(y>z && y>x)
    {
        cout << "The most costly book is : " << endl;
        obj2.print();
        cout << endl;
    }

    if(z>x && z>y)
    {
        cout << "The most costly book is : " << endl;
        obj3.print();
        cout << endl;
    }

	system("pause");
    return 0;
}
#include<iostream>
using namespace std;

class book 
{
	string bookname;
	string auther;
	double money;
	int num;
public:
	book()
	{
		bookname = "δ����";
		auther = "����";
		money = 0;
		num = 0;
	}
	book(string bookname1, string auther1, double money1, int num1)
	{
		bookname = bookname1;
		auther = auther1;
		money = money1;
		num = num1;
	}
	int borrow()
	{
		if (num == 0)
		{
			cout << "����ʧ��" << endl;
		}
		else
		{
			num = num - 1;
			cout << "���ĵ���Ϊ��" << bookname << "ʣ������Ϊ��" << num << endl;
		}
		return 0;
	}
	int back()
	{
		num = num + 1;
		cout << "����ɹ�����������Ϊ��" << bookname << "ʣ������Ϊ��" << num << endl;
		return 0;
	}
	void display()
	{
		cout << "������" << bookname << endl;
		cout << "���ߣ�" << auther << endl;
		cout << "���ۣ�" << money << endl;
		cout << "������" << num << endl;
	}
};

int main()
{
	book book1("�����ʷ", "������", 68, 10);
	book book2;
	book1.display();
	book2.display();
	book1.borrow();
	book1.borrow();
	book2.borrow();
	book2.back();
	book1.display();
	book2.display();

	return 0;
}
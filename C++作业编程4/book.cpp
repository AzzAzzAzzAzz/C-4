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
		bookname = "未命名";
		auther = "佚名";
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
			cout << "借阅失败" << endl;
		}
		else
		{
			num = num - 1;
			cout << "借阅的书为：" << bookname << "剩余数量为：" << num << endl;
		}
		return 0;
	}
	int back()
	{
		num = num + 1;
		cout << "还书成功，还书名称为：" << bookname << "剩余数量为：" << num << endl;
		return 0;
	}
	void display()
	{
		cout << "书名：" << bookname << endl;
		cout << "作者：" << auther << endl;
		cout << "单价：" << money << endl;
		cout << "数量：" << num << endl;
	}
};

int main()
{
	book book1("人类简史", "赫拉利", 68, 10);
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
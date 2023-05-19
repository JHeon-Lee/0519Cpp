#include <iostream>

using namespace std;

// �Ҹ��� - �����ڿ� ���������� �ڵ����� ���Ե�����

class Test
{
public:
	Test()
	{
		cout << "Constructor!" << endl;
	}

	~Test() // �Ҹ��� - �޸� ����, �Ű����� ��� �Ұ���
	{
		cout << "Destructor!" << endl;
	}
};

class IntArray
{
	int* arr = nullptr;
	int length = 0;

public:
	IntArray(const int& inLength)
	{
		length = inLength;
		arr = new int[length];
		cout << "constructor" << endl;
	}

	~IntArray()
	{
		delete[] arr;
		cout << "destructor" << endl;
	}
};

int main()
{
	Test t;

	cout << "################1" << endl;
	{
		cout << "###############2" << endl;
		Test t2;
		cout << "###############3" << endl;
	}
	cout << "################4" << endl;

	while (true)
	{
		IntArray myArr(1000);
	}

	return 0;
}
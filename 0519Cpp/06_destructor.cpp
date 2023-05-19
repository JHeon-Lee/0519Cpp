#include <iostream>

using namespace std;

// 소멸자 - 생성자와 마찬가지로 자동으로 포함되있음

class Test
{
public:
	Test()
	{
		cout << "Constructor!" << endl;
	}

	~Test() // 소멸자 - 메모리 해제, 매개변수 사용 불가능
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
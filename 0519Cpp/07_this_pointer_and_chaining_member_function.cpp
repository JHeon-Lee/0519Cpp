#include <iostream>

using namespace std;

#pragma region this Pointer
//class Test1
//{
//	int num;
//
//public:
//	Test1(int n) : num(n)
//	{
//		cout << "num : " << num << endl;
//		cout << "num address : " << &num << endl;
//		cout << "this address : " << this << endl;
//	}
//
//	void ShowTest1Data()
//	{
//		cout << num << endl;
//	}
//
//	Test1* GetThisPointer()
//	{
//		return this; // ��üȭ�� �� �ڽ��� ����Ŵ
//	}
//};
//
//// this�� ����ϴ� ����
//class Test2
//{
//	int a;
//	int b;
//	int c;
//
//public:
//	Test2(){}
//	~Test2(){}
//
//	auto GetA()
//	{
//		cout << this << endl;
//		return a;
//	}
//
//	// void SetA(const int& a) { a = a; } name hiding - a�� �Ű������� �켱 ����
//	void SetA(const int& a) { this->a = a; }
//};
//
//int main()
//{
//	Test1 t1(100); // num address, this address �Ȱ��� ����
//	Test1* ptr1 = t1.GetThisPointer();
//	cout << ptr1 << endl; // this address �� �Ȱ��� ����
//	ptr1->ShowTest1Data(); // 100
//
//	Test1 t2(200);
//
//	return 0;
//}
#pragma endregion

#pragma region chaining member function
class Calc
{
	int value;

public:
	Calc(int value) : value(value){}

	//void Add(int value) { this->value += value; }
	//void Sub(int value) { this->value -= value; }
	//void Mul(int value) { this->value *= value; }
	//void Div(int value) { this->value /= value; }
	//void Mod(int value) { this->value %= value; }

	 // ���������� �ϰ���� --> �� �ڽ��� ���Ͻ�Ų��

	Calc& Add(int value) { this->value += value; return *this; }
	Calc& Sub(int value) { this->value -= value; return *this; }
	Calc& Mul(int value) { this->value *= value; return *this; }
	Calc& Div(int value) { this->value /= value; return *this; }
	Calc& Mod(int value) { this->value %= value; return *this; } // ���� ���۷��� ��ȯ
};

int main()
{
	cout << "a" << "b" << "c" << "d " << endl;

	Calc calc(10);
	calc.Add(5).Div(2).Mul(1); // ������ �켱������ �ȵ��� - ȣ��������
	
	// �͸� ��ü(ananimous object) - ��Ȱ�� �Ұ���
	Calc(20).Add(1).Div(3);

	return 0;
}

#pragma endregion

/*
	homework
	�����ϱ� ����
*/
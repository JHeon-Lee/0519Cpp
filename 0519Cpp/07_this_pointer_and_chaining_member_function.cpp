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
//		return this; // 실체화된 그 자신을 가르킴
//	}
//};
//
//// this를 사용하는 이유
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
//	// void SetA(const int& a) { a = a; } name hiding - a는 매개변수가 우선 잡힘
//	void SetA(const int& a) { this->a = a; }
//};
//
//int main()
//{
//	Test1 t1(100); // num address, this address 똑같이 나옴
//	Test1* ptr1 = t1.GetThisPointer();
//	cout << ptr1 << endl; // this address 와 똑같이 찍힘
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

	 // 연속적으로 하고싶음 --> 나 자신을 리턴시킨다

	Calc& Add(int value) { this->value += value; return *this; }
	Calc& Sub(int value) { this->value -= value; return *this; }
	Calc& Mul(int value) { this->value *= value; return *this; }
	Calc& Div(int value) { this->value /= value; return *this; }
	Calc& Mod(int value) { this->value %= value; return *this; } // 셀프 레퍼런스 반환
};

int main()
{
	cout << "a" << "b" << "c" << "d " << endl;

	Calc calc(10);
	calc.Add(5).Div(2).Mul(1); // 연산자 우선순위는 안따짐 - 호출순서대로
	
	// 익명 개체(ananimous object) - 재활용 불가능
	Calc(20).Add(1).Div(3);

	return 0;
}

#pragma endregion

/*
	homework
	별피하기 게임
*/
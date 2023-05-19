#include <iostream>

using namespace std;

// 생성자

class Fraction
{
	int numerator = 10;
	int denominator = 10;

public:
	Fraction() // 클래스의 이름과 같아야함, 생략 가능, 인스턴스가 만들어지면 반드시 만들어짐
	{
		cout << "Constructor!" << endl;
	}

	Fraction(int a, int b) // 매개변수를 넣은 생성자도 가능
	{
		cout << "Constructor2" << endl;
	}

	Fraction(const Fraction& data) // 복사 생성자
	{
		cout << "Constructor3" << endl;
	}
};

int main()
{
	Fraction frac;
	Fraction frac1(1.0, 2);
	// Fraction frac2{ 1.0, 2 };
	Fraction frac3(std::move(frac1));	// 무브(이동) 생성자

	return 0;
}

// 생성자에 초기화를 넣어두면 편함
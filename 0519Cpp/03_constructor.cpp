#include <iostream>

using namespace std;

// ������

class Fraction
{
	int numerator = 10;
	int denominator = 10;

public:
	Fraction() // Ŭ������ �̸��� ���ƾ���, ���� ����, �ν��Ͻ��� ��������� �ݵ�� �������
	{
		cout << "Constructor!" << endl;
	}

	Fraction(int a, int b) // �Ű������� ���� �����ڵ� ����
	{
		cout << "Constructor2" << endl;
	}

	Fraction(const Fraction& data) // ���� ������
	{
		cout << "Constructor3" << endl;
	}
};

int main()
{
	Fraction frac;
	Fraction frac1(1.0, 2);
	// Fraction frac2{ 1.0, 2 };
	Fraction frac3(std::move(frac1));	// ����(�̵�) ������

	return 0;
}

// �����ڿ� �ʱ�ȭ�� �־�θ� ����
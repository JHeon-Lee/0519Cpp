#include <iostream>

using namespace std;

class Data
{
	int a;
	int b;
	int c;

public:
	/*Data(int aData, int bData, int cData)
	{
		a = aData;
		b = bData;
		c = cData;
	}  ��ȿ�����̰� ����, a,b,c�� const�� �ʱ�ȭ ����Ŵ
	*/
	// �׷��� ���� ����� �� ȿ����
	Data(int aData, int bData, int cData)
		: a(aData), b(bData), c(a - cData)
	{	}

	void print()
	{
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
};

int main()
{
	Data data(20, 20, 20);
	
	data.print();

	return 0;
}
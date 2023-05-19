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
	}  비효율적이고 느림, a,b,c가 const면 초기화 못시킴
	*/
	// 그래서 밑의 방법이 더 효율적
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
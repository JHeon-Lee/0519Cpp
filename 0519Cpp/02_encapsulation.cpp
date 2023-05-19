#include <iostream>

using namespace std;

class Data
{
	int hp;
	int attack;
	float exp;

public:
	void SetData(int hpData, int attackData, float expData) // �����Լ� - ��� �ʱ�ȭ�� ���
	{
		hp = hpData;
		attack = attackData;
		exp = expData;
	}

	void SetData(Data data)
	{
		hp = data.hp;
		attack = data.attack;
		exp = data.exp;
	}

	int GetHp() { return hp; } // �����Լ� - private ���ڵ��� ȣ���ϴµ� ���
	int GetAttack() { return attack; }
};

// Ŭ���� �ȿ� ������ �������� ĸ��ȭ �ϰ�, ��ü�� ��ü���� �������� �� ������ִ°� �߿�.
class FruitSeller
{
	int applePrice;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		applePrice = price;
		numOfApples = num;
		myMoney = money;
	}

	int saleApples(int money)
	{
		int num = money / applePrice;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSaleResult()
	{
		cout << "���� ��� : " << numOfApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money) // ��ü�� ����
	{
		numOfApples += seller.saleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "��� ���� : " << numOfApples << endl << endl;
	}
};

int main()
{
	Data data;

	data.SetData(100, 10, 0);

	cout << data.GetHp() << endl;

	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer;
	buyer.InitMembers(5000);

	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ��� ��Ȳ" << endl;
	seller.ShowSaleResult();

	cout << "���� ������ ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}
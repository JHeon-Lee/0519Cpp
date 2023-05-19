#include <iostream>

using namespace std;

class Data
{
	int hp;
	int attack;
	float exp;

public:
	void SetData(int hpData, int attackData, float expData) // 세터함수 - 멤버 초기화에 사용
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

	int GetHp() { return hp; } // 게터함수 - private 인자들을 호출하는데 사용
	int GetAttack() { return attack; }
};

// 클래스 안에 연관된 정보들을 캡슐화 하고, 객체와 객체간의 이음새를 잘 만들어주는게 중요.
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
		cout << "남은 사과 : " << numOfApples << endl;
		cout << "판매 수익 : " << myMoney << endl << endl;
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

	void BuyApples(FruitSeller& seller, int money) // 객체간 연결
	{
		numOfApples += seller.saleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "현재 잔액 : " << myMoney << endl;
		cout << "사과 개수 : " << numOfApples << endl << endl;
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

	cout << "과일 판매자 현황" << endl;
	seller.ShowSaleResult();

	cout << "과일 구매자 현황" << endl;
	buyer.ShowBuyResult();

	return 0;
}
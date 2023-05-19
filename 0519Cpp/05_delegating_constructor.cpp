#include <iostream>

using namespace std;

// 위임 생성자

class Student1
{
	int id;
	string name;

public:
	Student1(const int& id, const string& name)
		: id(id), name(name)
	{}

	Student1(const std::string& name) // 특정 멤버만 초기화 - 위임생성자
		: Student1(0, name)
	{}
};

class Student2
{
	int id;
	string name;

public:
	Student2(const int& id, const string& name)
	{
		initialize(id, name); // 밑의 함수를 써서 초기화하는 형식
	}
	
	Student2(const string& name)
	{
		initialize(0, name);
	}

	void initialize(const int& id, const string& name) // 모든 인수 초기화
	{

	}
};

// 한 프로그램에 세가지 방법 중 하나만 쓰는게 좋음

int main()
{


	return 0;
}
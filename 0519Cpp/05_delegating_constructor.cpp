#include <iostream>

using namespace std;

// ���� ������

class Student1
{
	int id;
	string name;

public:
	Student1(const int& id, const string& name)
		: id(id), name(name)
	{}

	Student1(const std::string& name) // Ư�� ����� �ʱ�ȭ - ���ӻ�����
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
		initialize(id, name); // ���� �Լ��� �Ἥ �ʱ�ȭ�ϴ� ����
	}
	
	Student2(const string& name)
	{
		initialize(0, name);
	}

	void initialize(const int& id, const string& name) // ��� �μ� �ʱ�ȭ
	{

	}
};

// �� ���α׷��� ������ ��� �� �ϳ��� ���°� ����

int main()
{


	return 0;
}
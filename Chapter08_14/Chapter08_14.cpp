#include <iostream>



class Fruit
{
public:
	enum class FruitType		//enum�� �ȿ� �־���, Ư�� Ŭ������ �����
	{							//�̳�Ŭ����, ����ü�� ����
	APPLE, BANANA, CHERRY,
	};
private:
		FruitType m_type;

public:
	Fruit(FruitType type)
		:m_type(type)
	{

	}
	FruitType getType()
	{
		return m_type;
	}
};

int main()
{
	Fruit apple(Fruit::FruitType::APPLE);	//APPLE�� �Ҽ��� ǥ������

	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		std::cout << "Apple" << std::endl;
	}
	return 0;
}
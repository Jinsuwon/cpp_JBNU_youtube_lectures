//#include <iostream>
// 동적 바인딩
// 동적 바인딩 3조건: 상속, 기본 클래스 포인터 또는 참조자, 가상 함수
// 
//class Entity
//{
//protected:
//	int x;
//	int y;
//
//public: 
//	Entity(int x, int y)
//		:x{x},y{y}{ }
//	virtual ~Entity()
//	{
//		std::cout << "Entity Destructor Called" << std::endl;
//	}
//
//	virtual void Move(int dx, int dy)
//	{
//		x += dx;
//		y += dy;
//	}
//
//	void PrintPosition()
//	{
//		std::cout << x << "," << y << std::endl;
//	}
//};
//
//class Player : public Entity
//{
//private:
//	int xp;
//	int hp;
//
//public:
//	Player(int x,int y, int hp, int xp)
//		:Entity{x,y}, hp{hp},xp{xp}{ }
//	virtual ~Player()
//	{
//		std::cout << "Player Destructor Called" << std::endl;
//	}
//
//	virtual void Move(int dx, int dy) // 오버라이드 하는 쪽이든 아니든 'virtual'을 붙혀주는 것을 습관화하자!
//	{
//		x += dx * 2;
//		y += dy * 2;
//	}
//};
//
//int main()
//{
//	//Player e{ 1, 1, 10, 10 };
//	//e.PrintPosition();
//
//	//e.Move(2, 1);
//	//e.PrintPosition();  
//
//	Entity* e = new Player{ 1,1,10,10 };
//	
//	e->Move(2, 2); // 동적 바인딩의 3가지 조건이 완성되어, Player의 Move함수가 실행됨.
//	e->PrintPosition();
//
//	delete e;
//
//	Player p{ 3,3,20,20 };
//	Entity& ref = p;
//
//	ref.Move(2, 2);
//	ref.PrintPosition();
//
//}


// override 지정자
//#include <iostream>
//class Entity
//{
//protected:
//	int x;
//	int y;
//
//public:
//	Entity(int x, int y)
//		:x{ x }, y{ y } {
//	}
//	virtual ~Entity()
//	{
//		std::cout << "Entity Destructor Called" << std::endl;
//	}
//
//	virtual void Move(int dx, int dy)
//	{
//		x += dx;
//		y += dy;
//	}
//
//	virtual void PrintPosition() const
//	{
//		std::cout << "Entity: "<< x << "," << y << std::endl;
//	}
//};
//
//class Player : public Entity
//{
//private:
//	int xp;
//	int hp;
//
//public:
//	Player(int x, int y, int hp, int xp)
//		:Entity{ x,y }, hp{ hp }, xp{ xp } {
//	}
//	virtual ~Player()
//	{
//		std::cout << "Player Destructor Called" << std::endl;
//	}
//
//	virtual void Move(int dx, int dy) // 오버라이드 하는 쪽이든 아니든 'virtual'을 붙혀주는 것을 습관화하자!
//	{
//		x += dx * 2;
//		y += dy * 2;
//	}
//
//	virtual void PrintPosition() const override // 오버라이드 할꺼면 표시를 붙혀주자
//	{
//		std::cout << "Player: " << x << "," << y << std::endl;
//	}
//};
//
//int main()
//{
//	//Entity* e = new Player{ 1,1,10,10 };
//	//e->PrintPosition(); // Player: 1,1
//
//
//	Player p{ 1,1,10,10 };
//	const Entity& e = p; // 
//
//	e.PrintPosition(); // 컴파일러는 const e가 printposition을 통해 멤버변수를 바꾸는지 안 바꾸는지
//	//모르기 때문에 printposion함수 정의에 const를 붙혀주도록 하자.
//	//또한 printposition은 오버라이드 함으로 virtual과 const 모두를 기본, 유도클래스 함수에 적어주자 
//
//}


//// final 지정자: 기본 클래스 혹은 함수가 밑에서 오버라이드 되지 않도록하는 지정자
//#include <iostream>
//class Entity final // 유도 클래스인 Player에서 오류가 일어나는 것을 볼 수 있다!
//{
//protected:
//	int x;
//	int y;
//
//public:
//	Entity(int x, int y)
//		:x{ x }, y{ y } {
//	}
//	virtual ~Entity()
//	{
//		std::cout << "Entity Destructor Called" << std::endl;
//	}
//
//	virtual void Move(int dx, int dy)
//	{
//		x += dx;
//		y += dy;
//	}
//
//	virtual void PrintPosition() const
//	{
//		std::cout << "Entity: " << x << "," << y << std::endl;
//	}
//};
//
//class Player : public Entity
//{
//private:
//	int xp;
//	int hp;
//
//public:
//	Player(int x, int y, int hp, int xp)
//		:Entity{ x,y }, hp{ hp }, xp{ xp } {
//	}
//	virtual ~Player()
//	{
//		std::cout << "Player Destructor Called" << std::endl;
//	}
//
//	virtual void Move(int dx, int dy) // 오버라이드 하는 쪽이든 아니든 'virtual'을 붙혀주는 것을 습관화하자!
//	{
//		x += dx * 2;
//		y += dy * 2;
//	}
//
//	virtual void PrintPosition() const override // 오버라이드 할꺼면 표시를 붙혀주자
//	{
//		std::cout << "Player: " << x << "," << y << std::endl;
//	}
//};
//
//int main()
//{
//	Player p{ 1,1,10,10 };
//	const Entity& e = p; // 
//	 
//}


//추상 클래스, 순수 가상 함수
//
//#include <iostream>
//class Entity
//{
//protected:
//	int x;
//	int y;
//
//public:
//	Entity(int x, int y)
//		:x{ x }, y{ y } {
//	}
//	virtual ~Entity()
//	{
//		std::cout << "Entity Destructor Called" << std::endl;
//	}
//
//	virtual void Move(int dx, int dy) = 0;
//	// 순수 가상 함수를 가지게 되면 그 클래스는 추상클래스가 된다.
//	// 그럼 객체를 만들 수 없게 된다.
//
//	virtual void PrintPosition() const
//	{
//		std::cout << "Entity: " << x << "," << y << std::endl;
//	}
//};
//
//class Player : public Entity
//{
//private:
//	int xp;
//	int hp;
//
//public:
//	Player(int x, int y, int hp, int xp)
//		:Entity{ x,y }, hp{ hp }, xp{ xp } {
//	}
//	virtual ~Player()
//	{
//		std::cout << "Player Destructor Called" << std::endl;
//	}
//
//	//유도 클래스들은 반드시 기본 클래스의 순수 가상함수를 오버라이드 해야 함.
//	virtual void Move(int dx, int dy) override // move함수는 오버라이드 할 수 밖에 없다
//	{
//		x += dx * 2;
//		y += dy * 2;
//	}
//	// 유도 클래스에서 특정 함수 구현을 '강제'하는 의미를 가짐.
//
//
//	virtual void PrintPosition() const override 
//	{
//		std::cout << "Player: " << x << "," << y << std::endl;
//	}
//};
//
//int main()
//{
//	Player{ 1,1,10,10 }; // Entity의 Move를 순수 가상 함수로 만들었기에
//	// 유도클래스에서 그 move함수의 몸통을 구현해야 구상클래스로 객체를 생성할 수 있게 된다
//
//	Entity* ePtr = new Player{ 1,1,10,10 };
//	//추상(기본)클래스의 포인터/참조자를 사용해 오버라이딩 된 함수를 동적 바인딩 할 수 있음.
//}


// 인터페이스 클래스: 모든 함수를 순수 가상 함수만으로 가진 추상 클래스
#include <iostream>
class Entity
{
protected:
	int x;
	int y;

public:
	Entity(int x, int y)
		:x{ x }, y{ y } {
	}
	virtual ~Entity()
	{
		std::cout << "Entity Destructor Called" << std::endl;
	}

	virtual void Move(int dx, int dy) = 0;
	virtual void PrintPosition() const = 0;
};

class Player : public Entity
{
private:
	int xp;
	int hp;

public:
	Player(int x, int y, int hp, int xp)
		:Entity{ x,y }, hp{ hp }, xp{ xp } {
	}
	virtual ~Player()
	{
		std::cout << "Player Destructor Called" << std::endl;
	}

	virtual void Move(int dx, int dy) // 오버라이드 하는 쪽이든 아니든 'virtual'을 붙혀주는 것을 습관화하자!
	{
		x += dx * 2;
		y += dy * 2;
	}

	virtual void PrintPosition() const override // 오버라이드 할꺼면 표시를 붙혀주자
	{
		std::cout << "Player: " << x << "," << y << std::endl;
	}
};

int main()
{
	//Entity* e = new Player{ 1,1,10,10 };
	//e->PrintPosition(); // Player: 1,1


	Player p{ 1,1,10,10 };
	const Entity& e = p; // 

	e.PrintPosition(); // 컴파일러는 const e가 printposition을 통해 멤버변수를 바꾸는지 안 바꾸는지
	//모르기 때문에 printposion함수 정의에 const를 붙혀주도록 하자.
	//또한 printposition은 오버라이드 함으로 virtual과 const 모두를 기본, 유도클래스 함수에 적어주자 

}
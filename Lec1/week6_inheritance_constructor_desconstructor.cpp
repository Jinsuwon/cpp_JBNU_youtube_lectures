#include<iostream>

// 출력순서: 기본 클래스 -> 유도 클래스
// 소멸순서: 유도 클래스 -> 기본 클래스 

//class Base
//{
//private:
//	int value;
//public:
//	Base()
//		:value{0}
//	{
//		std::cout << "Base No Argument Constructor" << std::endl;
//	}
//	Base(int val)
//		:value{ val }
//	{
//		std::cout << "Base One Argument Constructor" << std::endl;
//	}
//	~Base()
//	{
//		std::cout << "Base Destructor" << std::endl;
//	}
//};
//
//class Derived: public Base
//{
//private:
//	int doubledValue;
//
//public:
//	Derived()
//		:doubledValue{0}
//	{
//		std::cout << "Derived No Argument Constructor" << std::endl;
//	}
//	Derived(int val)
//		: Base{ val }, doubledValue {2 * val}
//	{
//		std::cout << "Derived One Argument Constructor" << std::endl;
//	}
//	~Derived()
//	{
//		std::cout << "Derived Destructor" << std::endl;
//	}
//};
//
//int main()
//{
//	//Base b1;
//	//Base b2{ 100 };
//
//	//Derived d1;
//	Derived d2{ 100 }; // 기본클래스에 인자가 없는 애가 생성이 됨
//}



//복사 생성자
//class Base
//{
//private:
//	int value;
//public:
//	Base()
//		:value{ 0 }
//	{
//		std::cout << "Base No Argument Constructor" << std::endl;
//	}
//	Base(int val)
//		:value{ val }
//	{
//		std::cout << "Base One Argument Constructor" << std::endl;
//	}
//	Base(const Base& other)
//		:value{ other.value }
//	{
//
//	}
//	~Base()
//	{
//		std::cout << "Base Destructor" << std::endl;
//	}
//};
//
//class Derived : public Base
//{
//private:
//	int doubledValue;
//
//public:
//	Derived()
//		:doubledValue{ 0 }
//	{
//		std::cout << "Derived No Argument Constructor" << std::endl;
//	}
//	Derived(int val)
//		: Base{ val }, doubledValue{ 2 * val }
//	{
//		std::cout << "Derived One Argument Constructor" << std::endl;
//	}
//	Derived(const Derived& other)
//		: Base{ other }, doubledValue {other.doubledValue}
//	{
//
//	}
//	~Derived()
//	{
//		std::cout << "Derived Destructor" << std::endl;
//	}
//};
//
//int main()
//{	
//	Derived d1{ 100 };
//	Derived d2{ d1 }; 
//}


// 정적 바인딩을 알아보자
//class Entity
//{
//protected:
//	int x;
//	int y;
//public:
//	Entity(int x, int y)
//		:x{x}, y{y}{ }
//	
//	void ShowPosition()
//	{
//		std::cout << "[" << x << "," << y << "]" << std::endl;
//	}
//
//	void Talk()
//	{
//		std::cout << "Hello" << std::endl;
//	}
//};
//
//class Player :public Entity
//{
//private:
//	int hp;
//	int xp;
//	int speed;
//
//public:
//	Player(int x, int y, int speed)
//		:Entity{x,y}, speed{speed}{ }
//	void Move(int dx, int dy)
//	{
//		x += dx; y += dy;
//	}
//
//	void Talk()
//	{ 
//		std::cout << "Player" << std::endl;
//	}
//};
//
//int main()
//{
//	//Player p{ 5,5,10 };
//	//p.Talk(); // Player
//	//
//	//Entity e{ 3,3 };
//	//e.Talk(); // Hello
//
//	//e = p;
//	//e.Talk(); // Hello
//	//
//	//Entity* eptr = new Player{ 1,1,2 };
//	//eptr->Talk(); // Hello
//
//	Entity p = Player{ 1,1,10 };
//	Player p2 = Player{ 1,1,10 };
//
//
//	Entity* ePtr = new Player{ 1,1,1 };
//	Entity& eRef = p2;
//
//	// 기본 클래스는 유도클래스로 가능, 유도클래스는 기본 클래스로 불가능 
//}



//class Entity
//{
//protected:
//	int x;
//	int y;
//public:
//	Entity(int x, int y)
//		:x{ x }, y{ y } {
//	}
//
//	void ShowPosition()
//	{
//		std::cout << "[" << x << "," << y << "]" << std::endl;
//	}
//
//	void Talk()
//	{
//		std::cout << "Hello" << std::endl;
//	}
//};
//
//class Player :public Entity
//{
//private:
//	int hp;
//	int xp;
//	int speed;
//
//public:
//	Player(int x, int y, int speed)
//		:Entity{ x,y }, speed{ speed } {}
//
//	void Move(int dx, int dy)
//	{
//		x += dx; y += dy;
//		Entity::Talk(); // Entity안에 있는 Talk를 호출하라!
//	}
//
//	void Talk()
//	{
//		std::cout << "Player" << std::endl;
//	}
//};
//
//int main()
//{
//	Player p{ 1,1,10 };
//	p.Move(1, 1); // Hello
//}


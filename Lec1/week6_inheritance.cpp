#include <iostream>
 
//class Entity 
//{
//protected:
//	int x;
//	int y;
//
//public:
//	Entity(int x, int y)
//		:x{ x }, y{ y } {}
//	
//	void ShowPosition()
//	{
//		std::cout << "[" << x << ", " << y << "]" << std::endl;
//	}
//	void Talk()
//	{
//		std::cout << "Hello." << std::endl;
//	}
//};
//
//class Player : public Entity
//{
//private:
//	int hp;
//	int xp;
//	int speed;
//
//public:
//	Player(int x, int y, int speed)
//		: Entity{x,y}, speed{speed}{ }
//	void Move(int dx, int dy)
//	{
//		x += dx; y += dy;
//	}
//};
// 
//int main()
//{
//	Entity e{ 1,1 };
//	e.ShowPosition();
//	e.Talk();
//
//	Player p{ 5,5,10 };
//	p.ShowPosition();
//	p.Talk();
//}


//class Base
//{
//public:
//	int a;
//
//protected:
//	int b;
//	
//private:
//	int c;
//};
//
//class Derived : public Base
//{
//public:
//	int d;
//};
//
//int main()
//{
//	Derived d;
//	d.a = 10;
//
//	std::cout << sizeof(int) << std::endl; // 4
//	std::cout << sizeof(Base) << std::endl; // 12 
//	std::cout << sizeof(Derived) << std::endl; // 16
//}
//


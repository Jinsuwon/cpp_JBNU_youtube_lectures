#include <iostream>

//연산자 오버로딩
//class Number
//{
//private:
//	int val;
//
//public:
//	Number(int val)
//		:val{val} {}
//
//	Number Add(Number b)
//	{
//		return Number{ val + b.val };
//	}
//
//	int GetValue()
//	{
//		return val;
//	}
//
//	void Print()
//	{
//		std::cout << val << std::endl;
//	}
//};
//
//Number Add(Number n1, Number n2) // 외부함수
//{
//	return Number{ n1.GetValue() + n2.GetValue() };
//}
//
//
//int main()
//{
//	Number n1{ 5 };
//	Number n2{ 10 };
//
//	Number n3=n1.Add(n2);
//	n3.Print();
//
//	Number n4 = Add(n1, n2);
//	n4.Print();
//}


// operator+ 를 알아보자
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//
//public:
//	Point(int x=0, int y=0)
//		:xpos{x},ypos{y}{ }
//
//	void ShowPosition() const
//	{
//		std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
//	}
//
//	// operator+는 C++에서 연산자 오버로딩을 위해 미리 정해진 문법 함수 이름임.
//	// 함수이름 'operator+'만 c++ 문법이고, 매개변수와 반환형은 사용자가 설계함.
//	//* 복사의 비용을 낮추기 위해, 매개변수의 값을 바꿀 의도가 없으니 const로 매개변수로 받는다.
//	// 단순계산을 위한거지, 멤버변수의 값을 변경할 의도는 없으므로 const를 붙혀준다.
//	// p3라는 객체로 우리는 연산하고 싶기 때문에 Point로 반환형을 지정해준다.
//	Point operator+(const Point& p) const 
//	{
//		std::cout << "+operator called" << std::endl;
//		return Point{ xpos + p.xpos, ypos + p.ypos };
//	}
//};
//
//
//int main()
//{
//	Point p1{ 2,3 };
//	Point p2{ 3,4 };
//
//	Point p3= p1 + p2; //p1.operator+(p2) -> 이렇게 컴파일러는 인식함. 
//	p3.ShowPosition();
//} 


//operator==를 알아보자
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//
//public:
//	Point(int x = 0, int y = 0)
//		:xpos{ x }, ypos{ y } {
//	}
//
//	void ShowPosition() const
//	{
//		std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
//	}
//
//	Point operator+(const Point& p) const
//	{
//		std::cout << "+operator called" << std::endl;
//		return Point{ xpos + p.xpos, ypos + p.ypos };
//	}
//
//	bool operator==(const Point& p) const // '==' 연산자는 맞냐 아니냐를 따지므로 bool로 반환해준다
//	{
//		if (xpos == p.xpos && ypos == p.ypos)
//			return true;
//		else
//			return false;
//	}
//
//};
//
//
//int main()
//{
//	const Point p1{ 2,3 };
//	Point p2{ 2,3 };
//
//	p1 == p2;
//
//	if (p1 == p2) // p1.operator==(p2)로 인식함
//	{
//		std::cout << "Same!" << std::endl;
//	}
//	
//}



//단항 연산자 오버로딩을 알아보자
// *이항 연산자와 다른점은 매개변수를 받냐 안 받냐로 나눌수있다.
// *이항연산자: 매개변수 1개, 단항 연산자: 매개변수 0개

//class Point
//{
//private:
//	int xpos;
//	int ypos;
//
//public:
//	Point(int x = 0, int y = 0)
//		:xpos{ x }, ypos{ y } {
//	}
//
//	void ShowPosition() const
//	{
//		std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
//	}
//
//	Point operator+(const Point& p) const
//	{
//		std::cout << "+operator called" << std::endl;
//		return Point{ xpos + p.xpos, ypos + p.ypos };
//	}
//
//	bool operator==(const Point& p) const // '==' 연산자는 맞냐 아니냐를 따지므로 bool로 반환해준다
//	{
//		if (xpos == p.xpos && ypos == p.ypos)
//			return true;
//		else
//			return false;
//	}
//
//	Point operator-() const
//	{
//		return Point{ -xpos, -ypos };
//	}
//
//	Point operator*(int val) const
//	{
//		return Point{ xpos * val, ypos * val };
//	}
//

//};
//
//
//int main()
//{
//	Point p1{ 2,3 };
//	Point p2{ 4,3 };
//
//	Point p3 = -p1; // p1.operator();
//	p3.ShowPosition(); // (-2,-3)
//
//	Point p4= p1 + p2; // 컴파일러는 p1.operator+(p2) or operator(p1,p2) 를 찾는다
//	p4.ShowPosition(); //(6,6)
//
//	Point p5 = p1 * 3;
//	p5.ShowPosition(); // (6,9)
//
//}


// 전역함수 오버로딩을 알아보자
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//
//public:
//	Point(int x = 0, int y = 0)
//		:xpos{ x }, ypos{ y } {
//	}
//
//	void ShowPosition() const
//	{
//		std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
//	}
//
//	Point operator+(const Point& p) const
//	{
//		std::cout << "+operator called" << std::endl;
//		return Point{ xpos + p.xpos, ypos + p.ypos };
//	}
//
//	bool operator==(const Point& p) const // '==' 연산자는 맞냐 아니냐를 따지므로 bool로 반환해준다
//	{
//		if (xpos == p.xpos && ypos == p.ypos)
//			return true;
//		else
//			return false;
//	}
//
//	Point operator-() const
//	{
//		return Point{ -xpos, -ypos };
//	}
//
//	Point operator*(int val) const
//	{
//		std::cout << "class *" << std::endl;
//
//		return Point{ xpos * val, ypos * val };
//	}
//
//	friend Point operator*(int val, const Point& rhs); // friend, 클래스 안에 함수가 되어있지만, 이 함수는 멤버함수 아닌 전역함수이다!
//
//};
//
//
//Point operator*(int val, const Point& rhs)
//{
//	std::cout << "friend" << std::endl;
//	return Point{ rhs.xpos * val, rhs.ypos * val };
//}
//
//
//int main()
//{
//	Point p1{ 2,3 };
//
//	Point p2 = p1 * 3;
//	p2.ShowPosition();
//
//	Point p3 = 4 * p1;
//	p3.ShowPosition();
//
//	//Point p3 = 3 * p1;
//
//	//p3.ShowPosition();
//
//}

 
//스트림 삽입을 알아보자
//class Point
//{
//private:
//	int xpos;
//	int ypos;
//
//public:
//	Point(int x = 0, int y = 0)
//		:xpos{ x }, ypos{ y } {} 
//
//	void ShowPosition() const
//	{
//		std::cout << "[" << xpos << "," << ypos << "]" << std::endl;
//	}
//
//	friend std::ostream& operator<<(std::ostream& os, const Point& rhs)  // cout은 복사가 안되게끔 표준화되어 있기에, ostream을 참조자로 받아줘야함
//	{ // cout은 변수 자체의 복사가 안 되기 때문에 참조자를 꼭 넣어주자
//		// 참조자를 넣으면 복사를 하지 않고 원래 stream 객체를 그대로 가르킬 수 있다
//		// 함수의 반환을 std::ostream 형태로도 가능하다
//		os/*(==cout)*/ << "[" << rhs.xpos << "," << rhs.ypos << "]" << std::endl;
//		return os;
//	}
//
//	friend std::istream& operator>>(std::istream& is, Point& rhs)
//	{
//		int x = 0;
//		int y = 0;
//		is >> x >> y; // is에 x,y를 받는다
//		rhs = Point{ x,y }; // rhs를 참조자로 받았기 때문에 멤버변수 p1의 값을 바꿀 수 있다!
//		return is;
//	}
//};
//
//class MyOstream
//{
//public:
//	void operator<<(int val)
//	{
//		printf("%d \n", val);
//	}
//};
//
//
//int main()
//{
//	//MyOstream mycout;
//	//mycout.operator<<(10); // 10
//	//mycout << 10; // 10
//
//	//std::cout << 10; // cout도 어느 클래스의 객체였던 것이다! operator<<처럼 '<<'이라는 스트림 삽입연산자가 오버로딩 되어있었다
//
//
//	//객체 자체를 출력해보자
//	Point p1{ 2,3 };
//	Point p2{ 3,4 };
//	//std::cout << p1;  // cout.operator<<(p1) <-- x
//					    // operator<<(cout,p1) <-- o
//
//	//std::cout << p1 << p2 << std::endl; // 연쇄출력이 필요하다
//	
//
//	std::cin >> p1; // operator>>(cin,p1);
//	std::cout << p1;
//}


// 중요 !대입 연산자 오버로딩, 깊은복사를 알아보자!
//class Array
//{
//private:
//	int* ptr;
//	int size;
//
//public:
//	Array(int val, int size)
//		:size{size}
//	{
//		ptr = new int[size];
//		for (int i = 0; i < size; i++)
//		{
//			ptr[i] = val + i; 
//		}
//	}
//
//	int GetSize() const
//	{
//		return size;
//	}
//
//	int GetValue(int index) const
//	{
//		if (index < size && index >= 0)
//			return ptr[index];
//
//		else
//			std::cout << "Out of range!" << std::endl;
//	}
//
//
//	Array& operator=(const Array& rhs) // a2.operator=(a1)
//	{
//		if (this == &rhs)
//			return *this; // 대입 연산을 진행할 때, 자기 자신을 대입 연산하게 되면 바로 빠져나옴
//
//		delete[] ptr; // a2=a1을 할 때 a2가 동적 할당한 메모리를 해제시켜야함. a2는 이제 새로운 동적 메모리 주소를 할당할거니깐
//		
//		ptr = new int[rhs.size]; // a1과 같은 사이즈만큼 a2도 새로 동적할당해줌
//		size = rhs.size;
//		for (int i = 0; i < size; i++)
//		{
//			ptr[i] = rhs.ptr[i];
//		}
//
//		return *this; // a2에 새로운 동적할당을 해주는것과 마찬가지이므로 this가 가르키는 객체가 반환돼야함
//	}
//
//
//	~Array()
//	{
//		delete[] ptr; // 동적메모리 해제
//	}
//	
//};
//
//int main()
//{
//	Array a1{ 5,10 };
//
//	//std::cout << a1.GetValue(3) << std::endl;
//
//	Array a2{ 3,5 };
//
//	a2 = a1; // a1메모리 중복되어 해제되고, a2는 해제를 안해서 메모리 누수 발생
//	std::cout << a2.GetValue(0) << std::endl;
//}


// 첨자 연산자를 알아보자
// *경계 검사: 코드가 heap 메모리 상에 할당해놓은 메모리 구역을 벗어나는지 안 벗어나는지 확인하는 것
//class Array
//{
//private:
//	int* ptr;
//	int size;
//
//public:
//	Array(int val, int size)
//		:size{ size }
//	{
//		ptr = new int[size];
//		for (int i = 0; i < size; i++)
//		{
//			ptr[i] = val + i;
//		}
//	}
//
//	int GetSize() const
//	{
//		return size;
//	}
//
//	Array& operator=(const Array& rhs) 
//	{
//		if (this == &rhs)
//			return *this; 
//
//		delete[] ptr; 
//
//		ptr = new int[rhs.size];
//		size = rhs.size;
//		for (int i = 0; i < size; i++)
//		{
//			ptr[i] = rhs.ptr[i];
//		}
//
//		return *this; 
//	}
//
//	~Array()
//	{
//		delete[] ptr; // 동적메모리 해제
//	}
//
//	int& operator[](int index)
//	{
//		if (index < 0 || index >= size)
//		{
//			std::cout << "Out of range!" << std::endl;
//			exit(1); // 코드는 정상 종료면 'exit(0)'으로 끝난다. 여기선 코드가 오류라고 볼 수 있기에 exit(1)로 끝낸다
//		}
//		return ptr[index];
//	}
//};
//
//int main()
//{
//	Array a1{ 5,10 };
//
//	std::cout << a1[1]<< std::endl; // a1.operator[](0) 으로 해석한다
//
//	a1[0]=10; // operaotrp[]를 참조자로 반환해줘서 가능. 참조자가 아니라면 '5=10;' 이라는 코드가 돼버리는 꼴
//	std::cout << a1[0] << std::endl;
//}


// 첨자연산자의 const 활용을 알아보자
class Array
{
private:
	int* ptr;
	int size;

public:
	Array(int val, int size)
		:size{ size }
	{
		ptr = new int[size];
		for (int i = 0; i < size; i++)
		{
			ptr[i] = val + i;
		}
	}

	int GetSize() const
	{
		return size;
	}

	Array& operator=(const Array& rhs)
	{
		if (this == &rhs)
			return *this;

		delete[] ptr;

		ptr = new int[rhs.size];
		size = rhs.size;
		for (int i = 0; i < size; i++)
		{
			ptr[i] = rhs.ptr[i];
		}

		return *this;
	}

	~Array()
	{
		delete[] ptr; // 동적메모리 해제
	}

	int& operator[](int index) 
	{
		if (index < 0 || index >= size)
		{
			std::cout << "Out of range!" << std::endl;
			exit(1); // 코드는 정상 종료면 'exit(0)'으로 끝난다. 여기선 코드가 오류라고 볼 수 있기에 exit(1)로 끝낸다
		}
		return ptr[index];
	}

	int operator[](int index) const
	{
		if (index < 0 || index >= size)
		{
			std::cout << "Out of range!" << std::endl;
			exit(1); // 코드는 정상 종료면 'exit(0)'으로 끝난다. 여기선 코드가 오류라고 볼 수 있기에 exit(1)로 끝낸다
		}
		return ptr[index];
	}
};

int main()
{
	const Array a1{ 5,10 }; // 함수: int operator[](int index) const 를 호출
	Array a2{ 3,5 };
	a2[0] = 10; // 함수: int& operator[](int index) 를 호출


	// 첨자 연산자를 할 때는 함수 선언을 2가지(일반형, const형) 2가지로 해줘야 한다!
	std::cout << a1[0] << std::endl;
	std::cout << a2[0] << std::endl;
} 



//배열에 대한 복사 및 대입을 차단하고 싶을 경우에, 해당 생성자를 private 선언 또는 delete로 접근 불가능하게 할 수 있음
class Array
{
private:
	int* ptr;
	int size;
	Array(const Array& other);

public:
	Array& operator=(const Array& rhs) = delete;


	Array(int val, int size)
		:size{ size }
	{
		ptr = new int[size];
		for (int i = 0; i < size; i++)
		{
			ptr[i] = val + i;
		}
	}

	int GetSize() const
	{
		return size;
	}

	Array& operator=(const Array& rhs)
	{
		if (this == &rhs)
			return *this;

		delete[] ptr;

		ptr = new int[rhs.size];
		size = rhs.size;
		for (int i = 0; i < size; i++)
		{
			ptr[i] = rhs.ptr[i];
		}

		return *this;
	}

	~Array()
	{
		delete[] ptr; // 동적메모리 해제
	}

	int& operator[](int index)
	{
		if (index < 0 || index >= size) 
		{
			std::cout << "Out of range!" << std::endl;
			exit(1); // 코드는 정상 종료면 'exit(0)'으로 끝난다. 여기선 코드가 오류라고 볼 수 있기에 exit(1)로 끝낸다
		}
		return ptr[index];
	}

	int operator[](int index) const
	{
		if (index < 0 || index >= size)
		{
			std::cout << "Out of range!" << std::endl;
			exit(1); // 코드는 정상 종료면 'exit(0)'으로 끝난다. 여기선 코드가 오류라고 볼 수 있기에 exit(1)로 끝낸다
		}
		return ptr[index];
	}
};

int main()
{
	const Array a1{ 5,10 };
	Array a2{ 3,5 };

	a2 = a1; // a2.operator=(a1);
	Array a3 = a1;

}
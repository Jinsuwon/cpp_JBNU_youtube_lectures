#include <iostream> // 전처리기: preprocessor
#include <stdio.h>
//using namespace std;



//namespace A
//{ 
//	void function()
//	{
//		std::cout << "Function 1";
//	}
//}
//
//namespace B
//{
//	void function()
//	{
//		std::cout << "Function 2";
//	}
//
//}
//
//void print_hello()
//{
//	std::cout << "hello" << std::endl;
//}


//int main_week1_week2()
//{
	//std::cout << "lecture1";
	//A::function();
	//B::function();
	
	/*int age = 37;
	float height = 186.2f;
	std::cout << "My age is " << age << " Hello \n" << std::endl;
	std::cout << "My height is " << height;*/


	/*char age = 26;
	char shose = 272;
	int c = 10;*/
	
	
	/*
	int selection = 2;

	switch (selection)
	{
	case 1: cout << "1 selected";
		break;
	case 2: cout << "2 selected";
		break;
	case3:
	case4: cout << "3 or 4 selected";
		break;
	default: cout << "1,2,3,4 not selected";
	
	}*/

	/*int a = 10;
	int b = 20;
	int result = 0;

	result = (a > b) ? (a++) : (b--);
	std::cout << result;*/


	/*int i = 0;

	for (i = 0; i < 5; ++i)
		std::cout << i << std::endl;

	i = 10;
	std::cout << i;

	*/
	
	/*for (int i = 0, j = 5; i < 5; i++, j++)
	{
		std::cout << i << " * " << j << ":" << i * j << std::endl;
	}*/

	/*int values[] = { 1,2,-1,3,-1,-99,7,8,9 };
	for (int i = 0; i < 9; i++)
	{
		if (values[i] == -99)
			break;
		else if (values[i] == -1)
			continue;
		else
			std::cout << values[i] << std::endl;
	}
	*/


	/*int a = 10;
	int c;
	func();

	int b = 20;
	int result = 0;

	result = (a > b) ? (a++) : (b--);
	std::cout << result;*/


//	return 0;

//}


//void sayHello(int val); // 프로토타입
//
//
//int main_sayHello()
//{
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	 print_hello();
//	//}
//	sayHello(100); // 100은 인수
//	
//	return 0;
//
//}
//
//void sayHello(int val) // val: 인자, 매개변수
//{
//	std::cout << "Hello" << val;
//}
//
//void param_test(int formal)
//{
//	std::cout << formal << std::endl;
//	formal = 100;
//	std::cout << formal << std::endl;
//}



//int main()
//{
//	int actual = 50;
//	std::cout << actual << std::endl;
//	param_test(actual);
//	std::cout << actual << std::endl;
//	return 0;
//
//}


////오버로딩
//int add_number(int, int);  // 함수는 한줄(;까지)가 함수 풀네임이라 보면됨
//double add_number(double, double);  // 함수는 한줄(;까지)가 함수 풀네임이라 보면됨
//
//int main()
//{
//	std::cout << add_number(10, 20) << std::endl;
//	std::cout << add_number(10.12, 20.23) << std::endl;
//
//	return 0;
//}
//
//int add_number(int a, int b)
//{
//	return a + b;
//}
//
//
//double add_number(double a, double b)
//{
//	return a + b;
//}


//void static_local_increment()
//{
//	static int num = 1;
//	std::cout << "num:  " << num << std::endl;
//	num++;
//	std::cout << "num:  " << num << std::endl;
//}
//
//
//int main()
//{
//	static_local_increment();
//	static_local_increment();
//	static_local_increment();
//}
//

//int func2(int x, int y, int z)
//{
//	x += y + z;
//	return x;
//}
//
//int func1(int a, int b)
//{
//	int result;
//	result = a + b;
//	result = func2(result, a, b);
//	return result;
//}
//
//int main()
//{
//	int x = 10;
//	int y = 20;
//	int z;
//	z = func1(x, y);
//	std::cout << z << std::endl;
//	return 0;
//}
//


//배열을 함수로 전달, 배열은 포인터다

//void print_array(int numbers[], int size);
//
//void zero_array(int numbers[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		numbers[i] = 0;
//	}
//}
//
//int main()
//{
//	int my_numbers[] = { 1,2,3,4,5 };
//	zero_array(my_numbers, 5); // {0,0,0,0,0}
//	print_array(my_numbers, 5);
//
//	return 0;
//}
//
//void print_array(int numbers[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		std::cout << numbers[i] << std::endl;
//	}
//}
//

//참조자: 메모리도 주소값도 없지만 포인터처럼 
//			모변수의 값을 바꿀수 있음
/*void scale_number(int& num);

int main()
{
	int number = 1000;
	scale_number(number);
	std::cout << number << std::endl;
	return 0;
}

void scale_number(int& num)
{
	if (num > 100)
	{
		num = 100;
	}
}*/

//unsigned long long factorial(unsigned long long n)
//{
//	if (n == 0)
//		return 1;
//	return n * factorial(n - 1);
//}
//
//
//int main()
//{
//	std::cout << factorial(5) << std::endl;
//	return 0;
//}

/*
5*4*3*2*1*1 =120
120출력

*/

//int main()
//{
//	int num=10;
//
//	std::cout << "Value:  " << num <<  std::endl; // 10
//	std::cout << "adress:  " << &num << std::endl; // 0x61ff1c
//	//std::cout << "adress:  " << &10 << std::endl; // ERROR! 10은 주소가 없음
//
// }

//int main()
//{
//	int score1 = 10;
//	int score2 = 20;
//	double score_precise = 100.7;
//
//	int* score_ptr = nullptr;
//	score_ptr = &score1;
//	score_ptr = &score2;
//
//	//score_ptr = &score_precise; // 컴파일에러, int형 포인터라 선언해서 double형의 주소는 못 담음
//}


//int main()
//{
//	int score = 10;
//	int* score_ptr = &score;
//
//	std::cout << *score_ptr << std::endl; // 10
//	
//	*score_ptr = 20;
//	std::cout << *score_ptr << std::endl; // 20
//	std::cout << score << std::endl; // 20
//
//
//}

//
//int main()
//{
//double high_temp = 100.7;
//double low_temp = 37.4;
//double* temp_ptr = &high_temp;
//
//
//std::cout << *temp_ptr << std::endl;
//temp_ptr = &low_temp;
//std::cout << *temp_ptr << std::endl;
//
// }

//int main()
//{
//	int num = 10;
//	int* num_ptr = &num;
//}

//int main()
//{
//	int* int_ptr = nullptr;
//	int_ptr = new int; // new는 heap 메모리 공간을 하나파고, 쓰레기값이 들어가고 그 메모리 주소를 반환한다
//
//
//	std::cout << int_ptr << std::endl;
//	std::cout << *int_ptr << std::endl;
//	*int_ptr = 100;
//	std::cout << *int_ptr << std::endl;
//
//}

//int main()
//{
//	int* int_ptr = nullptr;
//	int_ptr = new int;
//
//	std::cout << int_ptr << std::endl; // 0x2000, new int의 주소
//	std::cout << *int_ptr << std::endl; // int형 쓰레기값
//	*int_ptr = 100;
//	std::cout << *int_ptr << std::endl; // heap에 new_int 자리에 100
//
//	delete int_ptr;
//	int_ptr = nullptr;
//
//
//}
//
//int main()
//{
//	int* array_ptr = nullptr;
//	int size = 0;
//
//	std::cout << "size of array? ";
//	std::cin >> size;
//
//	array_ptr = new int[size];
//	array_ptr[0] = 10;
//	array_ptr[1] = 20;
//	array_ptr[2] = 30;
//
//	delete[] array_ptr;
//	array_ptr = nullptr;
//}

//int main()
//{
//	int scores[] = { 100,95,90 };
//	std::cout << scores << std::endl; // scores[0]의 주소값
//	std::cout << *scores << std::endl; // 100 
//
//	int* score_ptr = scores;
//	std::cout << score_ptr << std::endl; // scores[0]의 주소값
//	std::cout << *score_ptr << std::endl; // 100
//
//	return 0;
//}
//
//
//int main()
//{
//	int num = 10;
//
//	int scores[] = { 100,95,90 };
//	std::cout << sizeof(scores) << std::endl; // 12, int형 3개
//	//scores=&num; // 정적 배열은 당연히 새로운 주소값 지정을 못하겠죠
//
//	int* scores_ptr = scores;
//	std::cout << sizeof(scores_ptr) << std::endl; // 4, scores[0]의 주소값
//	scores_ptr = &num; // 포인터 변수니깐 새로운 주소값을 지정할 수 있죠
//}

//int main()
//{
//	int scores[] = { 100,95,90 };
//	int* scores_ptr = scores;
//
//	std::cout << scores_ptr << std::endl; // scores[0]의 주소
//	std::cout << (scores_ptr+1) << std::endl;// scores[1]의 주소
//	std::cout << (scores_ptr+2) << std::endl;// scores[2]의 주소
//
//	std::cout << *scores_ptr << std::endl; // 100
//	std::cout << *(scores_ptr + 1) << std::endl; // 95
//	// * 포인터의 자료형을 지정해주는 이유는 이처럼 +1을 할 때 몇바이트(몇칸)를 뛰어넘어야 할지 알아야 하기 때문
//	std::cout << *(scores_ptr + 2) << std::endl; // 90
//
//	std::cout << scores_ptr[0] << std::endl; // 100
//	std::cout << scores_ptr[1] << std::endl; // 95
//	std::cout << scores_ptr[2] << std::endl; // 90
//
//	std::cout << scores[0] << std::endl; // 100
//	std::cout << scores[1] << std::endl; // 95
//	std::cout << scores[2] << std::endl; // 90
//}

//int main()
//{
//int high_scores = 100;
//int low_scores = 60;
//const int* score_ptr = &high_scores;
//
//*score_ptr = 80; // ERROR! 포인터 자료형 정의를 const로 지정하면 역참조로 값을 바꿀 수 없음
//score_ptr = &low_scores; // 주소값을 바꾸는건 가능
//}

//int main()
//{
//	int high_score = 100;
//	int low_score = 60;
//	int* const score_ptr = &high_score;
//
//	*score_ptr = 80; // 참조값을 바꾸는건 가능
//	//score_ptr = &low_score; // ERROR! 포인터 변수명을 const로 지정하면 주소값을 바꿀 수 없음
//}


//int main()
//{
//	int high_score = 100;
//	int low_score = 60;
//	const int* const score_ptr = &high_score;
//
//	//자료형과 변수명을 둘다 const로 지정해버리면 참조값과 주소값을 바꿀 수 없다
//	//*score_ptr=80;
//	//score_ptr=&low_score;
//}

//int* create_array(int size, int init_value = 0) // 인자의 값이 안 주어졌을 때 init_value는 0
////지금은 10으로 주어졌죠
//{
//	int* new_storage = nullptr;
//	new_storage = new int[size];
//	for (int i = 0; i < size; ++i) // size=100
//		*(new_storage + i) = init_value; // 100개의 칸을 가진 배열의 원소에 다 10을 대입
//	return new_storage;
//}
//
//int main()
//{
//	int* my_array = nullptr;
//
//	my_array = create_array(100, 10);
//	delete[] my_array;
//	return 0;
//}
//

//int* dont_do_this()
//{
//	int num = 10;
//	int* num_ptr = &num;
//
//	return num_ptr;
//}
//
//void main()
//{
//	int* a = nullptr;
//	a = dont_do_this();
//	std::cout << *a << std::endl; // 쓰레기값이 출력된다고 생각하나, 우연히 10이 계속 나옴;
//}

 
//int main()
//{
//	int* val = new int;
//	*val = 10;
//
//	int* val2 = val;
//
//	delete val2;
//	val2 = nullptr;
//
//	std::cout << val << std::endl;
//}


//참조자
//int main()
//{
//	int a = 10;
//	int& b = a;
//
//	b = 20; // 사용할 때는 그냥 사용
//	std::cout << a << std::endl; // 20
//	std::cout << b << std::endl; // 20
//
//	//int& c; // ERROR! 참조자를 선언할 때는 초기화가 반드시 필요하다
//
//}



//void Increment(int val) // val은 a의 값을 복사해온 지역변수이기 때문에 main의 a에 영향을 못줌
//{
//	val++;
//}
//
//void IncrementByReference(int& val) // val은 지역변수지만, a의 참조자라 포인터처럼 함수 밖의 변수값을 바꿀 수 있음
//{
//	val++;
//}
//
//int main()
//{
//	int a = 5;
//	Increment(a);
//	std::cout << a << std::endl; // 5
//
//	IncrementByReference(a);
//	std::cout << a << std::endl; // 6
//
//	return 0;
//}


//void PrintConstRef(const int& val) // 복사의 비용과 메모리의 비용이 없다
//{
//	std::cout << val << std::endl;
//}
//void PrintAddress(int* valPtr) // a값을 바꿀수 있음
//{ 
//	std::cout << *valPtr << std::endl;
//}
//void PrintRef(int& val) // a값을 바꿀수 있음
//{
//	std::cout << val << std::endl;
//}
//void PrintVal(int val) // a값을 바꿀수 없음
//{
//	std::cout << val << std::endl;
//}
//int main()
//{
//	int a = 5;
//	PrintVal(a);
//	PrintRef(a);
//	PrintAddress(&a);
//	PrintConstRef(a);
//
//	//전부 5를 출력
//	return 0;
//}


//--------------------------------------------------------------------------------------
// 5주차 객체지향 시작

//class Player
//{
//	//// member variable
//	//std::string name;
//	//int health;
//	//int xp;
//
//	//// member function
//	//void Talk(std::string text);
//	//bool IsDead();
//};
//
//int main()
//{
//	Player p; // p는 객체, Player는 클래스
//
//	Player* p2 = new Player();  // 동적할당 가능
//	delete p2; // 똑같이 지워주도록 하자
//
//}

#include <string>


//class Player
//{
//public:
//	std::string name;
//	int health;
//	int xp;
//};

//int main()
//{
//	Player p;
//	p.health = 10; // 변수라 생각해도 됨
//
//	std::cout << p.health << std::endl;
//
//}
//int main()
//{
//	Player* p_ptr=new Player();
//	(*p_ptr).health = 10; // 변수라 생각해도 됨
//	std::cout << (*p_ptr).health << std::endl;
//
//	p_ptr->health = 20;
//	std::cout << p_ptr->health << std::endl;
//
//	p_ptr->name = "Hyungki";
//	std::cout << p_ptr->name << std::endl;
//}

//class Player
//{
//public:
//	std::string name;
//
//private:
//	int xp;
//	int health;
//};
//
//class Account
//{
//public:
//	bool Withdraw(double amount) // 출금
//	{
//		if (balance - amount < 0)
//		{
//			return false;
//		}
//		balance -= amount;
//		return true;
//	}
//	bool Deposit(double amount) // 입금
//	{
//		balance += amount;
//		return true;
//	}
//
//private:
//	std::string name; // 예금주 이름
//	double balance=0; // 계좌 잔액
//};


//int main()
//{
//	Account kim_account;
//	kim_account.Withdraw(100);
//}

//
//#include "Account.h"
//int main()
//{
//	Account kim_account;
//	kim_account.Deposit(100);
//
//	Account lee_account;
//	lee_account.Deposit(200);
//}


//생성자
//class Account
//{
//public:
//	Account()
//	{
//		std::cout << "계좌 생성됨" << std::endl;
//	}
//	~Account()
//	{
//		std::cout << "소멸자 호출됨" << std::endl;
//	}
//
//private:
//	double balance = 0; // 계좌 잔액
//	std::string name; // 예금주 이름
//};

//class Account
//{
//public:
//	Account() //기본 생성자의 가시화로 볼수있음
//	{
//		balance = 0.0;
//		name = "none";
//	}
//	Account(double val, std::string str) // 인자를 넣어줄수도 있음, 내가 생성자를 만들어놓으면
//											//컴파일러가 기본생성자를 만들어주지 않음
//	{
//		balance = val;
//		name = str;
//	}
//
//private:
//	double balance;
//	std::string name;
//};
//
//
//int main()
//{
//	//인자를 받냐 안 받냐로 같은 클래스의 다른 멤버함수를 호출하는 객체를 생성할수있음
//	Account kim_account; 
//
//	Account lee_account { 100.0, "Lee" };
//
//	Account* park_account_ptr = new Account{ 200.0, "Park" };
//}
//
//

//class Account
//{
//public:
//	Account()
//	{
//
//	}
//	Account(double val, std::string str)
//		:balance{val}, name{str} // { } 안에 들어가기 전부터 값을 잘 '초기화' 시킴
//	{
//		balance *= 2;
//	}
//private:
//	double balance; // 계좌잔액
//	std::string name; // 예금주 이름
//};
//
//int main()
//{
//	Account kim_account; 
//
//	Account lee_account { 100.0, "Lee" };
//
//	Account* park_account_ptr = new Account{ 200.0, "Park" };
//}
//

//class Player
//{
//public:
//	Player();
//	Player(std::string nameVal);
//	Player(std::string nameVal, int healthVal, int xpVal);
//
//private:
//	std::string name;
//	int health;
//	int xp;
//};
//
//Player::Player()
//{
//	name = "None";
//	health = 0;
//	xp = 0;
//}
//
//Player::Player(std::string nameVal)
//{
//	name = nameVal;
//	health = 0;
//	xp = 0;
//}
//
//Player::Player(std::string nameVal, int healthVal, int xpVal)
//{
//	name = nameVal;
//	health = healthVal;
//	xp = xpVal;
//}
//
//int main()
//{
//	Player empty;
//
//	Player hero { "Hero" };
//
//	Player kim{ "Kim", 100, 5 };
//
//	Player* player1 = new Player;
//	delete player1;
//
//	Player* player2 = new Player{ "Enemy2" };
//	delete player2;
//
//	Player* player3 = new Player{ "Enemy3", 1000,0 };
//	delete player3;
//}



//class Player
//{
//public:
//	Player();
//	Player(std::string nameVal);
//	Player(std::string nameVal, int healthVal, int xpVal);
//
//private:
//	std::string name;
//	int health;
//	int xp;
//};

//생성자 위임을 사용하지 않는 코드
//Player::Player(std::string nameVal, int healthVal, int xpVal)
//	:name{ nameVal }, health{ healthVal }, xp{ xpVal }
//{
//}
//Player::Player()
//	:name{"None"}, health{0}, xp{0}
//{
//}
//
//Player::Player(std::string nameVal)
//	:name{nameVal}, health{0}, xp{0}
//{
//}

////생성자 위임을 사용한 코드
//Player::Player(std::string name_val, int health_val, int xp_val)
//	: name{ name_val }, health{ health_val }, xp{ xp_val }
//{
//}
//
//Player::Player()
//	:Player{ "None",0,0 }
//{
//}
//
//Player::Player(std::string name_val)
//	:Player{ name_val,0,0 }
//{
//}

//class Player
//{
//public:
//	Player(std::string nameVal = "None", int healthVal = 0, int xpVal = 0);
//
//private:
//	std::string name;
//	int health;
//	int xp;
//};
//
//
//Player::Player(std::string nameVal, int healthVal, int xpVal)
//	:name{ nameVal }, health{ healthVal }, xp{ xpVal }
//{
//}
//
//int main()
//{
//	Player empty;
//
//	Player hero{ "Hero" };
//
//	Player kim{ "Kim", 100, 5 };
//}



//class Player
//{
//public:
//	Player(int hp, int xp)
//		:hp{hp}, xp{xp}
//	{
//		std::cout << "생성자 호출됨" << std::endl;
//	}
//
//	//복사 생성자
//	Player(const Player& source)
//	{
//		std::cout << "복사 생성자 호출됨" << std::endl;
//	}
//
//	void Print()
//	{
//		std::cout << hp << " " << xp << std::endl;
//	}
//
//private:
//	int hp;
//	int xp;
//};
//
//void PrintInformation(Player p)
//{
//	p.Print();
//}
//
//int main()
//{
//	Player p { 10, 2 };
//	//p.Print();
//
//	PrintInformation(p);
//}



//class Player
//{
//public:
//	Player(int hp, int xp)
//		:hp{ hp }, xp{ xp }
//	{
//		std::cout << "생성자 호출됨" << std::endl;
//	}
//
//	//복사 생성자
//	Player(const Player& other)
//		:hp{other.hp}, xp{ other.xp }
//	{
//		std::cout << "복사 생성자 호출됨" << std::endl;
//	}
//
//	void Print()
//	{
//		std::cout << hp << " " << xp << std::endl;
//	}
//
//private:
//	int hp;
//	int xp;
//};
//
//void PrintInformation(Player p)
//{
//	p.Print();
//}
//
//int main()
//{
//	Player p{ 10, 2 };
//
//	PrintInformation(p);
//}


//class Shallow
//{
//private:
//	int* data; //Pointer
//
//public:
//	Shallow(int d);
//	//Shallow(const Shallow& source);
//	~Shallow();
//};
//
//Shallow::Shallow(int d)
//{
//	data = new int;
//	*data = d;
//}
//
//Shallow::~Shallow()
//{
//	delete data;
//	std::cout << "free storage" << std::endl;
//}
//
//void display_shallow(Shallow s)
//{
//}
//
//int main()
//{
//	Shallow obj1{ 100 };
//	display_shallow(obj1); // 이 함수가 끝나면 소멸자에 의해 heap영역의 data가 해제됨
//	
//	return 0; // 그래서 해제된 공간을 또 해제하려니깐 오류가 발생함
//}


// 위의 사례 방지로 깊은 복사를 해줘야함
//class Deep
//{
//private:
//	int* data;
//
//public:
//	Deep(int d);
//	Deep(const Deep& source);
//	~Deep();
//};
//
//Deep::Deep(int d)
//{
//	data = new int;
//	*data = d;
//}
//
//Deep::~Deep()
//{
//	delete data;
//	std::cout << "free storage" << std::endl;
//}
//
//Deep::Deep(const Deep& source)
//{
//	data = new int;
//	*data = *source.data;
//	std::cout << "Copy constructor, deep" << std::endl;
//}
//
//void DisplayDeep(Deep s)
//{
//}
//
//int main()
//{
//	Deep obj1{ 100 };
//	DisplayDeep(obj1);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//// --------------------
//// 얕은 복사
//// --------------------
//class Shallow
//{
//private:
//    int* data;
//
//public:
//    Shallow(int d)
//    {
//        data = new int;
//        *data = d;
//        cout << "Shallow constructor" << endl;
//    }
//
//    // 얕은 복사 생성자
//    Shallow(const Shallow& source)
//    {
//        data = source.data;   // 주소만 복사
//        cout << "Shallow copy constructor" << endl;
//    }
//
//    void SetData(int d)
//    {
//        *data = d;
//    }
//
//    void ShowData() const
//    {
//        cout << "*data = " << *data << ", data address = " << data << endl;
//    }
//
//    ~Shallow()
//    {
//        delete data;
//        cout << "Shallow destructor: free storage" << endl;
//    }
//};
////
////// --------------------
////// 깊은 복사
//// --------------------
//class Deep
//{
//private:
//    int* data;
//
//public:
//    Deep(int d)
//    {
//        data = new int;
//        *data = d;
//        cout << "Deep constructor" << endl;
//    }
//
//    // 깊은 복사 생성자
//    Deep(const Deep& source)
//    {
//        data = new int;          // 새 메모리 할당
//        *data = *source.data;    // 값 복사
//        cout << "Deep copy constructor" << endl;
//    }
//
//    void SetData(int d)
//    {
//        *data = d;
//    }
//
//    void ShowData() const
//    {
//        cout << "*data = " << *data << ", data address = " << data << endl;
//    }
//
//    ~Deep()
//    {
//        delete data;
//        cout << "Deep destructor: free storage" << endl;
//    }
//};
//
//int main()
//{
//    cout << "===== Shallow Copy =====" << endl;
//    Shallow s1(100);
//    Shallow s2 = s1;   // 복사 생성자 호출
//
//    cout << "before change" << endl;
//    s1.ShowData();
//    s2.ShowData();
//
//    s2.SetData(200);
//
//    cout << "after s2 change" << endl;
//    s1.ShowData();
//    s2.ShowData();
//
//    cout << endl;
//    cout << "===== Deep Copy =====" << endl;
//    Deep d1(100);
//    Deep d2 = d1;      // 복사 생성자 호출
//
//    cout << "before change" << endl;
//    d1.ShowData();
//    d2.ShowData();
//
//    d2.SetData(200);
//
//    cout << "after d2 change" << endl;
//    d1.ShowData();
//    d2.ShowData();
//
//    return 0;
//}


//this를 알아보자
//class Player
//{
//public:
//	Player(int x, int y)
//		:xPos{ x }, yPos{ y }
//	{
//	}
//
//	void SetPosition(int x, int y);
//	
//
//private:
//	int xPos;
//	int yPos;
//};
//
//// this는 멤버 함수를 호출한 객체의 주소값
//void Player::SetPosition(int x, int y)
//{
//	this->xPos = x;
//	this->yPos = y;
//}
//
//int main()
//{
//	Player p1{ 0,0 };
//	p1.SetPosition(10, 10);
//}
//


//const를 알아보자
//class Player
//{
//public:
//	Player(int x, int y)
//		:x{ x }, y{ y }
//	{
//	}
//
//	void SetPosition(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//	void PrintPosition() const // 함수 뒤에도 const를 붙혀줘서 컴파일러로 하여금 PrintPosition함수가 멤버변수값을 바꾸지 않는다는 것을 알려줘야함.
//	{
//		std::cout << x << "," << y << std::endl;
//	}
//
//private:
//	int x;
//	int y;
//};
//
//
//int main()
//{
//	const Player p1{ 0,0 };
//	p1.PrintPosition();
//	//p1.SetPosition(10, 10); // p1을 const라 해놨는데 setposition으로 값을 바꾸려니깐 에러가 뜸
//	p1.PrintPosition();
//
//}


// static을 알아보자
//class Player
//{
//public:
//	Player(int x, int y)
//		:x{ x }, y{ y }
//	{
//		numPlayer++;
//	}
//
//	void SetPosition(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//	}
//
//	void PrintPosition() const // 함수 뒤에도 const를 붙혀줘서 컴파일러로 하여금 PrintPosition함수가 멤버변수값을 바꾸지 않는다는 것을 알려줘야함.
//	{
//		std::cout << x << "," << y << std::endl;
//	}
//
//	static int getNumPlayer()
//	{
//		return numPlayer;
//	}
//
//private:
//	int x;
//	int y;
//	static int numPlayer;
//};
//
//int Player::numPlayer = 0; // static은 별도의 공간에 생성되기 때문에 생성자에서 초기화하는게 아닌 별도로 초기화를 시켜준다.
//
//int main()
//{
//
//	Player p1{ 0,0 };
//	Player p2{ 0,1 };
//	Player monster{ 1,0 };
//
//	std::cout << Player::getNumPlayer() << std::endl;
//}


// friend를 알아보자
//class Game
//{
//
//};
//
//class Player
//{
//	friend void DisplayPlayer(const Player& p);
//	friend class Game; // 다른 class에서도 player클래스에 접근할 수 있도록도 지정 가능
//
//private:
//	int x, y;
//	int speed;
//
//public:
//	Player(int x, int y, int speed)
//		:x{ x }, y{ y }, speed{ speed }
//	{
//		std::cout << this << std::endl;
//	}
//	void SetPosition(int x, int y);
//
//
//	int GetXPosition() const
//	{
//		return x;
//	}
//	int GetYPosition() const
//	{
//		return y; 
//	}
//
//};
//
//void Player::SetPosition(int x, int y)
//{
//	this->x = x;
//	this->y = y;
//}
//
//
//
//
//void DisplayPlayer(const Player& p) // 얘는 멤버함수아님!! friend로 특별히 멤버함수처럼 멤버변수를 건들일수있게끔 해준거임
//{
//	std::cout << p.x << "," << p.y << std::endl;
//}
//
//int main()
//{
//	Player p1{ 1,2,10 };
//
//	DisplayPlayer(p1);
//
//}
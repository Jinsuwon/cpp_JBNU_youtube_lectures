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


#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <vector>
#include <list>

//// 반복자의 begin과 end 동작을 알아보자 / 슬라이드 14
//int main()
//{
//	std::vector<int>vec{ 1,2,3 }; // 컨테이너
//	//std::set<int> myset{ 1,2,3 };
//
//	//std::vector<int>::iterator it1; // 반복자 , it1이 벡터 안에 있는 요소들에 접근을 할 수 있도록 컨테이너와 똑같이 적어준다
//	//std::set<int>::iterator it2;
//
//	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}
//}


//auto에 대해서 알아보자 / 슬라이드 16
//auto: 자동으로 타입을 추정해주는 키워드, 타입이 길어질 경우 사용하면 편리하다
//int main()
//{
//	std::vector<int>vec{ 1,4,7 };
//
//	auto it = vec.begin();
//
//	it += 2; // 값을 더하는게 아닌 포인터에 +2를 하므로 다음다음칸을 보는거라 보면 됨
//
//	std::cout << *it << std::endl;
//
//	//int a = 5;
//	//auto b = 5; // b의 타입이 뭘지 우변을 보고 컴파일러가 알아서 추정해준다
//
//
// }


// 추상화(begin, end) 되어 있는 반복자(it) 
//int main()
//{
//	std::vector<int>vec{ 1,4,7 };
//	std::set<char> myset{ 'A','B','D' };
//	
//	for (auto it = myset.begin(); it != myset.end(); it++)
//	{
//		std::cout << *it << std::endl;
//	}
//
//}



// const반복자를 사용하게 되면 컨테이너 안에 값을 바꾸지 않겠다는 말이므로 *it=1같은 역참조문은 에러가 난다
//int main()
//{
//	std::vector<int>vec{ 1,4,7 };
//	std::set<char> myset{ 'A','B','D' };
//
//	for (auto it = vec.cbegin(); it != vec.cend(); it++)
//	{
//		*it = 1;
//		std::cout << *it << std::endl;
//	}
//
//}


//// 추상화(find)를 알아보자
//int main()
//{
//	std::vector<int>vec{ 1,3,7,4,8,10 };
//	std::set<char> myset{ 'A','B','D' };
//	auto location=std::find(vec.begin(), vec.end(), 2); // find는 iterator를 출력한다, find는 컨테이너에서 begin~end까지 4를 찾아라는 알고리즘
//
//	if (location == vec.end()) // location이 find하지 못하면 end를 가리키고 있다는 개념
//	{
//		std::cout << "cannot find" << std::endl;
//	}
//
//	else
//	{
//		std::cout << "found" << std::endl;
//		std::cout << *location << std::endl;
//	}
//}



// Functor: 함수처럼 사용할 수 있는 객체
//struct Func
//{
//	void operator()(int x)
//	{
//		std::cout << x * x << std::endl;
//	}
//};

//void f(int x) // 이렇게 구현 안해줘도 컴파일러가 f(3)를 위에 operator()(int x)로 해석함
//{
//	std::cout << x * x << std::endl;
//}

//int main()
//{
////	Func f;
//	//f.operator()(3);
//	//f(3); // 객체지만 함수랑 똑같이 사용이 가능하다
//	
//	std::vector<int>vec{ 1,3,7,4,8,10 };
//	std::set<char> myset{ 'A','B','D' };
//;
//	std::for_each(vec.begin(), vec.end(), f); // 함수를 넘겨주는 걸 안 배워서 객체(Functior)로 인자를 넘겨주는것
//}


// function pointer: 함수의 주소를 가리켜서 함수를 호출하는 방법
//void f(int x)
//{
//	std::cout << x * x << std::endl;
//}
//
//int main()
//{
//	std::vector<int>vec{ 1,3,7,4,8,10 };
//	std::set<char> myset{ 'A','B','D' };
//	
//	f(10);
//	std::cout << f << std::endl; // 함수 주소가 호출됨. 함수도 주소를 가지고, 함수의 메모리주소를 호출하면서 인자를 넘겨주면 함수를 호출할 수 있다
//	std::for_each(vec.begin(), vec.end(), f);
//}


//// lamda expression: 익명함수: 한번쓰고 버리는 함수
//void f(int x)
//{
//	std::cout << x * x << std::endl;
//}
//
//int main()
//{
//	std::vector<int>vec{ 1,3,7,4,8,10 };
//	std::set<char> myset{ 'A','B','D' };
//
//	std::for_each(vec.begin(), vec.end(), 
//		[](int x) // 함수 선언문처럼 보이지? 그냥 함수를 3번째 인자로 넘겨주는데 여기서 바로 정의해버리는거임
//		{
//			std::cout << x * x << std::endl;
//		}
//	);
//}


// Array에 대해서 알아보자
//#include <array>
//
//int main()
//{
//	std::array<int, 5> arr1{ 1,2,3,4,5 };
//
//	std::array<std::string, 3> arr2{ "kim", "Lee", "Park" };
//	// array는 길이가 변할 수 없다!!
//
//	std::cout << arr1.size() << std::endl;
//
//	std::cout << arr1[0] << std::endl;
//
//	std::cout << arr1.at(2) << std::endl;
//
//	std::cout << arr1.at(2) << std::endl;
//
//	for (int i = 0; i < arr1.size(); i++)
//	{
//		std::cout << arr1[i] << std::endl;
//	}
//}



// Vector에 대해서 알아보자
//#include <vector>
//int main()
//{
//	std::vector<int> vec{ 1,2,3,4,5 };
//
//	std::cout << vec.size() << std::endl;
//	std::cout << vec.capacity() << std::endl;
//
//
//	//std::cout << vec[0] << std::endl;
//	//std::cout << vec[1] << std::endl;
//	//std::cout << vec.at(3) << std::endl;
//	 
//	
//	//std::cout << vec[-1] << std::endl; // Runtime Error, 우리가 해결할 수 없는 오류
//	std::cout << vec.at(-1) << std::endl; // Exception, 우리가 처리할 수 있는 오류
//
//
//	std::cout << vec.front() << std::endl;
//	std::cout << vec.back() << std::endl;
//}


// vector의 size, capacity, data에 대해서 알아보자
//#include <vector>
//int main()
//{
//	std::vector<int> vec{ 1,2,3,4,5 };
//
//	std::cout << vec.size() << std::endl; // vector의 사이즈
//	std::cout << vec.capacity() << std::endl; // 이때는 size와 같음
//	std::cout << vec.data() << std::endl; // 이전꺼
//
//	vec.push_back(10); // vector는 크기를 늘릴 수 있다
//	std::cout << vec.size() << std::endl; // +1, 사이즈가 하나 더 늘어남
//	std::cout << vec.capacity() << std::endl; // +2, 사이즈가 하나 더 늘어난 거에 확장성까지 해서 2가 늘어남
//	// capacity: 미리 확보해둔 저장 공간 크기
//	std::cout << vec.data() << std::endl; // 더 큰 용량을 담을 수 있는 새로운 heap공간을 할당하고 이전꺼는 삭제한다
//
//}


// Vector의 push_back, pop_back, emplace_back 에 대해서 알아보자
// push_back: 외부에서 객체를 만든 뒤, 그걸 복사해서 vector 내부로 넣는 형식
// emplace_back: vector 안에서 바로 객체를 생성하는 방식
//#include <vector>
//class Person
//{
//private:
//	std::string name;
//
//public:
//	Person(std::string name)
//		: name{name}
//	{
//		std::cout << "ctor called" << std::endl;
//	}
//};
//
//int main()
//{ 
//	std::vector<Person> vec;
//	vec.push_back(Person{ "lee" });
//	std::cout << vec.size() << std::endl;
//
//	vec.pop_back();
//	std::cout << vec.size() << std::endl;
//}


// vector의 insert에 대해서 알아보자
//#include <vector>
//int main()
//{
//	std::vector<int> vec1{ 1,2,3,4,5 };
//
//	std::cout << vec1[3] << std::endl;
//
//	auto it = std::find(vec1.begin(), vec1.end(), 4);
//	vec1.insert(it, 7); // iterator를 지정해준 다음, 7을 넣어준다
//
//	std::cout << vec1[3] << std::endl;
//
//}



// List에 대해서 알아보자
//#include <vector>
//#include <list>
//
//void PrintList(std::list<int> myList)
//{
//	for (auto it1 = myList.begin(); it1 != myList.end(); it1++)
//	{
//		std::cout << *it1 << " ";
//	}
//	std::cout<<std::endl;
//}
//
//int main()
//{
//	std::list<int> myList{ 1,2,3,4,5 };
//	PrintList(myList);
//
//	auto it = std::find(myList.begin(), myList.end(), 3);
//
//	myList.insert(it, 10);
//	PrintList(myList);
//
//	myList.erase(it);
//	PrintList(myList);
//}



// set에 대해서 알아보자
//#include <set>
//void PrintSet(std::set<int> myList)
//{
//	for (auto it1 = myList.begin(); it1 != myList.end(); it1++)
//	{
//		std::cout << *it1 << " ";
//	}
//	std::cout<<std::endl;
//}
//
//int main()
//{
//	std::set<int> s{ 1,2,3,4,5 };
//	PrintSet(s);
//}


//#include <set>
//template <typename T> 
//void PrintContainer(T myContainer)
//{
//	for (auto it1 = myContainer.begin(); it1 != myContainer.end(); it1++)
//	{
//		std::cout << *it1 << " ";
//	}
//	std::cout << std::endl;
//}
//
//int main()
//{
//	std::list<int> l{ 3,1,5,4,2 };
//	PrintContainer<std::list<int>>(l); // list는 정의한 그대로 나온다
//
//	std::set<int> s{3,1,5,4,2 };
//	std::cout << s.size() << std::endl;
//	PrintContainer<std::set<int>>(s); // set은 정렬이 되어 1,2,3,4,5로 바뀌어서 저장된다 => associative container
//
//}



// Map에 대해서 알아보자
//#include <map>
//int main()
//{
//	std::map<std::string, int> m1{      // map<key의 타입, value의 타입>
//		{"kim", 20},
//		{"lee", 21},
//		{"kim",25} // key가 중복된 건 없어진다
//};
//
//	std::cout << m1["kim"] << std::endl;
//	m1["kim"] = 22;
//	std::cout << m1["kim"] << std::endl;
//
//	m1["park"] = 25; // insert 하는 방법
//	m1.insert(std::make_pair("choi", 30)); // 정석 insert 방법
//	std::cout << m1["park"] << std::endl;
//
//}





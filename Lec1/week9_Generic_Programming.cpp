// include의 역할
#include <iostream>
#include <string>
//------- 밑에 파일들을 복사해서 붙여주는 것---------
/*
// iostream standard header

// Copyright (c) Microsoft Corporation.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <yvals_core.h>
#if _STL_COMPILER_PREPROCESSOR
#include <istream>
#include <ostream>

#pragma pack(push, _CRT_PACKING)
#pragma warning(push, _STL_WARNING_LEVEL)
#pragma warning(disable : _STL_DISABLED_WARNINGS)
_STL_DISABLE_CLANG_WARNINGS
#pragma push_macro("new")
#undef new
_STD_BEGIN
#ifdef _M_CEE_PURE
__PURE_APPDOMAIN_GLOBAL extern istream cin;
__PURE_APPDOMAIN_GLOBAL extern ostream cout;
__PURE_APPDOMAIN_GLOBAL extern ostream cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream clog;
__PURE_APPDOMAIN_GLOBAL extern istream* _Ptr_cin;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cout;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream* _Ptr_clog;

__PURE_APPDOMAIN_GLOBAL extern wistream wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream wclog;
__PURE_APPDOMAIN_GLOBAL extern wistream* _Ptr_wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream* _Ptr_wclog;
#else // ^^^ defined(_M_CEE_PURE) / !defined(_M_CEE_PURE) vvv
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT istream cin;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream cout;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream cerr;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream clog;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT istream* _Ptr_cin;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream* _Ptr_cout;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream* _Ptr_cerr;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT ostream* _Ptr_clog;

_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wistream wcin;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream wcout;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream wcerr;
_EXPORT_STD extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream wclog;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wistream* _Ptr_wcin;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream* _Ptr_wcout;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream* _Ptr_wcerr;
extern "C++" __PURE_APPDOMAIN_GLOBAL _CRTDATA2_IMPORT wostream* _Ptr_wclog;

#ifdef _CRTBLD // TRANSITION, ABI: _Winit appears to be unused
class _CRTIMP2_PURE_IMPORT _Winit {
public:
    __thiscall _Winit();
    __thiscall ~_Winit() noexcept;

private:
    __PURE_APPDOMAIN_GLOBAL static int _Init_cnt;
};
#endif // defined(_CRTBLD)

#endif // ^^^ !defined(_M_CEE_PURE) ^^^
_STD_END
#pragma pop_macro("new")
_STL_RESTORE_CLANG_WARNINGS
#pragma warning(pop)
#pragma pack(pop)
#endif // _STL_COMPILER_PREPROCESSOR
#endif // _IOSTREAM_
*/


//define의 역할, 전처리 후에 PI를 3.14159로 대체해주는 것
//#define PI 3.14159
//#define MAX(a,b) ((a>b)?a:b)
// 매크로의 최대 단점, 디버깅이 어렵다
// 
//int max(int a, int b)
//{
//    return (a > b) ? a : b; // 삼항 연산자 밑에 코드/**/와 같다
//   /* if (a > b)
//        return a;
//    else
//        return b;*/
//}

//double max(double a, double b)
//{
//    return (a > b) ? a : b;
//}

//int main()
//{
//    //// 이렇게 작성하면
//    //double a = PI * 2; 
//    //double b = PI * 4;
//
//    ////전처러기 끝나고 코드가 아래처럼 자동으로 바뀜
//    //double a = 3.14159 * 2;
//    //double b = 3.14159 * 4;
//
//    int x = 100;
//    int y = 200;
//    std::cout << MAX(x, y);  // ((x>y)?x:y)
//    std::cout << ((x > y) ? x : y); // MAX와 결과가 동일하다
//    
//    double z = 1.234;
//    double w = 3.456;
//    std::cout << MAX(z, w);
//    std::cout << ((z > w) ? z : w);
//
//}


// 함수 템플릿을 알아보자
//template <typename T>
//T max(T a, T b)
//{
//    return (a > b) ? a : b;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    std::cout << max<int>(a, b)<<std::endl;
//
//    double c = 1.234;
//    double d = 3.456;
//    std::cout << max<double>(c, d);
//
// }


// 템플릿 사용 예시, 클래스의 경우 필요한 연산자가 오버로딩 되어 있어야 템플릿 함수 사용 가능
//template <typename T>
//T max(T a, T b)
//{
//    return (a > b) ? a : b;
//}
//
//class Point 
//{
//public:
//    bool operator>(const Point& rhs)
//    {
//        return true;
//    }
//};
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    std::cout << max<int>(a, b) << std::endl;
//
//    double c = 1.234;
//    double d = 3.456;
//    std::cout << max<double>(c, d);
//
//    Point p1;
//    Point p2;
//    max<Point>(p1, p2);
//}


// 템플릿의 다중 매개변수: 매개변수가 서로 다른 자료형일 때의 경우
//template <typename T1, typename T2>
//T1 max(T1 a, T2 b)
//{
//    return (a > b) ? a : b;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//
//    double c = 1.234;
//    double d = 3.456;
//
//    std::cout << max<int, double>(a, c) << std::endl;
//    
//}


// 함수 템플릿의 타입명 기재
//#include <string>
//template <typename T>
//T mymax(T a, T b)
//{
//    return (a > b) ? a : b;
//}
//
//template <> // type명이 이미 템플릿에 써져있기에 <>안에 타입명을 따로 기재하지 않아도 됨
//std::string mymax(std::string a, std::string b)
//{
//    return (a.length() > b.length()) ? a : b;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    double c = 1.234;
//    double d = 3.456;
//    std::cout << mymax<int>(a, c) << std::endl;
//
//    std::string e = "cde";
//    std::string f = "abcd";
//    std::cout << mymax<std::string>(e, f) << std::endl;
//    
//}



// 클래스 템플릿을 알아보자
// 클래스 템플릿의 단일 변수
// 함수 템플릿에서 타입을 T로 맞춰주는 것과 동시에, 멤버 함수의 타입도 템플릿에 맞게 바꿔줘야 함
//#include <string>
//template <typename T>
//class Item
//{
//private:
//    std::string name;
//    T value;
//
//public:
//    Item(std::string name, T value)
//        :name{name}, value{value}
//    { }
//
//    std::string getName() const
//    {
//        return name;
//    }
//
//    T getValue() const
//    {
//        return value;
//    }
//};
//
//int main()
//{
//    Item<int> i{ "A", 10 };
//    std::cout << i.getName() << std::endl;
//    std::cout << i.getValue() << std::endl;
//
//    Item<double> d{ "B", 1.345 };
//    std::cout << d.getName() << std::endl;
//    std::cout << d.getValue() << std::endl;
//
//    Item<std::string> s{ "hello", "kim" };
//    std::cout << s.getName() << std::endl;
//    std::cout << s.getValue() << std::endl;
//
//}


// 클래스 템플릿의 다중 매개변수
//#include <string>
//template <typename T1, typename T2>
//class Item
//{
//private:
//    T1 name;
//    T2 value;
//
//public:
//    Item(T1 name, T2 value)
//        :name{ name }, value{ value }
//    {
//    }
//
//    T1 getName() const
//    {
//        return name;
//    }
//
//    T2 getValue() const
//    {
//        return value;
//    }
//};
//
//template <typename T1>
//class Item <T1, double> // 템플릿 인자가 double일때 같은 특수한 상황일 때 이 클래스를 생성하겠다
//{
//private:
//    T1 name;
//    double value;
//
//public:
//    Item(T1 name, double value)
//        :name{ name }, value{ value }
//    {
//    }
//
//    T1 getName() const
//    {
//        return name;
//    }
//
//    double getValue() const
//    {
//        return 2*value;
//    }
//};

//
//int main()
//{
//    Item<std::string, int> i{ "A", 10 };
//    std::cout << i.getName() << std::endl;
//    std::cout << i.getValue() << std::endl;
//
//    Item<std::string, double> d{ "B", 1.345 };
//    std::cout << d.getName() << std::endl;
//    std::cout << d.getValue() << std::endl;
//
//    Item<std::string, std::string> s{ "hello", "kim" };
//    std::cout << s.getName() << std::endl;
//    std::cout << s.getValue() << std::endl;
//
//}


// non-type 템플릿
//template <typename T, int N>
//class Array
//{
//private:
//    int size = N;
//    T value[N];
//};
//
//class Array <int, 5> // main의 Array<int,5>nums;로 인해 만들어지는 클래스 가시화
//{
//private:
//    int size = 5;
//    int value[5];
//};
//
//class Array <double, 10> // main의 Array<double, 10>nums2;로 인해 만들어지는 클래스 가시화
//{
//private:
//    int size = 10;
//    double value[10];
//};
//
//int main()
//{
//    Array<int, 5> nums;
//    Array<double, 10> nums2;
//}
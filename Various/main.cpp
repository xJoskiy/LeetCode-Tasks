#include <iostream>
#include <vector>
#include <map>
//#include <algorithm>
//#include <string>
//#include <queue>
//#include <list>
//#include <functional>
//#include <memory>

using namespace std;

//float fast_abs(float input) {
//    float result = input;
//    uint32_t* p = (uint32_t*)&result;
//    *p &= 0x7FFFFFFF;
//    return result;
//}
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//
//struct A
//{
//    A() { cout << "A()"; }
//};
//
//struct B : public A
//{
//    B(A const& o) : owner(o)
//    {
//        cout << "B()";
//    }
//private:
//    const A& owner;
//};
//
//A a;
//B b1(a);
//B b2(b1);
//
//
//template <class T>
//void print_bin(T x)
//{
//    int size = sizeof(x);
//
//    for (int i = size - 1; i >= 0; i--) {
//        for (int j = 7; j >= 0; j--)
//            cout << ((*((bool*)&x + i) >> j) & 1);
//        cout << " ";
//    }
//
//    cout << endl;
//}
//
//int gcd(int a, int b)
//{
//    if (a == 0) return b;
//    return gcd(b % a, a);
//}
//
//class Class {
//public:
//    int i;
//    int j;
//};
//
//void Foo(Class obj) {
//    cout << obj.i << endl;
//    cout << obj.j << endl;
//}
//
//
//class Base {
//public:
//    virtual void Mul(int a, int b) {
//        cout << "Base::Mul" << endl;
//    }
//};
//
//class Derived : public Base {
//public:
//    virtual void Mul(int a, int b) override {
//        cout << "Derived::Mul" << endl;
//    }
//};
//
//class Parent
//{
//public:
//    virtual Parent* getThis() { std::cout << "called Parent::getThis()\n"; return this; }
//    void printType() { std::cout << "returned a Parent\n"; }
//    virtual void method() { cout << "Parent::method\n"; }
//};
//
//class Child : public Parent
//{
//public:
//    virtual Child* getThis() { std::cout << "called Child::getThis()\n";  return this; }
//    void printType() { std::cout << "returned a Child\n"; }
//    virtual void method() override { cout << "Child::method\n"; }
//};
//
//template<typename T>
//void foo(T& x) { 
//    
//    va_list a;
//    
//    T a = T(), b = T();
//    a = b;
//};
//
//class FurnFab {
//    virtual Furniture& CreateFurn(Furniture*) = 0;
//};
//
//class CoachFurn : public FurnFab {
//    Furniture& CreateFurn(Furniture*) override {
//        Coach* a = new Coach();
//        return *a;
//    }
//};
//
//class SofaFab : public FurnFab {
//    Furniture& CreateFurn(Furniture*) override {
//        Sofa* a = new Sofa();
//        return *a;
//    }
//};
//
//
//class Furniture {
//public:
//    Furniture() {};
//};
//
//class Coach : public Furniture {
//
//};
//
//class Sofa : public Furniture {
//
//};
//
//void foo(int a, int b) {
//    cout << a + b << endl;
//}
//
//void foo(float a, float b) {
//    cout << a + b << endl;
//}
//
//template <template<class, class> class Pred, typename Type>
//void func(Pred<Type, Type> foo) {
//    foo(1.4, 5.6);
//}
//
//
//
//int c, max = 0;
//bool opened = freopen("input.txt", "r", stdin);
//map<char, int> dict;r
//vector<vector<char>> matrix;
//
//
//while ((c = getchar()) != EOF && opened)
//    if (c != ' ' && c != '\n') dict[c]++;
//
//max = (*max_element(dict.begin(), dict.end(), Func())).second;
//matrix.assign(dict.size(), vector<char>(max, ' '));
//
//int i = 0;
//for (map<char, int>::iterator x = dict.begin(); x != dict.end(); x++, i++)
//    for (int j = 0; j < x->second; j++)
//        matrix[i][j] = '#';
//
//for (int j = max - 1; j >= 0; j--)
//{
//    for (int i = 0; i < dict.size(); i++)
//        cout << matrix[i][j];
//    cout << '\n';
//}
//for (auto& x : dict) cout << x.first;*/
//
//setlocale(LC_ALL, ".UTF8");
//std::string str = "Hello, \u2713!";
//std::cout << str << std::endl;
//cout << "\u2713" << endl;

template<typename T>
class SmartPointer
{
public:
    SmartPointer(T *ptr) {
        this->ptr = ptr;
    }

    ~SmartPointer() {
        cout << "Deleted data" << endl;
        delete ptr;
    }

    T& operator* () {
        return *ptr;
    }

    friend ostream& operator <<(ostream& os, SmartPointer<T>& obj) {
        os << obj.ptr;
        return os;
    }

private:
    T* ptr;
};


void foo(const int& data) {
    const_cast<int&>(data) = 5;
    cout << data;
}


class MyClass
{
public:
    MyClass() {
        cout << "Created\n";
    }

    MyClass(const MyClass&) {

    }
};

int main()
{
    /*int* pval = new int(100);const int* el1 = new int(3);
    const int* el2 = new int(5);

    const vector<const int*> a{ el1, el2 };
    vector<const int*> b;
    b.reserve(a.size());

    for_each(a.begin(), a.end(), [&b](const int* el) {
        b.push_back(new int(*el));
        });
    unique_ptr<int> d(pval);
    unique_ptr<int> b;*/

    return 0;
}

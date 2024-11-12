#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person() {}

    Person(int age)
    {
        m_age = new int(age);
    }

    // “=”赋值运算符重载
    // void operator=(Person &p)
    Person &operator=(Person &p)
    {
        // m_age = p.m_age;  // 编译器提供的浅拷贝

        // 应该先判断是否有属性在堆区，有先释放，然后进行深拷贝
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
        m_age = new int(*p.m_age); // 进行深拷贝

        return *this; //
    }

    ~Person()
    {
        if (m_age != NULL)
        {
            delete m_age;
            m_age = NULL;
        }
    }

    int *m_age;
    string m_name;
};

int main()
{
    Person p1(18);
    Person p2(20);
    p2 = p1;
    Person p3(30);
    p3 = p2 = p1;

    // int a = 10;
    // int b = 20;
    // int c = 30;
    // a = b = c;  // 内置数据类型允许连等操作
    // cout << "a " << a << " b " << b << " c " << c << endl;
    cout << *(p1.m_age) << endl;
    cout << *(p2.m_age) << endl;
    cout << *(p3.m_age) << endl;
}
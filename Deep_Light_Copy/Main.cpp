//#include <iostream>
//#include <cstring>
//#pragma warning(disable : 4996)
//using namespace std;
//
//class Person {
//
//public:
//    char* name; // 姓名
//    int age;    // 年龄
//
//    Person(const char* name, int age) {
//        this->name = new char[strlen(name) + 1];
//        strcpy(this->name, name);
//        this->age = age;
//    }
//
//    Person(const Person& p)
//    {
//        this->name = new char[strlen(p.name) + 1];
//        strcpy(this->name, p.name);
//        this->age = p.age;
//    }
//
//
//    void showPerson() {
//        cout << name << " " << age << endl;
//    }
//
//    ~Person() {
//        if (name != nullptr) {
//            delete[] name;
//            name = nullptr;
//        }
//    }
//};
//
//int main() {
//
//    char name[100] = { 0 };
//    int age;
//
//    cin >> name;
//    cin >> age;
//
//    Person p1(name, age);
//    Person p2(p1);
//
//    p2.showPerson();
//
//    return 0;
//}
#include <iostream>
using namespace std;
class Array {
private:
	int n;//数组大小 
	int* a;//数组 
public:
	Array() {
		cin >> n;
		a = new int[n];
		for (int i = 0; i < n; i++) cin >> a[i];
	}
	~Array() {
		delete[]a;
		a = NULL;
	}
	int getlen() {
		return n;
	}
	int get(int i) {
		return a[i];
	}
	Array(const Array& arr)
	{
		this->n = arr.n;
		this->a = new int[n];
		for (int i = 0; i < n; i++)
		{
			*(this->a + i) = *(arr.a + i);
		}
	}
	void show() {
		for (int i = 0; i < n; i++) cout << a[i] << ' ';
	}
};
int main() {
	Array a;
	Array b = a;
	b.show();
	return 0;
}

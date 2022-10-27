#include<iostream>
#include<string>
using namespace std;

class Singleton{
private:  // private hoặc protected cũng được.
    static Singleton* _singleton;  // global access point
    string _val;
    Singleton(const string& val) : _val(val) {}  

public:
    Singleton(const Singleton& other) = delete;
    void operator=(const Singleton& other) = delete;

    static Singleton* GetInstance(const string& value);

    string value() const {   return _val; }
    void setValue(const string& value) {_val = value;}
};
Singleton* Singleton::_singleton = nullptr;
Singleton* Singleton::GetInstance(const string& value) {
    if(_singleton == nullptr) 
        _singleton = new Singleton(value);

    return _singleton;
}

int main() {
    Singleton* a = Singleton::GetInstance("Phatnoo123");
    Singleton* b = Singleton::GetInstance("Nguyen Thi Truc Vy");
    cout << a->value() << endl;
    b->setValue("Nguyen Thi Truc Vy");
    cout << a->value() << endl;
}

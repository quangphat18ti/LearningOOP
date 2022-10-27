#include<iostream>
#include<string>
#include<vector>

using namespace std;

class multiSingleton{
public:
    static multiSingleton* arr[10];
private:
    static const int SIZE;

private:
    string _val;

    multiSingleton(){}
    multiSingleton(const string& val) : _val(val) {}

public:
    multiSingleton(const multiSingleton& other) = delete;
    void operator = (const multiSingleton& other) = delete;

    static multiSingleton*& GetInstance(const string& value);
    static void releaseInstance(multiSingleton*& ptr);

    string value() const {return _val;}
    void setValue(const string& value) {
        _val = value;
    }

public:
    friend ostream& operator <<(ostream& os, const multiSingleton &s);
};

multiSingleton* multiSingleton::arr[10] = {nullptr};
const int multiSingleton::SIZE = 2;

void multiSingleton::releaseInstance(multiSingleton*& ptr) {
    delete ptr;
    ptr = nullptr;
}

multiSingleton*& multiSingleton::GetInstance(const string& value) {
    static multiSingleton* ans = nullptr;
    for(int i = 0; i < multiSingleton::SIZE; i++) {
        if(multiSingleton::arr[i] == nullptr) {
            multiSingleton::arr[i] = new multiSingleton(value);
            return multiSingleton::arr[i];
            break;
        }
    }
    return ans;
}



ostream& operator << (ostream& os, const multiSingleton& s) {
    os << s._val ;
    return os;
}


int main() {
    multiSingleton*& a = multiSingleton::GetInstance("Cao Quang Phat");
    
    if(a) cout << (*a) << endl;
    else cout << "Khoi tao a that bai\n";

    multiSingleton*& b = multiSingleton::GetInstance("Nguyen Thi Truc Vy");

    if(b) cout << (*b) << endl;
    else cout << "Khoi tao b that bai\n";
    
    delete a; a = nullptr;
    multiSingleton* c = multiSingleton::GetInstance("abc");
    if(c) cout << (*c) << endl;
    else cout << "Khoi tao c that bai\n";
}

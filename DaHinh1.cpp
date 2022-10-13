#include<iostream>
using namespace std;

class Animal{
public:
    virtual void speak() {
        cout << "Animal is speaking..." << endl;
    }
};

class Cat: public Animal{
    virtual void speak() {  // virtual chỗ này là không bắt buộc
        cout << "Meo Meo Meo Meo Meo" << endl;
    }
};

class Dog: public Animal {
    virtual void speak() { // virtual chỗ này là không bắt buộc
        cout << "Gau Gau Gau" << endl;
    }
};

// Chỉ cần xây 1 hàm Speak cho tất cả các lớp con của Animal, quá tiện lợi
void speak(Animal& a) {
    a.speak();
}

int main(){
    Animal animal;
    Cat cat;
    Dog dog;

    speak(animal);  // Animal is speaking...
    speak(cat);     // Meo Meo Meo Meo Meo
    speak(dog);     // Gau Gau Gau
}

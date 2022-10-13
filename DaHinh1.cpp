#include<iostream>
using namespace std;

class Animal{
public:
    virtual void speak() {
        cout << "Animal is speaking..." << endl;
    }
};

class Cat: public Animal{
    void speak() {
        cout << "Meo Meo Meo Meo Meo" << endl;
    }
};

class Dog: public Animal {
    void speak() {
        cout << "Gau Gau Gau" << endl;
    }
};

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

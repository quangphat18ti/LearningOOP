#include<iostream>
using namespace std;

class Animal{
public:
    void speak() {
        cout << "Animal is speaking..." << endl;
    }
};

class Cat: public Animal{
    void speak() {
        cout << "Mèo Méo Meo Mèo Meo" << endl;
    }
};

class Dog: public Animal {
    void speak() {
        cout << "Gau Gau Gau" << endl;
    }
};

void speak(Animal a) {
    a.speak();
}

int main(){
    Animal animal;
    Cat cat;
    Dog dog;

    speak(animal);  // Animal is speaking...
    speak(cat);     // Animal is speaking...
    speak(dog);     // Animal is speaking...
}

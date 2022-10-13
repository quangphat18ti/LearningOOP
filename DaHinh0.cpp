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

void speakAnimal(Animal a) {
    a.speak();
}

int main(){
    Animal animal;
    Cat cat;
    Dog dog;

    speakAnimal(animal);  // Animal is speaking...
    speakAnimal(cat);     // Animal is speaking...
    speakAnimal(dog);     // Animal is speaking...
}

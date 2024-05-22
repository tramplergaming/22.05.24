#include <iostream>
#include <Windows.h>
#include <string>

class Animal 
{
public:
    Animal(const std::string& animalType, const std::string& animalName, const std::string& animalSound, int animalAge) : type(animalType), name(animalName), sound(animalSound), age(animalAge) 
    {

    }

    void Inf() 
    {
        std::cout << type << " " << name << " " << age << " ��� " << sound << std::endl;
    }
private:
    std::string name;
    std::string sound;
    std::string type;
    int age;
};

class Cat : public Animal 
{
public:
    Cat(const std::string& name, int age) : Animal("���", name, "���", age)
    {

    }
};

class Dog : public Animal 
{
public:
    Dog(const std::string& name, int age) : Animal("������", name, "���", age)
    {
    
    }
};

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Cat barsik("������", 5);
    Dog baron("�����", 10);

    barsik.Inf();
    baron.Inf();

    return 0;
}
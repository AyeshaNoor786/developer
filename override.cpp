#include<iostream>
using namespace std;

class Animal
{
	private:
		string type;
	public:
		Animal():type("Animal"){}
		virtual string gettype()
		{
			return type;
		}
};

class Cat:public Animal
{
	private:
		string type;
	public:
		Cat():type("Cat"){}
		string gettype() override
		{
			return type;
		}
};
class Dog:public Animal
{
	private:
		string type;
	public:
		Dog()
		{
			type="Dog";
		}
		string gettype() override
		{
			return type;
		}
};

void print(Animal *a)
{
	cout<<"Animal: "<<a->gettype()<<endl;
}

int main()
{
	Animal *animal=new Animal();
	Animal *cat=new Cat();
	Animal *dog=new Dog();
	
	print(animal);
	print(cat);
	print(dog);
}
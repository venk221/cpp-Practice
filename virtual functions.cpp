#include <iostream>

using namespace std;

class Entity{
public:

    string getName(){
        return "Entity";
    }

    virtual string getname(){
        return "Entity";
    }
    
};

class Player : public Entity{
    string m_name;
public:
    Player(const string& name): m_name(name) {  //constructor

    }

    string getName()
    {
        return m_name;
    }

    string getname(){
        return m_name;
    }
};


void PrintName(Entity* ent){
    cout <<"without virtual="<< ent->getName() <<endl;
    cout <<"with virtual="<< ent->getname()<<endl;

}

int main(){
    Entity* e = new Entity();
    cout << e->getName() <<endl;
    Player* p = new Player("venks");
    cout << p -> getName() <<endl;

    Entity* entity = p;    //object of base class but equal to pointer to inhertied class
    cout<< entity->getName() <<endl;


    //examples in functions for polymorphism
    PrintName(e);
    PrintName(p); //ideally we want printname to get the getname function from player class which is an entity class (inheriting entity class)

    return 0;
  }
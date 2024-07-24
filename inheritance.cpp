#include <iostream>

using namespace std;

class Entity{
public:
    float X, Y;

    void move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity{
public:
    const char* Name;

    void PlayerName(){
        cout<< Name << endl;
    
    }
    
};

int main(){

    Player player;
    player.move(1,2);
    player.X = 0;
    player.Y = 0;
    player.Name = "Venkatesh Mullur";
    player.PlayerName();
        
    return 0;
  }
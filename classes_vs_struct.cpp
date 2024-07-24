#include <iostream>

using namespace std;

class Player
{
public:
    int x, y, speed;            //by default visibilty modifier is private in a class but in struct it is public
                                // also struct does not allow inheritance but classes do. (struct cannot inherit from another struct 
                                // but struct inherit from another class)

    void move(int xa, int ya){
    x += xa * speed;
    y += ya * speed;
    cout<<"move= " << x << "\t" <<y <<endl;
    }

};

void move_out(Player& player, int xa, int ya){
    player.x += xa * player.speed;
    player.y += ya * player.speed;

    cout<<"move out= " << player.x << "\t" << player.y <<endl;
    }

int main(){

    Player player1;  //object of the instance
    player1.x = 5, player1.y = 6;
    player1.speed = 2;

    move_out(player1, 1, 2);

    player1.move(2,3);

    return 0;
  }
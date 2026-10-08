#include <iostream>
using namespace std;
class Player {
protected:
    string name;
    int level;
public:
    Player(string n, int l) {
        name = n;
        level = l;
    }
};
class Warrior : public Player {
    string weapon;
public:
    Warrior(string n, int l, string w) : Player(n, l) {
        weapon = w;
    }
    void display() {
        cout << "Name: " << name << "\nLevel: " << level
             << "\nWeapon: " << weapon << endl;
    }
};
class Wizard : public Player {
    int magicPower;
public:
    Wizard(string n, int l, int m) : Player(n, l) {
        magicPower = m;
    }
    void display() {
        cout << "Name: " << name << "\nLevel: " << level
             << "\nMagic Power: " << magicPower << endl;
    }
};
int main() {
    Warrior w("Arjun", 10, "Sword");
    Wizard z("Ravi", 8, 90);
    w.display();
    cout << endl;
    z.display();
    return 0;
}

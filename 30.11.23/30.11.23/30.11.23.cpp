#include <iostream>
#include <string>

using namespace std;

class Smartphone {
private:
    string brand;
    string model;
    double screenSize;
    int batteryLife;
    int storageCapacity;

public:
    void makeCall() {
    }

    void sendMessage() {
    }

    void takePhoto() {
    }

    void checkBatteryStatus() {
    }

    void installApp() {
    }
};

class Cat {
private:
    string name;
    int age;
    string color;
    string breed;
    bool isHungry;

public:
    void feed() {
    }

    void play() {
    }

    void sleep() {
    }

    void groom() {
    }

    void makeSound() {
    }
};

class Pen {
private:
    string color;
    string brand;
    bool isBallpoint;
    double inkLevel;
    bool isCapPresent;

public:
    void write() {
    }

    void changeColor() {
    }

    void refillInk() {
    }

    void click() {
    }

    void checkCap() {
    }
};

class RemoteControl {
private:
    string brand;
    int numOfButtons;
    bool hasBattery;
    bool isProgrammable;
    string compatibleDevices;

public:
    void powerOn() {
    }

    void powerOff() {
    }

    void changeChannel() {
    }

    void adjustVolume() {
    }

    void programButton() {
    }
};

class Coin {
private:
    int value;
    string countryOfOrigin;
    int yearOfMint;
    string material;
    bool isRare;

public:
    void flip() {
    }

    void inspect() {
    }

    void clean() {
    }

    void store() {
    }

    void evaluate() {
    }
};

int main() {
    Smartphone myPhone;
    Cat myCat;
    Pen myPen;
    RemoteControl myRemote;
    Coin myCoin;

    myPhone.makeCall();
    myCat.play();
    myPen.write();
    myRemote.changeChannel();
    myCoin.flip();

    return 0;
}
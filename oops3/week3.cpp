#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Compartment {
public:
    virtual string notice() = 0; // Pure virtual function
    virtual ~Compartment() {}
};


class FirstClass : public Compartment {
public:
    string notice() override {
        return "First Class Compartment";
    }
};

class Ladies : public Compartment {
public:
    string notice() override {
        return "Ladies Compartment";
    }
};

class General : public Compartment {
public:
    string notice() override {
        return "General Compartment";
    }
};

class Luggage : public Compartment {
public:
    string notice() override {
        return "Luggage Compartment";
    }
};

class TestCompartment {
public:
    static void mainFunction() {
        Compartment* arr[10];

        srand(time(0));

        for (int i = 0; i < 10; i++) {
            int choice = rand() % 4 + 1; // Random number 1-4

            switch (choice) {
                case 1:
                    arr[i] = new FirstClass();
                    break;
                case 2:
                    arr[i] = new Ladies();
                    break;
                case 3:
                    arr[i] = new General();
                    break;
                case 4:
                    arr[i] = new Luggage();
                    break;
            }
        }

        cout << "Compartment Notices:\n";
        for (int i = 0; i < 10; i++) {
            cout << "Compartment " << i + 1 << ": "
                 << arr[i]->notice() << endl;
        }

        for (int i = 0; i < 10; i++) {
            delete arr[i];
        }
    }
};

int main() {
    TestCompartment::mainFunction();
    return 0;
}
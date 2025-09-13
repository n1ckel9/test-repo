#include <iostream>

enum EDayofWeek {
    MONDAY,
    SUNDAY
};

class Car {
    private:
        int index;
    public:
        Car(int index) {
            this->index = index;
        }
        int x;  
        int getIndex() {
            return this->index;
        }
};



void swap_a(int &a, int &b) {
    int tmp = b;
    b = a;
    a = tmp;
}

void swap_pointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(std::string s) {
    std::cout << s;
}
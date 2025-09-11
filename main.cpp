#include<iostream>

int tick = 0;

void update() {
    tick++;
}

int main() {
    std::cout << "Hello World!" << std::endl;
    for (int i = 0; i < 10; i++) {
        update();
    }
    return 0;
}

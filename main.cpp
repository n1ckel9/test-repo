#include<iostream>

int tick = 0;

void update() {
    tick++;
}

int main(int argc, char** argv) {
    std::cout << "Hello World!" << " " << argv[2] << std::endl;
    for (int i = 0; i < 10; i++) {
        update();
    }
    return 0;
}

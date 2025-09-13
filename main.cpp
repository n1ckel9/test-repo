#include<iostream>
#include<limits>
#include<cstdint>
#include "sec.h"


void problemA() {
    int n; std::cin >> n;
    int values[n];
    for (int i = 0; i < n; i++) {
        std::cin >> values[i];
    }
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if (values[i - 1] < values[i] && values[i] > values[i + 1]) {
            count++;
        }
    }
    std::cout << count;
}

void problemB() {
    int n; std::cin >> n;
    int vec[n];
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }
    int target; std::cin >> target;
    
    int ans = 0;    
    for (int i = 0; i < n ; i++) {
        if (abs(vec[i] - target) < abs(vec[ans] - target)) {
            ans = i;
        }
    }
    std::cout << vec[ans];
}

void problemC() {
    std::string str; std::cin >> str;
    char ans = 'a';
    for (auto ch : str) {
        if (ch - 'a' > ans - 'a') {
            ans = ch;
        }
    }
    std::cout << ans;
}

void problemD() {
    int n; std::cin >> n;
    int id[n];
    for (int i = 0; i < n; i++) {
        std::cin >> id[i];
    }

    long long extramini = 3 * 1e9, mini = 3 * 1e9;
    for (int i = 0; i < n; i++) {
        if (id[i] <= extramini) {
            mini = extramini;
            extramini = id[i];
            continue;
        }
        if (id[i] <= mini) {
            mini = id[i];
        }
    }
    std::cout << extramini << " " << mini;
}

void problemE() {
    int n; std::cin >> n;
    int vec[n];
    for (int i = 0; i < n; i++) {
    std::cin >> vec[i];
    }
    std::cout << vec[n - 1] << " ";
    for (int i = 0; i < n - 1; i++) {
    std::cout << vec[i] << " ";
    }
}

void problemF() {
    int n, m, k; std::cin >> n >> m >> k;
    
    int matrix1[n][m], matrix2[m][k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            std::cin >> matrix2[i][j];
        }
    }
    int mult[n][k];    

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++ ) {
            mult[i][j] = 0;
            for (int ind = 0; ind < m; ind++) {
                mult[i][j] += matrix1[i][ind] * matrix2[ind][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << mult[i][j];
            if (j != k - 1) std::cout << " ";
        }

        if (i != n - 1) std::cout << '\n';
    }
}

int main(int argc, char** argv) 
{

    if (argc <= 1) {
        std::cout << "No args";
        return -1;
    }
    int program = std::stoi(argv[1]);
    switch (program) {
        case 1: 
            problemA();
            break;
        case 2: 
            problemB();
            break;
        case 3: 
            problemC();
            break;
        case 4: 
            problemD();
            break;
        case 5: 
            problemE();
            break;
        case 6: 
            problemF();
            break;
    }
    
    std::cout << "end\n";


    if (argc > 2 && argv[2] == "dev")
    {   
        int a = 1, b = 2;
        swap_a(a, b);
        std::cout << a << " " << b;
        swap_pointer(&a, &b);
        std::cout << a << " " << b;
    }
    return 0;
}

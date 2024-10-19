#include <iostream>

int main() {
    const int plusdoll = 3;

    std::cout << "\t\t\t===================================" << std::endl;
    std::cout << "\t\t\tTICKET SYSTEM FOR ROLLER COASTERS" << std::endl;
    std::cout << "\t\t\t===================================\n" << std::endl;
    std::cout << "What's your height?" << std::endl;
    int height;
    std::cin >> height;

    if (height > 120) {
        std::cout << "Can ride" << std::endl;
        std::cout << "PLease input your age: " << std::endl;
        int age;
        const int doll5 = 5;
        const int doll7 = 7;
        const int doll12 = 12;
        int dollrange;
        std::cin >> age;
        if (age < 12) {
            dollrange = doll5;
            std::cout << "$" << doll5 << std::endl;

        } else if (age >= 12 && age <= 18) {
            dollrange = doll7;
            std::cout << "$" << dollrange << std::endl;

        } else if (age > 18) {
            dollrange = doll12;
            std::cout << "$" << dollrange << std::endl;

        }
        std::cout << "Wanna photos?" << std::endl;
        char photo;
        std::cin >> photo;
        if (photo == 'y') {
            int total;
            total = dollrange + plusdoll;
            std::cout << "The total bill is $" << total << std::endl;
        } else if (photo == 'n') {
            std::cout << "The total bill is $" << dollrange << std::endl;
        } else if (height <= 120) {
                std::cout << "Can't ride" << std::endl;
            }
        return 0;
    }
}



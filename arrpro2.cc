#include <iostream>
#include <string>

std::string decimalToBinary(int decimalNumber) {
    if (decimalNumber == 0)
        return "0";

    std::string binary;
    while (decimalNumber > 0) {
        binary.insert(binary.begin(), '0' + (decimalNumber % 2));
        decimalNumber /= 2;
    }
    return binary;
}

int main() {
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    std::string binaryNumber = decimalToBinary(decimalNumber);
    std::cout << "Binary representation: " << binaryNumber << std::endl;

    return 0;
}

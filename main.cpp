#include <iostream>
#include <clocale>
//Test1
int main() {
    setlocale(LC_ALL, "");
    int choice;

    std::cout << "�������� ��������:\n";
    std::cout << "1. ��������\n";
    std::cout << "2. ���������\n";
    std::cout << "3. ���������\n";
    std::cout << "4. �������\n";

    std::cout << "������� ����� ��������: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "��� � ����������)\n";
            break;
        case 2:
            std::cout << "��� � ����������)\n";
            break;
        case 3:
            std::cout << "��� � ����������)\n";
            break;
        case 4:
            std::cout << "��� � ����������)\n";
            break;
        default:
            std::cout << "�������� �����. ���������� ��� ���.\n";
            break;
    }

    return 0;
}

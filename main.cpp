#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

int main(void) {
    //setlocale(LC_ALL,"Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string input, ask;
    std::string all, getcontent, arr[99];
	int i=0, n=0;

    std::ifstream infile;
	infile.open("text.txt");
	if(infile.is_open()) {
		while(getline(infile,getcontent)) {
			arr[i]=getcontent;
			i++;
		}
	}
    std::cout << "		����� ������" << std::endl << std::endl;
        std::cout << "������� ������� ������ �������" << std::endl;
        getline(std::cin, input);
		for(i=0;i<99;i++) {
			if(arr[i].find(input) != std::string::npos) { //arr[i] == input ������� ��� ������ �������� �� ������ ������� � �� �� �� �����
				n++;
                std::cout << "������� ����� ������ � ������ ��� ������� : " << i+1 << std::endl;
			}
		}
        if(n == 0) {
            std::cout << "������� ������ � ����� ��� =( " << std::endl;
        }
        Sleep(100000);


	return 0;
}

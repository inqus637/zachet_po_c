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
    std::cout << "		ѕоиск строки" << std::endl << std::endl;
        std::cout << "¬ведите искомую строку целиком" << std::endl;
        getline(std::cin, input);
		for(i=0;i<99;i++) {
			if(arr[i].find(input) != std::string::npos) { //arr[i] == input условие дл€ поиска значени€ по строке целиком а не по ее части
				n++;
                std::cout << "»скомый текст найден в строке под номером : " << i+1 << std::endl;
			}
		}
        if(n == 0) {
            std::cout << "искомой строки в файле нет =( " << std::endl;
        }
        Sleep(100000);


	return 0;
}

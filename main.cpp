#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
#include <vector>

int main(void) {
    //setlocale(LC_ALL,"Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string input, ask;
    std::string all, getcontent;
	int i=0, n=0;
    std::vector<std::string> arr{};
    std::ifstream infile;
	infile.open("text.txt");
	if(infile.is_open()) {
		while(getline(infile,getcontent)) {
            arr.push_back(getcontent);
			i++;
		}
	}
    std::cout << "		Поиск строки" << std::endl << std::endl;
        std::cout << "Введите искомую строку целиком" << std::endl;
        getline(std::cin, input);
		for(i=0;i<arr.size();i++) {
			if(arr[i].find(input) != std::string::npos) { //arr[i] == input условие для поиска значения по строке целиком а не по ее части
				n++;
                std::cout << "Искомый текст найден в строке : " << i+1 << std::endl;
			}
		}
        if(n == 0) {
            std::cout << "Искомый екст в файле не надйен =( " << std::endl;
        }
    getline(std::cin, input);


	return 0;
}

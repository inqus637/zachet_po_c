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
    std::cout << "		Ïîèñê ñòðîêè" << std::endl << std::endl;
        std::cout << "Ââåäèòå èñêîìóþ ñòðîêó öåëèêîì" << std::endl;
        getline(std::cin, input);
		for(i=0;i<99;i++) {
			if(arr[i].find(input) != std::string::npos) { //arr[i] == input óñëîâèå äëÿ ïîèñêà çíà÷åíèÿ ïî ñòðîêå öåëèêîì à íå ïî åå ÷àñòè
				n++;
                std::cout << "Èñêîìûé òåêñò íàéäåí â ñòðîêå ïîä íîìåðîì : " << i+1 << std::endl;
			}
		}
        if(n == 0) {
            std::cout << "èñêîìîé ñòðîêè â ôàéëå íåò =( " << std::endl;
        }
        getline(std::cin, input);


	return 0;
}

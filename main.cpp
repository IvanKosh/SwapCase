/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 18:15
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
	short i;
    while (getline(stream, line)) {
		for (i = line.length(); i--; ) {
			if (64 < line[i] && line[i] < 91) {
				line[i] += 32;
			}
			else if (96 < line[i] && line[i] < 123) {
				line[i] -= 32;
			}
		}
        cout << line << endl;
    }
	
	for (i = 65; i < 91; i++) {
		printf("%c", i);
	}
	cout << endl;
	for (i = 97; i < 123; i++) {
		printf("%c", i);
	}
    return 0;
}
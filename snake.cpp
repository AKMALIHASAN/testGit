// snake.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "snk.h"

#define width 50
#define height 25

using namespace std;


void board() {
    for (int i = 0; i < height; i++) {
        cout << "\t\t\t#";
        for (int j = 0; j < width - 2; j++) {
            if (i == 0 || i == height - 1)
                cout << "#";
           
                
            else cout << ' ';

        }
        cout << "#\n";
    }
}

int main()
{
    while (true) {
        board();
        x++;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });
    }
   
}
void tt() {

}

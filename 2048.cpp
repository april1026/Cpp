#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
#define UP 72
#define DOWN 80
#define LEFT 77
#define RIGHT 75
#define DIRECTION 224

using namespace std;

void go_to_xy(int, int);
void new_num();
void up();
void down();
void left();
void right();

int list[4][4] = {0};

int main() {
	
	new_num();
	
	int input;
	while(input = getch()) {
		
		if (input == DIRECTION) {
			
			switch (input) {
				case UP:
					
					break;
				case DOWN:
					
					break;
				case LEFT:
					
					break;
				case RIGHT:
					
					break;
			}
		}
	}
	
	
}

void new_num() {
	srand((unsigned)time(NULL));
	int x, y;
	x = rand() % 4;
	y = rand() % 4;
	
	int a = 1;
	while (a == 1) {
		if (list[y][x] == 0) {
			a = 0;
		} else {
			x = rand() % 4;
			y = rand() % 4;
		}
	}
	
	a = rand() % 2;
	if (a == 0)
		list[y][x] = 2;
	else if (a == 1)
		list[y][x] = 4;
}

void go_to_xy(int xpos, int ypos)
{
  COORD scrn;
  HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
  scrn.X = xpos; scrn.Y = ypos;
  SetConsoleCursorPosition(hOuput,scrn);
}

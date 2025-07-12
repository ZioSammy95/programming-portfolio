SnakeGame.cpp
#include <iostream>
#include <conio.h>  
#include <windows.h> 
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int width = 20;
const int height = 20;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };

struct Point {
    int x, y;
};

class SnakeGame {
private:
    bool gameOver;
    Direction dir;
    Point fruit;
    vector<Point> snake; // snake body: snake[0] = head
    int score;

public:
    SnakeGame() {
        gameOver = false;
        dir = STOP;
        snake.push_back({width / 2, height / 2}); // start in center
        placeFruit();
        score = 0;
    }

    void placeFruit() {
        srand(time(0));
        fruit.x = rand() % width;
        fruit.y = rand() % height;
    }

    void draw() {
        system("cls");

        for (int i = 0; i < width + 2; i++) cout << "#";
        cout << "\n";

        for (int y = 0; y < height; y++) {
            cout << "#";
            for (int x = 0; x < width; x++) {
                bool printed = false;

                if (snake[0].x == x && snake[0].y == y) {
                    cout << "O";
                    printed = true;
                }
                else {
                    for (size_t k = 1; k < snake.size(); k++) {
                        if (snake[k].x == x && snake[k].y == y) {
                            cout << "o";
                            printed = true;
                            break;
                        }
                    }
                    if (!printed) {
                        if (fruit.x == x && fruit.y == y) {
                            cout << "F";
                            printed = true;
                        }
                    }
                }
                if (!printed) cout << " ";
            }
            cout << "#\n";
        }

        for (int i = 0; i < width + 2; i++) cout << "#";
        cout << "\n";

        cout << "Score: " << score << "\n";
        cout << "Controls: W=Up S=Down A=Left D=Right, X=Exit\n";
    }

    void input() {
        if (_kbhit()) {
            switch (_getch()) {
            case 'a':
            case 'A':
                if (dir != RIGHT) dir = LEFT;
                break;
            case 'd':
            case 'D':
                if (dir != LEFT) dir = RIGHT;
                break;
            case 'w':
            case 'W':
                if (dir != DOWN) dir = UP;
                break;
            case 's':
            case 'S':
                if (dir != UP) dir = DOWN;
                break;
            case 'x':
            case 'X':
                gameOver = true;
                break;
            }
        }
    }

    void logic() {
        for (int i = snake.size() - 1; i > 0; i--) {
            snake[i] = snake[i - 1];
        }

        switch (dir) {
        case LEFT:
            snake[0].x--;
            break;
        case RIGHT:
            snake[0].x++;
            break;
        case UP:
            snake[0].y--;
            break;
        case DOWN:
            snake[0].y++;
            break;
        default:
            break;
        }

        if (snake[0].x < 0 || snake[0].x >= width || snake[0].y < 0 || snake[0].y >= height) {
            gameOver = true;
        }

        for (size_t i = 1; i < snake.size(); i++) {
            if (snake[i].x == snake[0].x && snake[i].y == snake[0].y) {
                gameOver = true;
            }
        }

        if (snake[0].x == fruit.x && snake[0].y == fruit.y) {
            score += 10;
            snake.push_back({-1, -1});
            placeFruit();
        }
    }

    void run() {
        while (!gameOver) {
            draw();
            input();
            logic();
            Sleep(100);
        }
        cout << "\nGame Over! Final Score: " << score << "\n";
    }
};  

int main() {
    SnakeGame game;
    game.run();
    return 0;
}

#include<iostream>
#include<iomanip>
using namespace std;

#define N 8

int sol[N][N];

bool isSafe(int x, int y, int sol[N][N]) {
    return (x >= 0 && x < N && y >= 0 && y < N && sol[x][y] == -1);
}

void printSolution(int sol[N][N]) {
    for (int x = 0; x < N; x++) {
        for (int y = 0; y < N; y++)
            cout << " " << setw(2) << sol[x][y] << " ";
        cout << endl;
    }
}

bool solveKTUtil(int x, int y, int move_i, int sol[N][N], int xMove[N], int yMove[N]) {
    int k, next_x, next_y;
    if (move_i == N * N)
        return true;

    for (k = 0; k < 8; k++) {
        next_x = x + xMove[k];
        next_y = y + yMove[k];
        if (isSafe(next_x, next_y, sol)) {
            sol[next_x][next_y] = move_i;
            if (solveKTUtil(next_x, next_y, move_i + 1, sol, xMove, yMove) == true)
                return true;
            else
                sol[next_x][next_y] = -1;
        }
    }

    return false;
}

bool solveKT() {
    int sol[N][N];

    for (int x = 0; x < N; x++)
        for (int y = 0; y < N; y++)
            sol[x][y] = -1;

    int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    sol[0][0] = 0;

    if (solveKTUtil(0, 0, 1, sol, xMove, yMove) == false) {
        cout << "Solution does not exist";
        return false;
    }
    else
        printSolution(sol);

    return true;
}

int main() {
    solveKT();
    return 0;
}

#include<iostream>
using namespace std;

int total_maze_path(int start_row, int start_column, int end_row, int end_column) {
    if (start_row > end_row || start_column > end_column)
        return 0;
    if (start_row == end_row && start_column == end_column)
        return 1;
    int right = total_maze_path(start_row, start_column + 1, end_row, end_column);
    int down = total_maze_path(start_row + 1, start_column, end_row, end_column);
    return right + down;
}

void print_maze_path(int start_row, int start_column, int end_row, int end_column, string path) {
    if (start_row > end_row || start_column > end_column)
        return;
    if (start_row == end_row && start_column == end_column) {
        cout << path << endl;
        return;
    }
    print_maze_path(start_row, start_column + 1, end_row, end_column, path + "R");
    print_maze_path(start_row + 1, start_column, end_row, end_column, path + "D");
}

int main() {
    int a, b;
    cout << "Enter Shape of Matrix: ";
    cin >> a >> b;
    cout << "Total Number of Paths: " << total_maze_path(0, 0, a-1, b-1) << endl;
    print_maze_path(0, 0, a-1, b-1, "");
    return 0;
}
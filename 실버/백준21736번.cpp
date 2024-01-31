#include <iostream>
#include <string>
using namespace std;

char map[601][601];
bool visited[601][601] = {false};
int cnt = 0;
int height, width;

void dfs(int x, int y) {
    if (x < 0 || x >= height || y < 0 || y >= width || map[x][y] == 'X' || visited[x][y]) {
        return;
    }

    visited[x][y] = true;

    if (map[x][y] == 'P') {
        cnt++;
    }

    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}

int main() {
    int target_x, target_y;
    cin >> height >> width;
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cin >> map[i][j];
            if (map[i][j] == 'I') {
                target_x = i;
                target_y = j;
            }
        }
    }

    dfs(target_x, target_y);

    if (cnt == 0) {
        cout << "TT";
    } else {
        cout << cnt;
    }

    return 0;
}

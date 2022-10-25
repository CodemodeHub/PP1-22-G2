#include <iostream>
using namespace std;

int main(){
  string moves; cin >> moves;
  int n, m; cin >> n >> m;
  char map[n][m];
  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      map[i][j] = 'X';
    }
  }

  int x = 0, y = 0;
  map[y][x] = '*';
  // D -> y++
  // U -> y--
  // R -> x++
  // L -> x--
  for(int i = 0; i < moves.size(); ++i){
    if(moves[i] == 'D') {
      y++;
    } else if(moves[i] == 'U') {
      y--;
    } else if(moves[i] == 'R') {
      x++;
    } else if(moves[i] == 'L'){
      x--;
    }
    map[y][x] = '*';
  }

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < m; ++j){
      cout << map[i][j];
    }
    cout << endl;
  }
}
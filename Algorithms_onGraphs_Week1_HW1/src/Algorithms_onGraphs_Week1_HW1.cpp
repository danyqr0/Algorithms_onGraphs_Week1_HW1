//============================================================================
// Name        : Algorithms_onGraphs_Week1_HW1.cpp
// Author      : Daniel Ramirez
// Version     :
// Copyright   : HW1_Week1
// Description : Graph Representation in Programming Assignments in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using std::vector;
using std::pair;


int reach(vector<vector<int> > &adj, int x, int y) {
  //write your code here
  return 0;
}

int main() {
  size_t n, m;
  std::cin >> n >> m;
  vector<vector<int> > adj(n, vector<int>());
  for (size_t i = 0; i < m; i++) {
    int x, y;
    std::cin >> x >> y;
    adj[x - 1].push_back(y - 1);
    adj[y - 1].push_back(x - 1);
  }
  int x, y;
  std::cin >> x >> y;
  std::cout << reach(adj, x - 1, y - 1);
}


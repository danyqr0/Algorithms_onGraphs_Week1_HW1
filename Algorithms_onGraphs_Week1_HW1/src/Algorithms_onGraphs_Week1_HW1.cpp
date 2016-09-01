//============================================================================
// Name        : Algorithms_onGraphs_Week1_HW1.cpp
// Author      : Daniel Ramirez
// Version     :
// Copyright   : HW1_Week1
// Description : Finding an exit from a Maze
//============================================================================

#include <iostream>
#include <vector>

#define constraints_n_m(n,m) ((n>2 && n<=10e3) && (m>1 && m<=10e3) )
#define constraints_u_v(x,y) (x>=1 && x!=y)

using std::vector;
using std::pair;
using std::cout;

//prototypes
void explore(vector<vector<int> > &adj, vector<bool> &adj_v, int x);
int reach(vector<vector<int> > &adj, int x, int y);

//Global variables
size_t n, m;

void explore(vector<vector<int> > &adj, vector<bool> &adj_v, int x){
   vector<int>::iterator it;
   adj_v[x]=true;
   for(it=adj[x].begin();it!=adj[x].end();it++){
	   if(adj_v[*it]==false)
	       explore(adj,adj_v,*it);
   }
}

int reach(vector<vector<int> > &adj, int x, int y) {
	vector<bool> adj_v(n,false);
	explore(adj,adj_v,x);
    if(adj_v[y]==true)
    	return 1;
    return 0;
}

int main() {
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
  std::cout << reach(adj,x - 1, y - 1);
}


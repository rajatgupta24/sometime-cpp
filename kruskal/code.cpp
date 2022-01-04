#include<iostream>  
#include<algorithm>  
#include<vector>  
using namespace std;  
class Edge{  
 public:  
 int ss, dd, ww; Edge(  
int ss, int dd, int ww){  
this->ss = ss; this->dd  
= dd; this->ww = ww;  
 }  
};  
class Graph{  
 public:  
 vector<Edge> All_edges;  
void addEdge(int s, int d, int w){  
Edge obj(s, d, w);  
 All_edges.push_back(obj);  
 }  
};  
void displayMST(const vector<Edge> &);  
class Kruskal {  
 public:  
 int totalVertices; 
vector<pair<int,int>> subsets;  
vector<Edge> mst; Kruskal( int  
totalVertices){ this->totalVertices =totalVertices;  
subsets.resize(totalVertices);  
for( int i= 0; i<totalVertices; ++i){  
subsets[i].first =i;  
subsets[i].second = 0;  
 }  
 }  
 static bool comparator( Edge &a , Edge& b){  return a.ww < b.ww;  
 }  
 void createMST( Graph& graph){ sort(  
graph.All_edges.begin(), graph.All_edges.end(), comparator );   int i=0, e=0; while( e < (totalVertices-1) && i <  graph.All_edges.size() ){ Edge currEdge =  graph.All_edges[i++]; int x = _find( currEdge.ss);  int y = _find( currEdge.dd);  
 if( x != y) {  
 mst.push_back( currEdge );  
makeUnion( x, y);  
 }  
 }  
 displayMST( mst );  
 }  
 int _find( int i){ if(  
subsets[i].first!=i){ subsets[i].first =  
_find( subsets[i].first ); } 
 return subsets[i].first;  
 }  
 void makeUnion( int x, int y){ int xroot =  _find( x); int yroot = _find(y); if(  subsets[xroot].second < subsets[yroot].second){  subsets[xroot].first= yroot;  
 }  
 else if( subsets[xroot].second > subsets[yroot].second){  subsets[yroot].first=xroot;  
 }  
 else{  
 subsets[xroot].first=yroot;  
subsets[yroot].second++;  
 }  
 }  
};  
void displayMST( const vector<Edge>& edges){ int  totalMinimumCost=0; cout<<"All MST edges [source  - destination = weight]\n";  
 for( auto edge : edges){ cout<<edge.ss<<" - "<<edge.dd<<" = "<<edge.ww<<'\n';  
 totalMinimumCost+=edge.ww;  
 }  
 cout<<"total minimum cost = "<<totalMinimumCost<<endl;  }  
int main(){  
Graph g; 
 g.addEdge(0, 1, 50);  
 g.addEdge( 0 , 2, 10);  
 g.addEdge(0, 3, 50);  
 g.addEdge(1, 4, 30);  
 g.addEdge(3, 4, 100);  
 g.addEdge(2, 4, 100);  
Kruskal graph(5);  
graph.createMST( g);  
 return 0;  
} 

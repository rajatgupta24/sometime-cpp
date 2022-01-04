#include<iostream>  
#include<climits>  
using namespace std;  
#define V 4  
int minimumDist(int dist[], bool Tset[])  
{  
int min=INT_MAX,index;  
  
for(int i=0;i<V;i++)  
{  
if(Tset[i]==false && dist[i]<=min)  
{  
min=dist[i];  
index=i;  
}  
}  
return index;  
}  
void Dijkstra(int graph[V][V],int src){  
int dist[V];  
bool Tset[V]; for(int i =  
0; i<V; i++)  
{  
dist[i] = INT_MAX;  
Tset[i] = false;  
} 
dist[src] = 0;  
for(int i = 0; i<V; i++)  
{  
int m=minimumDist(dist,Tset);  
Tset[m]=true;  
for(int i = 0; i<V; i++){  
 if(!Tset[i] && graph[m][i] && dist[m]!=INT_MAX && dist[m]+graph[m][i]<dist[i])  dist[i]=dist[m]+graph[m][i];  
}  
}  
cout<<"Vertex\t\tDistance from source"<<endl;  
for(int i = 0; i<V; i++) {  
char str=65+i;  
cout<<str<<"\t\t\t"<<dist[i]<<endl;  
}  
}  
int main()  
{  
int graph[V][V];  
cout<< "Enter the vertices for a graph with 4  vetices"<<endl;
 for (int i = 0; i < V; i++) { 
     for (int j =  0; j < V; j++){ cin>> graph[i][j];  
 }  
}  
Dijkstra(graph,0);  
return 0;  
} 

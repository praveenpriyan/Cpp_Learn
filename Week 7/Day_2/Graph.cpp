#include<iostream>
#include<vector>
#include<list>

using namespace std;

class GraphMatrix{
private:
    int numVertices;
    vector<vector<int>> adjMatrix;

public:
    GraphMatrix(int vertices){
        numVertices=vertices;
        adjMatrix.resize(vertices,vector<int>(vertices,0));
    }

    void addEdge(int src, int dest)
    {
        adjMatrix[src][dest]=1;
        adjMatrix[dest][src]=1;
    }

    void display()
    {
        cout<<"Adjacency Matrix: "<<endl;
        for(int i=0;i<numVertices;++i)
        {
            for(int j=0;j<numVertices;++j)
            {
                cout<<adjMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

class GraphList{
private:
    int numVertices;
    vector<list<int>> adjList;
public:
    GraphList(int vertices)
    {
        numVertices=vertices;
        adjList.resize(vertices);
    }
    void addEdge(int src, int dest)
    {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src);
    }
    void display()
    {
        cout<<"Adjacency List: "<<endl;
        for(int i=0;i<numVertices;i++)
        {
            cout<<i<<": ";
            for(int neighbor: adjList[i])
            {
                cout<<neighbor<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int vertices=5;

    GraphMatrix gMatrix(vertices);
    gMatrix.addEdge(0, 1);
    gMatrix.addEdge(0, 4);
    gMatrix.addEdge(1, 2);
    gMatrix.addEdge(1, 4);
    gMatrix.addEdge(2, 1);
    gMatrix.addEdge(2, 3);
    gMatrix.display();
    cout<<endl;

    GraphList gList(vertices);
    gList.addEdge(0, 1);
    gList.addEdge(0, 4);
    gList.addEdge(1, 3);
    gList.addEdge(1, 1);
    gList.addEdge(2, 1);
    gList.addEdge(2, 4);
    gList.display();
    cout<<endl;
}
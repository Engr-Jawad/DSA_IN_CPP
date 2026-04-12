//#include<iostream>
//#include<vector>
// #include<list>
// using namespace std;

// class graph{
//     int v;
//     list<int> *l; // dynamic array
//     public:
//     graph(int v){
//         this->v = v;
//         l = new list<int> [v];


//     }
//     void addedge(int u,int v){
//         l[u].push_back(v);
//         l[v].push_back(u);
//     }
//     void  printadj(){
//         for (int i=0;i<v;i++){
//             cout<< i << " : ";
//             for (int neigh : l[i]){
//                 cout<<neigh<<" : ";
//             }
//             cout<<endl;
//         }
//     }
// };

// int main(){
//     graph g(5);
//     g.addedge(0,1);
//     g.addedge(1,2);
//     g.addedge(1,3);
//     g.addedge(2,3);
//     g.addedge(2,4);
//     g.printadj();

//     return 0;
// }






#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;
class graph{
    int v;
    list<int> * l;
    public:
    graph(int v){
        this -> v = v;
        l = new list<int>[v];
    }
    void addedge(int vertex_one,int vertex_two){
        l[vertex_one].push_back(vertex_two);
        l[vertex_two].push_back(vertex_one);

    }
     void adjacencylist(){
        for (int i=1;i<v;i++){
            cout<<i<<" : ";
             for(int neigh : l[i]){
                cout<<neigh <<" : ";

             }
             cout<<endl;
        }
     }

    // breadth first search
    void bfs(){
        queue<int> Q;
        vector<bool> vis(v,false); // boolean array 
        Q.push(0); // source node eaquall to 0
        vis[0]=true;
        while (Q.size() > 0){
            int source = Q.front();
            Q.pop();
            cout<<source<< " ";
            for (int v : l[source]){
                if (!vis[v]){
                    vis[v]=true;
                    Q.push(v);
                }
            }
        }
        cout<<endl;
    }
    void dfshelper(int source,vector<bool> &vis){
        cout<<source<< " ";
        vis[source]=true;
        for(int vertice : l[source]){
            if (!vis[vertice]){
                dfshelper(vertice,vis);
            }
        }
    }
    void dfs(){
        int src=0;
        vector<bool> vis(v,false);
        dfshelper(src,vis);
    }
};
int main(){
    graph g(7);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(1,3);
    g.addedge(2,1);
    g.addedge(2,4);
    g.addedge(3,6);

   

    g.adjacencylist();
    cout<<"breadth first search\n";
    g.bfs();
    cout<<"deafth first search \n";
    g.dfs();
    return 0;
}
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
using namespace std;

class graph {
    int v;
    list<int> * l;

    public:
    // constructor 
    graph(int v){
        this -> v = v;
        l = new list<int> [v];
    }

    void addedge(int v,int u){
         if (u >= this->v || v >= this->v) {
            cout << "Error: Vertex out of range!" << endl;
            return;
        }
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void adjlist(){
        for (int i= 1; i<v;i++){
            cout<< i << " : ";
            for (int neigh : l[i]){
                cout<< neigh << " : ";
            }
            cout<<endl;
            
        }
    }
};
int main(){
    graph g(8);
    g.addedge(1,2);
    g.addedge(2,3);
    g.addedge(3,4);
    g.addedge(4,5);
    g.addedge(4,6);
    g.addedge(5,4);
    g.addedge(6,4);
    g.addedge(6,7);

    g.adjlist();
    return 0;
}
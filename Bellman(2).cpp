#include<iostream>
using namespace std;

struct edge{
    int src;
    int dest;
    int wt;

};


class Graph{
    struct edge * E;
    int e,v,s_v;
    public:
    Graph(int v1,int e1){
        this->v = v1;
        this->e = e1;
        E = new edge[e1];
    } 

    void input_e(){
        int s,d,wt;
        for(int i = 0; i<e-1;i++){
            cin>>s>>d>>wt;
            E[i].src =s;
            E[i].dest =d;
            E[i].wt =wt;
        }
    }
    void Bellman_Ford(){
        int u,v,cost;
        input_e();
        cin>>s_v;
        int dist_arr[v] = {999};
        dist_arr[s_v] = 0;
        for(int k = 1;k<=v-1;k++){
            for(int i = 1;i<=e;k++){
                u = E[i].src;
                v = E[i].dest;
                cost = E[i].wt;
            }
            if(dist_arr[v] > dist_arr[u] + cost){
                dist_arr[v] = dist_arr[u] + cost;
            }
        }
        for(int i = 0;i<v;i++){
            cout<<dist_arr[i]<<" ";
        }
    }
};




int main(){
    int v,e;
    cin>>v>>e;
    Graph G(v,e);
    G.Bellman_Ford();
    return 0;
}
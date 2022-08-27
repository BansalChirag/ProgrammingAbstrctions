#include<iostream>
using namespace std;

struct Edge{
    int src,dest,wt;
};


    
void bellman_ford(int v,int e,int dist_arr[],Edge E[],int src){
    for(int k = 1;k<v-1;k++){
        for(int i = 1;i<=e;i++){
            int a = E[i].src;
            int b = E[i].dest;
            int c = E[i].wt;
            if(dist_arr[b] > dist_arr[a] + c){
                dist_arr[b] = dist_arr[a] + src;
            }
        }
    }
}



int main(){
    int V,E;
    cin>>V>>E;
    Edge edges[E];
    for(int i = 0;i<E;i++){
        cin>>edges->src>>edges->dest>>edges->wt;
    }
    int dist_arr[V] = {INT_MAX};
    int src;
    cin>>src;
    dist_arr[V] = 0;
    bellman_ford(V,E,dist_arr,edges,src);

    return 0;
}
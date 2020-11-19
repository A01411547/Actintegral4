

#include <iostream>
#include <cstring>
#include "graph.h"

using namespace std;

int main(int argc, char* argv[]) {

    cout << "Bienvenid@ al sistema de busqueda de casas. " << endl;
    cout << "=======================================" << endl;
// nota: poner aqui el atom

    Graph g;
    Graph star;

    string g_ans, g_ans_2;
    string star_ans, star_ans_2;

    g.loadGraphList("datos.txt", 7, 7);



    cout << " 1 " <<	(true == (g.isTree()) ? "success\n" : "fail\n");


    g_ans = "0 4 5 1 3 6 2";
    cout << " 3 " <<	( (!g_ans.compare(g.topologicalSort()) || !g_ans_2.compare(g.topologicalSort())) ? "success\n" : "fail\n");

    star_ans = "0 1 2 3 4";

    cout << " 5 " <<	(true == (g.bipartiteGraph()) ? "success\n" : "fail\n");


}
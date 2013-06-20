#ifndef __DFS_HPP__
#define __DFS_HPP__

namespace al {

struct node
{
    int info;
    struct node *next;
};

class Stack
{
public:
    Stack();
    int pop();
    void push(int);
    bool is_empty();
    void display();

private:
    struct node *top;
};

Stack::Stack()
{
    top = NULL;
}

void Stack::push(int data)
{
    node *ptr;

    if (!(ptr = new node)) {
        std::cout<<"Memory Exhausted";
        exit(0);
    }

    ptr->info = data;
    ptr->next = NULL;

    if (top != NULL) {
        ptr->next = top;
    }
    top = ptr;
}

int Stack::pop()
{
    struct node *temp;
    int value;
    if (top == NULL) {
        std::cout << "\nThe stack is Empty" << std::endl;
    } else {
        temp = top;
        top = top->next;
        value = temp->info;
        delete temp;
    }
    return value;
}

bool Stack::is_empty()
{
    return (top == NULL);
}

void Stack::display()
{
    struct node *p = top;
    if (top == NULL) {
        std::cout << "\nNothing to Display\n";
    } else {
        std::cout << "\nThe contents of Stack\n";
        while (p != NULL) {
            std::cout << p->info << std::endl;
            p = p->next;
        }
    }
}

class Graph
{
public:
    Graph(int size);
    ~Graph();
    bool is_connected(int , int);
    void add_edge(int x, int y);
    int DFS(int , int);

private:
    int n;
    int **graph;
};
 
Graph::Graph(int size)
{
    int i, j;
    if (size < 2)
        n = 2;
    else
        n = size;

    graph = new int*[n];
    for (i = 0; i < n; i++)
        graph[i] = new int[n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            graph[i][j] = 0;
}

Graph::~Graph()
{
    for (int i = 0; i < n; i++)
        delete [] graph[i];
    delete [] graph;
}

bool Graph::is_connected(int x, int y)
{
    return (graph[x-1][y-1] == 1);
}

void Graph::add_edge(int x, int y)
{
    graph[x-1][y-1] = graph[y-1][x-1] = 1;
}

int Graph::DFS(int x, int key)
{
    Stack   s;
    int     i;
    bool *visited = new bool[n+1];

    for (i = 0; i <= n; i++)
        visited[i] = false;
    s.push(x);
    visited[x] = true;

    while (!s.is_empty()) {
        int k = s.pop();
        std::cout << k << ' ';
        if (k == key)
            return 1;

        for (i = n; i >= 0; i--) {
            if (is_connected(k, i) && !visited[i]) {
                s.push(i);
                visited[i] = true;
            }
        }
    }

    delete [] visited;
    return 0;
} 

}
 
#endif





#include <iostream>
#include <list>
#include <stack>
#include <queue>

class TreeNode
{
public:
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class Graph {
public:
    std::list<int> vertices;
    std::list<std::pair<int, int>> edges;

    void addVertex(int vertex) {
        vertices.push_back(vertex);
    }

    void addEdge(int from, int to) {
        edges.push_back(std::make_pair(from, to));
    }

    void printGraph() {
        for (auto edge : edges) {
            std::cout << edge.first << " -> " << edge.second << std::endl;
        }
    }
};

// Función de recorrido en orden (Inorder Traversal) para el Árbol Binario
void inorderTraversal(TreeNode* node)
{
    if (node != nullptr) {
        inorderTraversal(node->left);
        std::cout << node->value << " ";
        inorderTraversal(node->right);
    }
}

int main()
{
    // Lista Enlazada
    std::list<int> linkedList;
    linkedList.push_back(1);
    linkedList.push_back(2);
    linkedList.push_back(3);

    std::cout << "Linked List:" << std::endl;
    for (auto item : linkedList) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    // Pila
    std::stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "\nStack:" << std::endl;
    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }
    std::cout << std::endl;

    // Cola
    std::queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);

    std::cout << "\nQueue:" << std::endl;
    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        queue.pop();
    }
    std::cout << std::endl;

    // Árbol Binario
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    std::cout << "\nBinary Tree (Inorder Traversal):" << std::endl;
    inorderTraversal(root);
    std::cout << std::endl;

    // Grafo No Dirigido
    Graph graph;
    graph.addVertex(1);
    graph.addVertex(2);
    graph.addVertex(3);

    graph.addEdge(1, 2);
    graph.addEdge(2, 3);

    std::cout << "\nGraph Representation:" << std::endl;
    graph.printGraph();

    delete root->left;
    delete root->right;
    delete root;

    return 0;
}




// 10038: Disk Tree
#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

struct Node
{
    map<string, Node*> child; // string: folder name, Node: next ptr
};

void insertpath(Node* root, string& path)
{
    stringstream ss(path);
    string temp;

    Node *curr = root;

    while(getline(ss, temp, '\\'))
    {
        if(curr->child.count(temp) == 0) // 如果下一條不存在 就創一個
        {
            curr->child[temp] = new Node();
        }
        curr = curr->child[temp];
    }
}

void printing(Node* root, int depth)
{
    for(auto &p : root->child) // 對 node 的所有 child DFS 輸出 tree
    {
        for(int i = 0;i<depth;++i) // 第幾層就輸出幾個空格
        {
            cout << " ";
        }
        cout << p.first << "\n"; 
        printing(p.second, depth+1);
    }
}

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    Node* root = new Node();
    
    for(int i = 0;i<N;++i)
    {
        string path;
        getline(cin,path);
        insertpath(root, path);
    }

    printing(root, 0);
    return 0;
}
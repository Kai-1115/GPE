#include <iostream>
#include <map>
#define LL long long
using namespace std;

struct Node
{
    map<string, Node*> child;
};

void insert()
{

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    Node *root = new Node();

    for(int i = 0; i < n; ++i)
    {
        string path;
        cin >> path;
        insert(root, path)
    }
    
    return 0;
}
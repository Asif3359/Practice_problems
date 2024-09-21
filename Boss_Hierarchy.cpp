#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    long long int Val;
    Node *left;
    Node *right;

    Node(long long int Val)
    {
        this->Val = Val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *constructTree(long long int arr[], long long int start, long long int end)
{

    if (start > end)
    {
        return nullptr;
    }

    long long int mid = start + (end - start) / 2;
    Node *root = new Node(arr[mid]);

    root->left = constructTree(arr, start, mid - 1);
    root->right = constructTree(arr, mid + 1, end);

    return root;
}

void levelOrderTraversal(Node *root)
{
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
        cout << current->Val << " ";

        if (current->left)
        {
            q.push(current->left);
        }
        if (current->right)
        {
            q.push(current->right);
        }
    }
}

int main()
{
    long long int n;
    cin >> n;

    long long int m = pow(2, n) - 1;
    long long int arr[m + 1];

    for (long long int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    Node *root = constructTree(arr, 0, m - 1);

    levelOrderTraversal(root);
    cout << endl;

    return 0;
}


// C++ program to print all paths with sum k.
#include <bits/stdc++.h>
using namespace std;
 
//utility function to print contents of
//a vector from index i to it's end
void printVector(const vector<int>& v, int i)
{
    for (int j=i; j<v.size(); j++)
        cout << v[j] << " ";
    cout << endl;
}
 
// binary tree node
struct Node
{
    int data;
    Node *left,*right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
 
// This function prints all paths that have sum k
void printKPathUtil(Node *root, vector<int>& path,
                                           int k)

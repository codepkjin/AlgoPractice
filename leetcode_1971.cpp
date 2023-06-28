class Solution {
public:

    int findSet(int x, vector<int> &tree) {
        if (tree[x] == x) {
            return x;
        }
        else {
            return findSet(tree[x], tree);
        }
    } 

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        vector<int> tree(n);

        for (int i = 0; i < n; i++) {
            tree[i] = i;
        }

        for (int i = 0; i < edges.size(); i++) {
            tree[findSet(edges[i][1], tree)] = findSet(edges[i][0], tree);
        }

        return findSet(source, tree) == findSet(destination, tree);
        
    }
};

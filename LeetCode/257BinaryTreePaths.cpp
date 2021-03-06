#include <iostream>
#include <vector>
#include <string>
using namespace std;
/**
 * Definition for a binary tree node.
 */
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> res;
		string s = "";
		findPaths(root, s, res);
		return res;
	}
private:
	void findPaths(TreeNode* root, string s, vector<string>& res) {
		if (root == NULL) return;
		s += to_string(root->val);// 注意是c++11
		if (root->left == NULL && root->right == NULL) {
			res.push_back(s);
		}
		else {
			s += "->";
		}
		findPaths(root->left, s, res);
		findPaths(root->right, s, res);
	}
};
// 构造二叉树
int TreeNodeCreate(TreeNode* &tree) {
	int val;
	cin >> val;
	if (val < 0) // 小于0表示空节点
		tree = NULL;
	else {
		tree = new TreeNode(val); // 创建根节点
		tree->val = val;
		TreeNodeCreate(tree->left); // 创建左子树
		TreeNodeCreate(tree->right);// 创建右子树
	}
	return 0;
}
int main() {
	Solution s;
	TreeNode* tree;
	TreeNodeCreate(tree);
	vector<string> res = s.binaryTreePaths(tree);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	return 0;
}
/*
input:
1
2
-1 5
-1 -1
3
-1 -1

output:
1->2->5
1->3
 */
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 * int val;
 * TreeNode left;
 * TreeNode right;
 * TreeNode() {}
 * TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) {
 * this.val = val;
 * this.left = left;
 * this.right = right;
 * }
 * }
 */
class Solution {
    public List<Integer> rightSideView(TreeNode root) {
        ArrayList<Integer> ans = new ArrayList<>();
        right(root, ans, 0);
        return ans;
    }

    private void right(TreeNode root, ArrayList<Integer> ans, int i) {
        if (root == null)
            return;
        if (i == ans.size())
            ans.add(root.val);
        right(root.right, ans, i + 1);
        right(root.left, ans, i + 1);
    }
}
import java.util.*;

import javax.swing.plaf.synth.SynthOptionPaneUI;

// time complexcity is O(n) or linear
public class BinaryTressYT {
    static class Node {
        int data;
        Node left;
        Node right;
        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }
  
    static class BinaryTree {
        static int idx = -1;
        public static Node buildTree(int nodes[]) {
            idx++;
            if(nodes[idx] == -1) {
                return null;
            }
            Node newNode = new Node(nodes[idx]); 
            newNode.left = buildTree(nodes);
            newNode.right = buildTree(nodes);
            return newNode;
        }
    }
         public static void preoder(Node root) {
            if(root==null)
            {
                return ;
            }
            System.out.println(root.data);
            preoder(root.left);
            preoder(root.right);

         }
         public static void inoder(Node root) {
            if(root==null)
            {
                return;
            }
            inoder(root.left);
            System.out.println(root.data);
            inoder(root.right);
         }
         public static void postoder(Node root) {
            if(root==null)
            {
                return ;
            }
            postoder(root.left);
            postoder(root.right);
            System.out.println(root.data);
         }

         public static void levelOrder(Node root) {
            if(root == null) {
                return;
            }
            Queue<Node> q = new LinkedList<>();
            q.add(root);
            q.add(null);
            while(!q.isEmpty()) {
                Node curr = q.remove();
                if(curr == null) {
                    System.out.println();
                    //queue empty
                    if(q.isEmpty()) {
                        break;
                    } else {
                        q.add(null);
                    }
                } else {
                    System.out.print(curr.data+" ");
                    if(curr.left != null) {
                        q.add(curr.left);
                    }
                    if(curr.right != null) {
                        q.add(curr.right);
                    }
                }
            }
        }
     public static int  countOfNodes(Node root) {
        if(root==null)
        {
            return 0;
        }
        int leftroot=countOfNodes(root.left);
        int rigthroot=countOfNodes(root.right);
        return leftroot+rigthroot+1;
     }
     public static int sumOfNodes(Node root) {
        if(root==null)
        {
            return 0;
        }
        int leftroot=sumOfNodes(root.left);
        int rigthroot=sumOfNodes(root.right);
        return leftroot+rigthroot+root.data;
     }
     public static int height(Node root) {
        if(root==null)
        {
            return 0;
        }
        int lefthight=height(root.left);
        int rightheigth=height(root.right);
        int myheigth=Math.max(lefthight,rightheigth)+1;
        return myheigth;
     }
     public static int DiameterOfTree(Node root) {//O(n^2)
        if(root==null)
        {
            return 0;
        }
        int diam1=DiameterOfTree(root.left);
        int diam2=DiameterOfTree(root.right);
        int diam3=height(root.left)+height(root.right)+1;
        return Math.max(diam3, Math.max(diam1, diam2));
     }
     static class TreeInfo
     {
        int ht;
        int diam;
        TreeInfo(int ht,int diam)
        {
            this.ht=ht;
            this.diam=diam;
        }
     }
     public static TreeInfo diameter2(Node root) {
        if(root==null)
        {
            return new TreeInfo(0, 0);
        }
        TreeInfo left=diameter2(root.left);
        TreeInfo right=diameter2(root.right);

        int myheight=Math.max(left.ht, right.ht)+1;

        int diam1=left.diam;
        int diam2=right.diam;
        int diam3=left.ht+right.ht+1;

        int mydiam=Math.max(Math.max(diam1, diam2), diam3);

        TreeInfo myInfo =new TreeInfo(myheight,mydiam);
        return myInfo;
     }
/**
 * @param root
 * @param subroot
 * @return
//  */
// public static boolean isIdentical(TreeNode root,TreeNode subroot) {//pending
//     if(root==null && subroot==null)// this condititon right for leaf 
//     {
//         return true;
//     }
//     if(root == null || subroot== null)
//     {
//         return false;
//     }
//     if(root.val== subroot.val)
//     {
//         return isIdentical(root.left, subroot.left) && isIdentical(root.right, subroot.right);
//     } 
//     return false;
    
// }
//      public static boolean isSubtree(TreeNode root,TreeNode subroot) {//pending
//         if(subroot==null)//it is match with main root
//         {
//             return true;
//         }
//         if(root==null)
//         {
//             return false;
//         }

//         if(subroot.val==root.val)
//         {
//             if(isIdentical(root, subroot))
//             {
//                 return true;
//             }
//         }

//         return isSubtree(root.left, subroot) || isSubtree(root.right, subroot);
//      }
     public static int SumOfKth(Node root) {
        if(root==null)
        {
            return 0;
        }
        int leftroot=SumOfKth(root.left);
        int rightroot=SumOfKth(root.right);
        return leftroot+rightroot+1;
     }


    public static void main(String args[]) {
        int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
        BinaryTree tree = new BinaryTree();
       
        Node root = tree.buildTree(nodes);
        System.out.println("preorder tree");
        preoder(root);
        System.out.println("inorder tree");
        inoder(root);
        System.out.println("postorder tree");
        postoder(root);
        System.out.println("levelorder tree");
        levelOrder(root);
        System.out.println("countOfNode");
        //countOfNodes(root);
        System.out.println(countOfNodes(root));
        System.out.println("sumOfNodes");
        System.out.println(sumOfNodes(root));
        System.out.println("heigth of trees");
        System.out.println(height(root));
        System.out.println("Diameter Of Tree that is TC O(n^2)");
        System.out.println(DiameterOfTree(root));
        System.out.println("Diameter Of Tree that is TC O(n)");
        System.out.println(diameter2(root).diam);
    }
 }
 
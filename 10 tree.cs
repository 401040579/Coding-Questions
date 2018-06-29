using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Tree
{
    class Node
    {
        public int data;
        public Node left, right;

        public Node(int data)
        {
            this.data = data;
            left = right = null;
        }
    }

    class BinaryTree
    {
        public Node root;

        public BinaryTree()
        {
            root = null;
        }

        void printLevelOrderHelper(Node root)
        {
            if (root == null) return;

            Queue<Node> q = new Queue<Node>();

            q.Enqueue(root);

            while(true)
            {
                int totalNode = q.Count;

                if (totalNode == 0) break;

                while (totalNode > 0)
                {
                    Node node = q.Peek();
                    Console.Write(node.data + " ");
                    q.Dequeue();
                    if (node.left != null)
                        q.Enqueue(node.left);
                    if (node.right != null)
                        q.Enqueue(node.right);
                    totalNode--; 
                }
                Console.WriteLine();
            }
        }

        void printInOrderHelper(Node root)
        {
            if (root == null) return;
            printInOrderHelper(root.left);
            Console.Write(root.data + " ");
            printInOrderHelper(root.right);
        }

        void printPostOrderHelper(Node root)
        {
            if (root == null) return;
            printPostOrderHelper(root.left);
            printPostOrderHelper(root.right);
            Console.Write(root.data + " ");
        }

        void printPreOrderHelper(Node root)
        {
            if (root == null) return;
            Console.Write(root.data + " ");
            printPostOrderHelper(root.left);
            printPostOrderHelper(root.right);
        }

        public void printLevelOrder()
        {
            printLevelOrderHelper(root);
        }

        public void printPreOrder()
        {
            printPreOrderHelper(root);
        }
        public void printInOrder()
        {
            printInOrderHelper(root);
        }
        public void printPostOrder()
        {
            printPostOrderHelper(root);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            BinaryTree tree = new BinaryTree();
            tree.root = new Node(1);
            tree.root.left = new Node(2);
            tree.root.right = new Node(3);
            tree.root.left.left = new Node(4);
            tree.root.left.right = new Node(5);
            tree.root.right.right = new Node(6);

            /*        1
                   /     \
                  2       3
                /   \       \
               4     5       6
            */
            Console.Write("level order:");
            tree.printLevelOrder();
            Console.Write("\npre order:");
            tree.printPreOrder();
            Console.Write("\nin order:");
            tree.printInOrder();
            Console.Write("\npost order:");
            tree.printPostOrder();
        }
    }
}

#pragma one
#include <memory>

namespace ariel
{
    template <typename T>
    class BinaryTree
    {
        struct Node
        {
            T node_data;
            Node *parent;
            Node *left;
            Node *right;
            Node(T value) : node_data(value), right(nullptr), left(nullptr), parent(nullptr){};
        };

        Node *tree_root;

    public:
 public:
        BinaryTree() : tree_root(nullptr) {}
        friend std::ostream &operator<<(std::ostream &os, const BinaryTree<T> &my_tree)
        {
            return os;
        }
        BinaryTree<T> &add_root(T V)
        {
            this->tree_root = new Node(V);
            return *this;
        }
        

        Node *help_fun(Node *F_N, T V)
        {
            return F_N;
        };


        BinaryTree<T> &add_left(T P_V, T C_V)
        {
            Node *P_node = help_fun(this->tree_root, P_V);
            if (P_node == nullptr) 
            {
                throw std::invalid_argument("Error");
            }    
            P_node->left = new Node(C_V);
            P_node->left->parent = P_node; 
            return *this;
        }

        BinaryTree<T> &add_right(T P_V, T C_V)
        {
            Node *P_node = help_fun(this->tree_root, P_V);
            if (P_node == nullptr) 
            {
                throw std::invalid_argument("Error");
            }    
            P_node->right = new Node(C_V);
            P_node->right->parent = P_node; 
            return *this;
        }


        class Preorder
        {
       private:
            Node *mynode;

        public:
            Preorder() : mynode(nullptr){};

            T &operator*() 
            {
                return mynode->node_data;
            }

            T *operator->() 
            {
                return mynode->node_data;
            }
     
            Preorder &operator++()
            {
                return *this;
            }
            Preorder operator++(int)
            {
                return *this;
            }
            bool operator==(const Preorder&other) 
            {
                return false;
            }
            bool operator!=(const Preorder &other) 
            {
                return false;
            }
        };

        class Inorder
        {
        private:
            Node *mynode;

        public:
            Inorder() : mynode(nullptr){};

            T &operator*() 
            {
                return mynode->node_data;
            }

            T *operator->() 
            {
                return mynode->node_data;
            }
            Inorder &operator++()
            {
                return *this;
            }
            Inorder operator++(int)
            {
                return *this;
            }
            bool operator==(const Inorder &other)
            {
                return false;
            }

            bool operator!=(const Inorder &other)
            {
                return false;
            }
        };

        class Postorder
        {
        private:
            Node *mynode;

        public:

            Postorder() : mynode(nullptr){};
            T &operator*() 
            {
                return mynode->node_data;
            }

            T *operator->() 
            {
                return &mynode->node_data;
            }
            Postorder &operator++()
            {
                return *this;
            }
            Postorder operator++(int)
            {
                return *this;
            }
            bool operator==(const Postorder &other)
            {
                return false;
            }

            bool operator!=(const Postorder &other)
            {
                return false;
            }
        };

        

        Inorder begin()
        {
            return begin_inorder();
        };
        Preorder begin_preorder()
        {
            return Preorder();
        }
        Inorder begin_inorder()
        {
            return Inorder();
        }
        Postorder begin_postorder()
        {
            return Postorder();
        }
        Inorder end()
        {
            return end_inorder();
        };
        Preorder end_preorder()
        {
            return Preorder();
        }
        Inorder end_inorder()
        {
            return Inorder();
        }
        Postorder end_postorder()
        {
            return Postorder();
        }
    };
}
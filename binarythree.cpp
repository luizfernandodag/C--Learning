#include <iostream>
using namespace std;
template<typename T>

class Node{
  public:
    T data;
    Node * left;
    Node *right;

    Node(T value)
    {
      data = value;
      left = NULL;
      right = NULL

    }


};

//bincary tree
template<typename T>
class BST
{
  private:
    Node *root;
    void Insert(T data, Node* aNode);
    Node *Search(string data, Node *aNode);
    void preOrder(Node *aNode);
    void inOrder(Node * aNode);
    void postOrder(Node *aNode);
  public:
    BST();
    void Insert(T value);
    Node * Search(T data);
    void preOrder();
    void inOrder();
    void postOrder();


};

//:: -> scope resolution
template<typename T>
BST::BST()
{
  root = NULL;

}
template<typename T>
void BST::Insert(string data, Node *aNode)
{
  if(data <aNode->data )
  {
    if(aNode->left != NULL)
    {
      Insert(data, aNode->left);

    }
    else
    {
      /* code */
      aNode->left = new Node(data);
      aNode->left->left = NULL;
      aNode->left->right = NULL;
    }
    
  }
  else if(data > aNode->data)
  {
    if(aNode->right != NULL )
    {
      Insert(data,aNode->right);
    }
    else
    {
      /* code */
      aNode->right = new Node(data);
      aNode->right->left = NULL;
      aNode->right->right = NULL;
    }
    
  }

}
template<typename T>
void BST::Insert(T data)
{
  if(root !=NULL)
  {
    Insert(data,root);
  }
  else
  {
    root = new Node(data);
      root->left = NULL;
      root->right = NULL;
    
  }
  

}
template<typename T>
Node * BST::Search(T data, Node *aNode)
{
  if(aNode != NULL)
  {
    if(data == aNode->data)
      return aNode;

     if(data < aNode->data)
      return Search(data, aNode->left);
      else
      {
        return Search(data, aNode->right);
      }
      


    
  }
  else
  {
    return NULL;
  }
  
 
  

}
template<typename T>
Node* BST::Search(T data)
{
  return Search(data,root);
}

void BST::preOrder()
{
  preOrder(root);
  
}

void BST::preOrder(Node *aNode)
{
  if(aNode != NULL)
  {
    cout << aNode->data << " ";
    preOrder(aNode->left);
    preOrder(aNode->right);
  }
}

void BST::inOrder()
{
  inOrder(root);
  
}

void BST::inOrder(Node *aNode)
{
  if(aNode != NULL)
  {
    inOrder(aNode->left)
    cout << aNode->data << " ";
    preOrder(aNode->right);
  }
}

void BST::postOrder()
{
  postOrder(root);
  
}

void BST::postOrder(Node *aNode)
{
  if(aNode != NULL)
  {
    inOrder(aNode->left)
   
    preOrder(aNode->right);
     cout << aNode->data << " ";
  }
}



int main()
{
  return 0;
}
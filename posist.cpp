#include <bits/stdc++.h>
using namespace std;
  
  
//  struct data {
//  	int ownerid;
//  	float value;
//  	string ownername;
//  	string hash;
//  };
// Represents a node of an n-ary tree
struct Node
{
	
    int ownerid;
  	float value;
  	string ownername;
  //	string has="abcdcdcd";
    string nodeId;
    int nodenumber;
    string referenecenodeId;
    string childreferenceNodeid;
    string genesisreferencenodeid;
    //string hashval="defcondef";
    
    vector<Node *>child;
};
  
 // Utility function to create a new tree node
Node *newNode(int ownerid,float value,string ownername)
{
    Node *temp = new Node;
    temp->value = value;
    temp->ownerid=ownerid;
    temp->ownername=ownername;
    cout<<ownername;
    return temp;
}
 
// Prints the n-ary tree level wise
void LevelOrderTraversal(Node * root)
{
    if (root==NULL)
        return;
  
    // Standard level order traversal code
    // using queue
    queue<Node *> q;  // Create a queue
    q.push(root); // Enqueue root 
    while (!q.empty())
    {
        int n = q.size();
 
        // If this node has children
        while (n > 0)
        {
            // Dequeue an item from queue and print it
            Node * p = q.front();
            q.pop();
            cout << p->value << " ";
  
            // Enqueue all children of the dequeued item
            for (int i=0; i<p->child.size(); i++)
                q.push(p->child[i]);
            n--;
        }
  
        cout << endl; // Print new line between two levels
    }
}
  
int main()
{
	cout<<"You can perform following operations on this data structure\n"<<"1->Create the genesis node \n"<<"2->create set of child node for a node\n "<<"3->create a child node \n"<<"4->encrypt/decrypt data in node\n"<<"8-> longest chain \n "<<"11->exit";
  int ch;
	cin>>ch;
	int xxx=0;
	while(ch!=11){
    if(xxx==0){
    	xxx=1;
	}
	else{
		cin>>ch;
	}
	int nodecount=0;
	int flag=0;
	int ownerid,nodenumber;
	string ownername,refid,childrefid,genrefid;
	float val;
	Node *root;
	switch(ch){
	    case 1:
	    	{
	    		if(flag==0){
				
	    		cout<<"Enter the details of genesis node"<<endl;
	    		cin>>ownerid>>val>>ownername;
	    		     root = newNode(ownerid,val,ownername);	  
					//(root->child).push_back(newNode(3,5.4,"yyy"));  		
	    		     LevelOrderTraversal(root);
	    		
	    		flag==1;
	    	}
	    	else{
	    		cout<<" the genesis node already exists"<<endl;
			}
			}
	    	break;
	    	case 2:
	    		{
	    			cout<<"enter the nodenum for node";
	    			int nodenum;
	    			cin>>nodenum;
	    			cout<<"no of child nodes to be made"<<endl;
	    			int num;
	    			cin>>num;
	    			
	    			for(int i=0;i<num;i++){
	    				cin>>ownerid>>val>>ownername;
	    				(root->child).push_back(newNode(ownerid,val,ownername));

					}
	    			
	    			
	    			
	    			
				}
	    default:
	    	printf("hhh");
	}
}
//    Node *root = newNode(10.4);
//    (root->child).push_back(newNode(2));
//    (root->child).push_back(newNode(34));
//    (root->child).push_back(newNode(56));
//    (root->child).push_back(newNode(100));
//    (root->child[0]->child).push_back(newNode(77));
//    (root->child[0]->child).push_back(newNode(88));
//    (root->child[2]->child).push_back(newNode(1));
//    (root->child[3]->child).push_back(newNode(7));
//    (root->child[3]->child).push_back(newNode(8));
//    (root->child[3]->child).push_back(newNode(9));
  
//    cout << "Level order traversal Before Mirroring\n";
//    LevelOrderTraversal(root);
//   
    return 0;
} 

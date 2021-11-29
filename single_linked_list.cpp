#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void display(node *root)
{
    while(root!=NULL)
    {
        cout<<root->data<<" ";
        root=root->next;
    }
}
node * create(node *root,int x)
{
    if(root==NULL)
    return new node(x);
    else
    root->next=create(root->next,x);
    return root;
}
int main() {
	int n,k;
	cin>>n;
	node *root=NULL;
	for(int i=0;i<n;i++)
	{
	    cin>>k;
	    root=create(root,k);
	}
	display(root);
	return 0;
}

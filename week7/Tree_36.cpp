bool isSumProperty(struct node* node)
{
	if(!node) return true;
	int left=0,right=0;
	if(!node->left&&!node->right) return true;
	if(node->left) left=node->left->data;
	if(node->right) right=node->right->data;
	if(node->data==left+right && isSumProperty(node->right) &&isSumProperty(node->left)) return true;
	return false;
}

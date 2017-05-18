Iterative Solution:


void decode_huff(node * root,string s)
{
   
    int i=0;
    node *r=root;
    while(s[i])
    {
        if(s[i]=='0')
        {
            r=r->left;
        }
        else
        {
            r=r->right;
        }
        if(r->data!='\0')
        {
            cout<<r->data;
            r=root;
        }
        i++;
    }
    return;
    
}


Recursive Solution:

void print(node *r,string str,node *rt)
{
   
    if(str[0]=='\0')
        {
            return;
        }
    if(str[0]=='0')
        {
            
            r=r->left;

        }
        else
        {
            r=r->right;
        }
        if(r->data=='\0')
        {
            str=str.substr(1);
            print(r,str,rt);
        }
        else
        {
            cout<<r->data;
            str=str.substr(1);
            print(rt,str,rt);
        }
}

void decode_huff(node * root,string s)
{
   
    print(root,s,root);
    return;
    
}
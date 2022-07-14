# singly linked list
## things to note.
this type of list can only be navigated forward. 
this list is made up of nodes which has 2 parts. the data and the link. 
the node is declared in structure that call on to itself.

### declaring a node or creating a node.
    struct node
    {
        int data: //here one can put any data type. 
        struct node *link. //this is the where the pointer of the link will be saved. 
    }

to begin a link, a pointer head pointer has to be decleared so as to save the pointer of the first node, thereafter, the list can be linked and accessed. 

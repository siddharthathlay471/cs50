struct node
{
    int data;
    struct node* next;
};
 void main()
{
    struct node* head = malloc(sizeof(struct node));
    struct node* second = malloc(sizeof(struct node));
    struct node* third = malloc(sizeof(struct data));
    struct node* four = malloc(sizeof(struct data));
    struct node* five = malloc(sizeof(struct data));

    head.data =10;
    second.data =20;
    third.data =30;
    four.data =40;
    five.data =50;

    head->next = second;
    head->next = third;
    head->next = four;
    head->next = five;
    head->next = NULL;
    struct node* temp = head;
    
    
    
    
    
}
#include<stdio.h>
#include<stdlib.h>
int count=0,size;

typedef struct node{
    int data;
    struct node* next;
}node;

typedef struct node2{
    int data;
    struct node2* next;
    struct node2* prev;
}node2;

node* insert_front(node* head,int x){
    node* n=(node*)malloc(sizeof(node));
    n->data=x;
    n->next=head;
    head=n;
    count++;
    return head;
}
node* insert_end(node* head,int x){
    node* n=(node*)malloc(sizeof(node));
    n->data=x;
    n->next=NULL;
    if(head==NULL){
        head=n;
        count++;
        return head;
    }
    node* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
    count++;
    return head;
}
node* insert_at_index(node* head,int x,int i){
    if(i==1){
        head=insert_front(head,x);
        return head;
    }
    node* n=(node*)malloc(sizeof(node));
    n->data=x;
    node* temp=head;
    i--;
    while(--i)
        temp=temp->next;
    n->next=temp->next;
    temp->next=n;
    count++;
    return head;
}
node* delete_front(node* head){
    node* temp=head;
    head=temp->next;
    free(temp);
    count--;
    return head;
}
node* delete_end(node* head){
    node* temp=head;
    if(temp->next==NULL){
        head=NULL;
        free(temp);
        count--;
        return head;
    }
    while(temp->next->next!=NULL)
        temp=temp->next;
    temp->next=NULL;
    free(temp->next);
    count--;
    return head;
}
node* delete_at_index(node* head,int i){
    if(i==1){
        head=delete_front(head);
        return head;
    }
    node* temp=head;
    i--;
    while(--i)
        temp=temp->next;
    node* t=temp->next;
    temp->next=temp->next->next;
    free(t);
    count--;
    return head;
}
void display_singly_linear(node* head){
    node* temp=head;
    if(head==NULL){
        printf("Linked List is Empty\n");
        return;
    }
    printf("\n*** Your Linked List ***\n");
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

void singly_linear(){
    node* head=NULL;
    int c,a,i,m;
    lable:
    printf("\nEnter the number of links you want to make : ");
    scanf("%d",&m);
    if(m>size){
        printf("Please enter valid length!!\n");
        goto lable;
    }
    size-=m;
    while(m--){
        printf("Enter the value : ");
        scanf("%d",&a);
        head=insert_end(head,a);
    }
    while(1){
        printf("\n1.Insert Front \t 2.Insert End \t 3.Insert at given position \t 4.Delete Front \t 5.Delete End \t 6.Delete at given position \t 7.Copy list \t 8.Display \t 0.Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&c);
        switch(c){
            case 0:
                return;
            case 1:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_front(head,a);
                size--;
                break;
            case 2:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_end(head,a);
                size--;
                break;
            case 3:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the Index : ");
                scanf("%d",&i);
                if(i>count+1 || i<=0){
                    printf("Please enter Valid Index!!\n");
                    break;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_at_index(head,a,i);
                size--;
                break;
            case 4:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                head=delete_front(head);
                size++;
                break;
            case 5:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                head=delete_end(head);
                size++;
                break;
            case 6:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                printf("Enter the Index : ");
                scanf("%d",&i);
                if(i>count || i<=0){
                    printf("Please enter Valid Index!!\n");
                    break;
                }
                head=delete_at_index(head,i);
                size++;
                break;
            // case 7:
                // break;
            case 8:
                display_singly_linear(head);
                break;
            default:
                printf("Wrong choice entered!!\n");
                break;
        }
    }
}

node* insert_front_circular(node* head,int x){
    node* n=(node*)malloc(sizeof(node));
    n->data=x;
    if(head==NULL){
        n->next=n;
        head=n;
        count++;
        return head;
    }
    n->next=head;
    node* temp=head;
    while(temp->next!=head)
        temp=temp->next;
    temp->next=n;
    head=n;
    count++;
    return head;
}
node* insert_end_circular(node* head,int x){
    node* n=(node*)malloc(sizeof(node));
    n->data=x;
    if(head==NULL){
        n->next=n;
        head=n;
        count++;
        return head;
    }
    node* temp=head;
    while(temp->next!=head)
        temp=temp->next;
    n->next=head;
    temp->next=n;
    count++;
    return head;
}
node* insert_at_index_circular(node* head,int x,int i){
    if(i==1){
        head=insert_front_circular(head,x);
        return head;
    }
    if(i==count+1){
        head=insert_end_circular(head,x);
        return head;
    }
    node* n=(node*)malloc(sizeof(node));
    n->data=x;
    node* temp=head;
    i--;
    while(--i)
        temp=temp->next;
    n->next=temp->next;
    temp->next=n;
    count++;
    return head;
}
node* delete_front_circular(node* head){
    node* temp=head;
    node* t=head;
    while(temp->next!=head)
        temp=temp->next;
    head=temp->next->next;
    temp->next=head;
    free(t);
    count--;
    return head;
}
node* delete_end_circular(node* head){
    node* temp=head;
    if(temp->next==head){
        head=NULL;
        free(temp);
        count--;
        return head;
    }
    while(temp->next->next!=head)
        temp=temp->next;
    node* t=temp->next;
    temp->next=head;
    free(t);
    count--;
    return head;
}
node* delete_at_index_circular(node* head,int i){
    if(i==1){
        head=delete_front_circular(head);
        return head;
    }
    if(i==count){
        head=delete_end_circular(head);
        return head;
    }
    node* temp=head;
    i--;
    while(--i)
        temp=temp->next;
    node* t=temp->next;
    temp->next=t->next;
    free(t);
    count--;
    return head;
}
void display_singly_circular(node* head){
    node* temp=head;
    if(head==NULL || count==0){
        printf("Linked List is Empty\n");
        return;
    }
    printf("\n*** Your Linked List ***\n");
    while(temp->next!=head){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("%d -> ",temp->data);
    printf("...\n");
}

void singly_circular(){
    node* head=NULL;
    int c,a,i,m;
    lable:
    printf("\nEnter the number of links you want to make : ");
    scanf("%d",&m);
    if(m>size){
        printf("Please enter valid length!!\n");
        goto lable;
    }
    size-=m;
    while(m--){
        printf("Enter the value : ");
        scanf("%d",&a);
        head=insert_end_circular(head,a);
    }
    while(1){
        printf("\n1.Insert Front \t 2.Insert End \t 3.Insert at given position \t 4.Delete Front \t 5.Delete End \t 6.Delete at given position \t 7.Copy list \t 8.Display \t 0.Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&c);
        switch(c){
            case 0:
                return;
            case 1:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_front_circular(head,a);
                size--;
                break;
            case 2:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_end_circular(head,a);
                size--;
                break;
            case 3:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the Index : ");
                scanf("%d",&i);
                if(i>count+1 || i<=0){
                    printf("Please enter Valid Index!!\n");
                    break;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_at_index_circular(head,a,i);
                size--;
                break;
            case 4:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                head=delete_front_circular(head);
                size++;
                break;
            case 5:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                head=delete_end_circular(head);
                size++;
                break;
            case 6:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                printf("Enter the Index : ");
                scanf("%d",&i);
                if(i>count || i<=0){
                    printf("Please enter Valid Index!!\n");
                    break;
                }
                head=delete_at_index_circular(head,i);
                size++;
                break;
            // case 7:
            //     break;
            case 8:
                display_singly_circular(head);
                break;
            default:
                printf("Wrong choice entered!!\n");
                break;
        }
    }
}

node2* insert_front_doubly(node2* head,int x){
    node2* n=(node2*)malloc(sizeof(node2));
    n->data=x;
    n->next=NULL;
    n->prev=NULL;
    if(head==NULL){
        head=n;
        count++;
        return head;
    }
    n->next=head;
    head->prev=n;
    head=n;
    count++;
    return head;
}
node2* insert_end_doubly(node2* head,int x){
    node2* n=(node2*)malloc(sizeof(node2));
    n->data=x;
    n->next=NULL;
    n->prev=NULL;
    if(head==NULL){
        head=n;
        count++;
        return head;
    }
    node2* temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=n;
    n->prev=temp;
    count++;
    return head;
}
node2* insert_at_index_doubly(node2* head,int x,int i){
    if(i==1){
        head=insert_front_doubly(head,x);
        return head;
    }
    if(i==count+1){
        head=insert_end_doubly(head,x);
        return head;
    }
    node2* n=(node2*)malloc(sizeof(node2));
    n->data=x;
    node2* temp=head;
    i--;
    while(--i)
        temp=temp->next;
    n->next=temp->next;
    n->prev=temp;
    temp->next=n;
    n->next->prev=n;
    count++;
    return head;
}
node2* delete_front_doubly(node2* head){
    node2* temp=head;
    head=head->next;
    if(head!=NULL)
        head->prev=NULL;
    free(temp);
    count--;
    return head;
}
node2* delete_end_doubly(node2* head){
    if(head->next==NULL){
        head=delete_front_doubly(head);
        return head;
    }
    node2* temp=head;
    while(temp->next->next!=NULL)
        temp=temp->next;
    temp->next=NULL;
    free(temp->next);
    count--;
    return head;
}
node2* delete_at_index_doubly(node2* head,int i){
    if(i==1){
        head=delete_front_doubly(head);
        return head;
    }
    if(i==count){
        head=delete_end_doubly(head);
        return head;
    }
    node2* temp=head;
    i--;
    while(--i)
        temp=temp->next;
    node2* t=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    free(t);
    count--;
    return head;
}
void display_doubly_linear(node2* head){
    node2* temp=head;
    if(head==NULL){
        printf("Linked List is Empty\n");
        return;
    }
    printf("\n*** Your Linked List ***\n");
    printf("NULL <-> ");
    while(temp!=NULL){
        printf("%d <-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

void doubly_linear(){
    node2* head=NULL;
    int c,a,i,m;
    lable:
    printf("\nEnter the number of links you want to make : ");
    scanf("%d",&m);
    if(m>size){
        printf("Please enter valid length!!\n");
        goto lable;
    }
    size-=m;
    while(m--){
        printf("Enter the value : ");
        scanf("%d",&a);
        head=insert_end_doubly(head,a);
    }
    while(1){
        printf("\n1.Insert Front \t 2.Insert End \t 3.Insert at given position \t 4.Delete Front \t 5.Delete End \t 6.Delete at given position \t 7.Copy list \t 8.Display \t 0.Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&c);
        switch(c){
            case 0:
                return;
            case 1:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_front_doubly(head,a);
                size--;
                break;
            case 2:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_end_doubly(head,a);
                size--;
                break;
            case 3:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the Index : ");
                scanf("%d",&i);
                if(i>count+1 || i<=0){
                    printf("Please enter Valid Index!!\n");
                    break;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_at_index_doubly(head,a,i);
                size--;
                break;
            case 4:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                head=delete_front_doubly(head);
                size++;
                break;
            case 5:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                head=delete_end_doubly(head);
                size++;
                break;
            case 6:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                printf("Enter the Index : ");
                scanf("%d",&i);
                if(i>count || i<=0){
                    printf("Please enter Valid Index!!\n");
                    break;
                }
                head=delete_at_index_doubly(head,i);
                size++;
                break;
            // case 7:
            //     break;
            case 8:
                display_doubly_linear(head);
                break;
            default:
                printf("Wrong choice entered!!\n");
                break;
        }
    }
}

node2* insert_front_doubly_circular(node2* head,int x){
    node2* n=(node2*)malloc(sizeof(node2));
    n->data=x;
    if(head==NULL){
        n->next=n;
        n->prev=n;
        head=n;
        count++;
        return head;
    }
    n->next=head;
    head->prev=n;
    node2* temp=head;
    while(temp->next!=head)
        temp=temp->next;
    temp->next=n;
    n->prev=temp;
    head=n;
    count++;
    return head;
}
node2* insert_end_doubly_circular(node2* head,int x){
    node2* n=(node2*)malloc(sizeof(node2));
    n->data=x;
    if(head==NULL){
        n->next=n;
        n->prev=n;
        head=n;
        count++;
        return head;
    }
    node2* temp=head;
    while(temp->next!=head)
        temp=temp->next;
    temp->next=n;
    n->prev=temp;
    n->next=head;
    head->prev=n;
    count++;
    return head;
}
node2* insert_at_index_doubly_circular(node2* head,int x,int i){
    if(i==1){
        head=insert_front_doubly_circular(head,x);
        return head;
    }
    if(i==count+1){
        head=insert_end_doubly_circular(head,x);
        return head;
    }
    node2* n=(node2*)malloc(sizeof(node2));
    n->data=x;
    node2* temp=head;
    i--;
    while(--i)
        temp=temp->next;
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
    n->prev=temp;
    count++;
    return head;
}
node2* delete_front_doubly_circular(node2* head){
    node2* temp=head;
    if(temp->next==temp){
        head=NULL;
        free(temp);
        count--;
        return head;
    }
    head=temp->next;
    head->prev=temp->prev;
    temp->prev->next=head;
    free(temp);
    count--;
    return head;
}
node2* delete_end_doubly_circular(node2* head){
    node2* temp=head;
    if(temp->next==temp){
        head=NULL;
        free(temp);
        count--;
        return head;
    }
    while(temp->next!=head)
        temp=temp->next;
    temp->prev->next=head;
    head->prev=temp->prev;
    free(temp);
    count--;
    return head;
}
node2* delete_at_index_doubly_circular(node2* head,int i){
    if(i==1){
        head=delete_front_doubly_circular(head);
        return head;
    }
    if(i==count+1){
        head=delete_end_doubly_circular(head);
        return head;
    }
    node2* temp=head;
    while(--i)
        temp=temp->next;
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);
    count--;
    return head;
}
void display_doubly_circular(node2* head){
    node2* temp=head;
    if(head==NULL){
        printf("Linked List is Empty\n");
        return;
    }
    printf("\n*** Your Linked List ***\n");
    printf("... <-> ");
    while(temp->next!=head){
        printf("%d <-> ",temp->data);
        temp=temp->next;
    }
    printf("%d <-> ...\n",temp->data);
}

void doubly_circular(){
    node2* head=NULL;
    int c,a,i,m;
    lable:
    printf("\nEnter the number of links you want to make : ");
    scanf("%d",&m);
    if(m>size){
        printf("Please enter valid length!!\n");
        goto lable;
    }
    size-=m;
    while(m--){
        printf("Enter the value : ");
        scanf("%d",&a);
        head=insert_end_doubly_circular(head,a);
    }
    while(1){
        printf("\n1.Insert Front \t 2.Insert End \t 3.Insert at given position \t 4.Delete Front \t 5.Delete End \t 6.Delete at given position \t 7.Copy list \t 8.Display \t 0.Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&c);
        switch(c){
            case 0:
                return;
            case 1:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_front_doubly_circular(head,a);
                size--;
                break;
            case 2:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_end_doubly_circular(head,a);
                size--;
                break;
            case 3:
                if(size<=0){
                    printf("No more Available Nodes!!\n");
                    break;;
                }
                printf("Enter the Index : ");
                scanf("%d",&i);
                if(i>count+1 || i<=0){
                    printf("Please enter Valid Index!!\n");
                    break;
                }
                printf("Enter the value : ");
                scanf("%d",&a);
                head=insert_at_index_doubly_circular(head,a,i);
                size--;
                break;
            case 4:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                head=delete_front_doubly_circular(head);
                size++;
                break;
            case 5:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                head=delete_end_doubly_circular(head);
                size++;
                break;
            case 6:
                if(count==0){
                    printf("Linked List is Empty\n");
                    break;
                }
                printf("Enter the Index : ");
                scanf("%d",&i);
                if(i>count || i<=0){
                    printf("Please enter Valid Index!!\n");
                    break;
                }
                head=delete_at_index_doubly_circular(head,i);
                size++;
                break;
            // case 7:
            //     break;
            case 8:
                display_doubly_circular(head);
                break;
            default:
                printf("Wrong choice entered!!\n");
                break;
        }
    }
}


int main(){
    int ch;
    printf("\nEnter the maximum size of Linked List : ");
    scanf("%d",&size);
    while(1){
        printf("\n1.Singly Linear Linked List \t 2.Singly Circular Linked List \t 3.Doubly Linear Linked List \t 4.Doubly Circular Linked List \t 0.Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 0:
                return 0;
            case 1:
                singly_linear();
                break;
            case 2:
                singly_circular();
                break;
            case 3:
                doubly_linear();
                break;
            case 4:
                doubly_circular();
                break;
            default:
                printf("Wrong choice entered!!\n");
                break;
        }
    }
    return 0;
}
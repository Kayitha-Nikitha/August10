#include <stdio.h>
#include <stdlib.h>

struct QNode {
    int key;
    struct QNode* next;
};

struct Queue {
    struct QNode *front, *rear;
};

struct QNode* newNode(int k)
{
    struct QNode* temp = (struct QNode*)malloc(sizeof(struct QNode));
    temp->key = k;
    temp->next = NULL;
    return temp;
}

struct Queue* createQueue()
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

void enQueue(struct Queue* q, int k)
{
    struct QNode* temp = newNode(k);

    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }

    q->rear->next = temp;
    q->rear = temp;
    //printf("%d is enQueued", k);
}

void deQueue(struct Queue* q)
{
    if (q->front == NULL)
        return;

    struct QNode* temp = q->front;

    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
}

int main()
{
    struct Queue* q = createQueue();
    int ch, item;

    while(1)
            {
            printf("Different choices are:\n");
            printf("1.enQueue\n");
            printf("2.deQueue\n");
            printf("3.exit\n");
            printf("enter your choice: ");
            scanf("%d",&ch);
            printf("your choice was: %d\n",ch);
                switch(ch)
                    {
                        case 1:
                                printf("enter element to enQueue:");
                                scanf("%d",&item);
                                enQueue(q, item);
                                break;
                        case 2: printf("deQueue command is given\n");
                                deQueue(q);
                                break;
                        case 3: exit(0);
                        default: printf("invalid input\n");
                    }
                printf("\n");
                }


    /*enQueue(q, 10);
    enQueue(q, 20);
    deQueue(q);
    deQueue(q);
    enQueue(q, 30);
    enQueue(q, 40);
    enQueue(q, 50);
    deQueue(q);
    printf("Queue Front : %d \n", q->front->key);
    printf("Queue Rear : %d", q->rear->key);*/
    return 0;
}

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x){
  NodePtr new_node=(NodePtr)malloc(sizeof(Node));
  if(q->size==0)
  q->tailPtr=new_node;
  q->size++;
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->data;
    if(q->size>0)
    {
        NodePtr t=q->headPtr;
        if(q->size==1)
        {
          q->headPtr=t->nextPtr;
        }
        q->size--;
    }
   return value;
   }

   printf("Empty queue");
   return 0;
}
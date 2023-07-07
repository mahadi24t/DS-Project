#include <iostream>
using namespace std;
#define max 50
class queue{
 int* arr ;
 int front ;
 int rear;

 public:
     queue(){
        arr=new int[max] ;
        front= -1 ;
        rear = -1 ;
     }
     void enqueue(int x){
     if(rear==max-1){
           cout<<"Queue is filled"<<endl;
           return ;
     }
     rear++;
     arr[rear] =  x ;

     if( front== -1){
        front++ ;
     }
     }

     void dequeue(){
     if(rear==-1 || front>rear ){
        cout<<" There is no element to remove"<<endl;
        return;
     }
     front++;
     }

     int peek(){
      if(rear==-1 || front>rear ){
        cout<<" There is no element to remove"<<endl;
        return-1;
     }
     return arr[front] ;
     }

     bool isempty(){
      if(rear==-1 || front>rear ){
        return true;
     }
     return false ; }
} ;


void BinarySearch()
{
  int x;
  cout<<"Press any key to continue:";
  cin>>x;
  cout<<endl;
  cout<<"||This is a Binary Search section||"<<endl;
  int n;
  cout<<"How many element:";
    cin>>n;
    int a[n];
  cout<<"Enter Elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for( int j=0;j<n;j++)
 {
 for(int i=0;i<n-j;i++)
 {
    if(a[i]>a[i+1])
    {
        swap(a[i],a[i+1]);
    }
 }
}
  
  int first,last,num,middle;
    cout<<"Enter a number for searching:";
   cin>>num;
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(a[middle]<num)
            first = middle+1;
        else if(a[middle]==num)
        {
            cout<<"\nThe number, "<<num<<" found at Position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\nThe number, "<<num<<" is not found in given Array";
    cout<<endl;
}
void linearSearch()
  {
    cout<<"This is linear Search"<<endl;
    int input[100], count, i, num;
       
    cout << "Enter Number of Elements in Array:";
    cin >> count;
     
    cout << "Enter " << count << " numbers ";
      
    // Read array elements
    for(i = 0; i < count; i++){
        cin >> input[i];
    }
      
    cout << "Enter a number to serach in Array:";
    cin >> num;
    for(i = 0; i < count; i++){
        if(input[i] == num){
            cout << "Element found at index " << i;
            break;
        }
    }
      
    if(i == count){
        cout  << "Element Not Present in Input Array\n";
    }
   
  }




void Pointer()
  {
    int x;
     cout<<"Press any key to continue:";
    cin>>x;
    cout<<endl;
    
    cout<<"This is a very simple pointer programme"<<endl;
   int  var;   
    cout<<"Enter the Value of the var Variable:";
    cin>>var;
   int  *ip;        

   ip = &var;      

   cout << "Value of var variable: ";
   cout << var << endl;

   
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   cout << "Value of *ip variable: ";
   cout << *ip << endl;
   
  }


class Stack
{
   int top;
   public:
   int myStack[10]; //stack array
  
   Stack() { top = -1; }
   bool push(int x);
   int pop();
   bool isEmpty();
};
   //pushes element on to the stack
   bool Stack::push(int item)
   {
      if (top >= (10-1)) {
      cout << "Stack Overflow!!!";
      return false;
   }
else {
   myStack[++top] = item;
   cout<<item<<endl;
   return true;
   }
}
  
//removes or pops elements out of the stack
int Stack::pop()
{
   if (top < 0) {
      cout << "Stack Underflow!!";
      return 0;
   }
else {
       int item = myStack[top--];
      return item;
   }
}
  
//check if stack is empty
bool Stack::isEmpty()
{
   return (top < 0);
}




void r()
{
  cout<<"Hello Everyone!"<<endl;
   cout<<"Welcome to our project"<<endl;
    cout<<"We are a group of 4 people and our group members are :  "<<endl;
    cout<<"1.Mohammad Mahadi Hasan"<<endl;
    cout<<"2.Riad Rahman"<<endl;
    cout<<"3.Mahbuba Rahman"<<endl;
    cout<<"4.Ehteshamul Islam"<<endl;
  cout<<endl;
  cout<<endl;
    cout<<"           Here our Project Begins..."<<endl;
  ;
  cout<<endl;
  cout<<endl;
}
void arc()
{
  cout<<endl;
  int x;
     cout<<"Press any key to continue:";
  
    cin>>x;
    cout<<endl;
  cout<<"Area of a circle using pointer"<<endl;
  float radius, area;

   cout << "\nEnter the radius of Circle : ";
   cin>>radius;

   area = 3.14 * radius * radius;

   cout << "\nArea of Circle : " << area;
  cout<<endl;

}
// Iterative C++ program to reverse a linked list

/* Link list node */
struct Node {
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList {
	Node* head;
	LinkedList() { head = NULL; }

	  
	void reverse()
	{
    
		// Initialize current, previous and next pointers
		Node* current = head;
		Node *prev = NULL, *next = NULL;

		while (current != NULL) {
			// Store next
			next = current->next;
			// Reverse current node's pointer
			current->next = prev;
			// Move pointers one position ahead.
			prev = current;
			current = next;
		}
		head = prev;
	}

	/* Function to print linked list */
	void print()
	{
		struct Node* temp = head;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};



void linklist()
{
  int x;
     cout<<"Press any key to continue:";
    cin>>x;
    cout<<endl;
  cout<<"Function to reverse the linked list"<<endl;
  
 
	LinkedList ll;
 
  
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);

	cout << "Given linked list\n";
	ll.print();

	ll.reverse();

	cout << "\nReversed Linked list \n";
	ll.print();
	
}

// circular doubly linked list.
struct Nodel {
	int data;
	struct Nodel* next;
	struct Nodel* prev;
};


void insert(struct Nodel** start, int value)
{
	
	if (*start == NULL) {
		struct Nodel* new_node = new Nodel;
		new_node->data = value;
		new_node->next = new_node->prev = new_node;
		*start = new_node;
		return;
	}

	
	Nodel* last = (*start)->prev;


	struct Nodel* new_node = new Nodel;
	new_node->data = value;

	
	new_node->next = *start;

	
	(*start)->prev = new_node;

	
	new_node->prev = last;


	last->next = new_node;
}


void deleteNode(struct Nodel** start, int key)
{
	
	if (*start == NULL)
		return;

	
	struct Nodel *curr = *start, *prev_1 = NULL;
	while (curr->data != key) {
		
		if (curr->next == *start) {
			printf("\nList doesn't have node with value = %d", key);
			return;
		}

		prev_1 = curr;
		curr = curr->next;
	}
	if (curr->next == *start && prev_1 == NULL) {
		(*start) = NULL;
		free(curr);
		return;
	}
	if (curr == *start) {
		
		prev_1 = (*start)->prev;

		
		*start = (*start)->next;

		
		prev_1->next = *start;
		(*start)->prev = prev_1;
		free(curr);
	}

	
	else if (curr->next == *start) {
		
		prev_1->next = *start;
		(*start)->prev = prev_1;
		free(curr);
	}
	else {
		
		struct Nodel* temp = curr->next;

	
		prev_1->next = temp;
		temp->prev = prev_1;
		free(curr);
	}
}


void display(struct Nodel* start)
{
	struct Nodel* temp = start;

	while (temp->next != start) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);
}


void lldel()
{
  int x;
     cout<<"Press any key to continue:";
    cin>>x;
    cout<<endl;
   cout<<"Link List Delatation Operation"<<endl;
	
	struct Nodel* start = NULL;

	
	insert(&start, 4);
	insert(&start, 5);
	insert(&start, 6);
	insert(&start, 7);
	insert(&start, 8);

	printf("List Before Deletion: ");
	display(start);

	
	deleteNode(&start, 9);
	printf("\nList After Deletion: ");
	display(start);

	
	deleteNode(&start, 4);
	printf("\nList After Deleting %d: ", 4);
	display(start);

	
	deleteNode(&start, 8);
	printf("\nList After Deleting %d: ", 8);
	display(start);

	deleteNode(&start, 6);
	printf("\nList After Deleting %d: ", 6);
	display(start);

	
}




void quiz()
{
  int x;
     cout<<"Press any key to continue:";
    cin>>x;
    cout<<endl;
  cout<<"Queue code Implementation"<<endl;
  queue q ;
     q.enqueue(5);
     q.enqueue(4);
     q.enqueue(3);
     q.enqueue(2);
     q.enqueue(1);

     cout<<q.peek()<<endl;
     q.dequeue() ;

     cout<<q.peek()<<endl;
     q.dequeue() ;

     cout<<q.peek()<<endl;
     q.dequeue() ;

     cout<<q.peek()<<endl;
     q.dequeue() ;

    cout<<q.peek()<<endl;
     q.dequeue() ;

     cout<<"if the queue is empty it will print 1 ,if not .then it will print 0"<<endl;
     cout<<q.isempty()<<endl;

  cout<<endl;
}
// Circular Queue implementation in C++


#define SIZE 5 /* Size of Circular Queue */



class Queue {
   private:
  int items[SIZE], front, rear;

   public:
  Queue() {
    front = -1;
    rear = -1;
  }
  
  bool isFull() {
    if (front == 0 && rear == SIZE - 1) {
      return true;
    }
    if (front == rear + 1) {
      return true;
    }
    return false;
  }
  
  bool isEmpty() {
    if (front == -1)
      return true;
    else
      return false;
  }
  
  void enQueue(int element) {
    if (isFull()) {
      cout << "Queue is full";
    } else {
      if (front == -1) front = 0;
      rear = (rear + 1) % SIZE;
      items[rear] = element;
      cout << endl
         << "Inserted " << element << endl;
    }
  }
  
  int deQueue() {
    int element;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
      return (-1);
    } else {
      element = items[front];
      if (front == rear) {
        front = -1;
        rear = -1;
      }
      
      else {
        front = (front + 1) % SIZE;
      }
      return (element);
    }
  }

  void display() {
   
    int i;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << "Front -> " << front;
      cout << endl
         << "Items -> ";
      for (i = front; i != rear; i = (i + 1) % SIZE)
        cout << items[i];
      cout << items[i];
      cout << endl
         << "Rear -> " << rear;
    }
  }
};

void crq()
{
  cout<<endl;
  int x;
     cout<<"Press any key to continue:";
    cin>>x;
    cout<<endl;
  cout<<endl;
  Queue q;

  
  q.deQueue();

  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5);

  
  q.enQueue(6);

  q.display();

  int elem = q.deQueue();

  if (elem != -1)
    cout << endl
       << "Deleted Element is " << elem;

  q.display();

  q.enQueue(7);

  q.display();

  
  q.enQueue(8);

}



void stack1()
{
  int x;
     cout<<"Press any key to continue:";
    cin>>x;
    cout<<endl;
  class Stack stack;
   cout<<"The Stack Push "<<endl;
   stack.push(2);
   stack.push(4);
   stack.push(6);
   cout<<"The Stack Pop : "<<endl;
   while(!stack.isEmpty())
      {
      cout<<stack.pop()<<endl;
      }
}

#define M 100
typedef struct{
int count;
int top;
char items[M]; 
}STACK;
void push(STACK *, char,int);
int pop(STACK *);

void stack2()
{
  cout<<endl;
  int x;
     cout<<"Press any key to continue:";
    cin>>x;
    cout<<endl;
  int STACKSIZE;
  cout<<"Stack Implementation using Stack"<<endl;
  cout<<"How many words:"<<endl;
  cin>>STACKSIZE;
char p;
  int i;
STACK s;
s.top = -1; 
s.count = 0; 




cout<<endl;
printf("Enter the %d stack characters:\n",STACKSIZE);
for(i=0;i<= STACKSIZE-1;i++){
cin>>p;
push(&s,p,STACKSIZE);
}
  
cout<<"\n\nStack contains the following items\n";
for(i=0;i<= STACKSIZE-1;i++){
p=pop(&s);
cout<<" "<<p;
}
  cout<<endl;
cout<<"Total characters after push and pop "<<s.count<<endl;
}



void push(STACK *Sptr, char ps,int STACKSIZE)
{
if(Sptr->top == STACKSIZE-1){
printf("Stack is full\n");
printf("There are %d items in the stack\n", Sptr->count);
return; 
}
else {
Sptr->top++;
Sptr->items[Sptr->top]= ps;
Sptr->count++;
}
}



int pop(STACK *Sptr)
{
char pp;
if(Sptr->top == -1){
printf("Stack is empty\n");
return -1;

}
else {
pp = Sptr->items[Sptr->top];
Sptr->top--;
Sptr->count--;
return pp;
}
}

#define Max 1000
typedef struct{
int count;
int top;
int items[Max];
}S;
void push(S *, int,int);
int pop(S *);
void intstack()
{
  int x;
     cout<<"Press any key to continue:";
    cin>>x;
    cout<<endl;
    int STACKSIZE;
    cout<<"How many Elements in the stack"<<endl;
    cin>>STACKSIZE;
int p, i;

S s;
s.top = -1; 
s.count = 0; 




printf("Enter the %d stack items\n",STACKSIZE);
for(i=0;i<= STACKSIZE-1;i++){
scanf("%d",&p);
push(&s,p,STACKSIZE);
}

cout<<"popping and printing the items in the stack"<<endl;
printf("\n\nStack contains the following items\n");
for(i=0;i<= STACKSIZE-1;i++){
p=pop(&s);
printf("%d\t",p);
}
cout<<endl;
cout<<"Element left after pop and push "<<s.count;

}





void push(S *Sptr, int ps,int STACKSIZE) 
{
if(Sptr->top == STACKSIZE-1){
printf("Stack is full\n");
printf("There are %d items in the stack\n", Sptr->count);
return; 
}
else {
Sptr->top++;
Sptr->items[Sptr->top]= ps;
Sptr->count++;
}
}



int pop(S *Sptr)
{
int pp;
if(Sptr->top == -1){
printf("Stack is empty\n");
return -1; 
}
else {
pp = Sptr->items[Sptr->top];
Sptr->top--;
Sptr->count--;
return pp;
}
}
void ty()
{
  cout<<endl;
  cout<<"THE END"<<endl;
  cout<<"Thank you"<<endl;
}
int main() {
   r();
  linearSearch();
  cout<<endl;
  BinarySearch();
  Pointer();
  arc();
   linklist();
  cout<<endl;
   stack1();
  quiz();
   lldel();
  crq();
  stack2();
  intstack();
  ty();
}
class MyCircularQueue {
public:
    int front;
    int rear;
    int size;
    int *queue;
    
    MyCircularQueue(int k) {
        front=-1;
        rear=-1;
        size=k;
        queue=new int[k];
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        if(isEmpty()){
            front++;
        }
        rear=(rear+1)%size;
        queue[rear]=value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front = (front+1)%size;
        }
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return queue[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        return queue[rear];
    }
    
    bool isEmpty() {
        return front == -1 ? true : false;  
    }
    
    bool isFull() {
        return front == (rear + 1)%size ? true : false;
    }
};

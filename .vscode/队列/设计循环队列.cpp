class MyCircularQueue {
private:
    int *arr;
    int front;
    int rear;
    int length;
public:
    MyCircularQueue(int k) {
        arr = new int[k];
        front = rear = -1;
        length = k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(isEmpty()) front++;
        rear = (rear + 1) % length;
        arr[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        if(front == rear && front != -1)
            front = rear = -1;
        else 
            front = (front + 1) % length;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        return (front == rear && front == -1);
    }
    
    bool isFull() {
        return((rear + 1) % length == front);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
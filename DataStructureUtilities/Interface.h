#pragma once
#include <iostream>
//-------------------------Stack---------------------------------
template<class T>
class Stack {
	int top  = -1;
	int size_t = 0;
	T *stack;
public:
	Stack(int size);
	void push(T data);
	void pop();
	bool empty();
	int size();
	void print();
	~Stack();
};
template<class T>
Stack<T>::Stack(int size){
	stack = new T(size);
	this->size_t = size;
}
template<class T>
Stack<T>::~Stack(){
	delete []stack;
}
template<class T>
void Stack<T>::push(T data){
	if (++top != this->size_t)
		this->stack[top] = data;
	else{
		--top;
		cout << "stack is full" << endl;
	}
}
template<class T>
void Stack<T>::pop(){
	if (top != -1){
		this->stack[top] = -1;
		--top;
	}
	else
		cout << "stack empty" << endl;
}
template<class T>
bool Stack<T>::empty() {
	if (top == -1) return true;
	return false;
}
template<class T>
int Stack<T>::size() {
	if (top == -1) return 0;
	return top+1;
}
template<class T>
void Stack<T>::print(){
	cout << "[";
	for (int i = 0; i <= top; i++)
	{
		cout << this->stack[i] << ", ";
	}
	cout << "]" << endl;
}
//-------------------------OrdinaryQueue---------------------------------

template<class T>
class OrdinaryQueue {
	int front = 0;
	int rear = -1;
	int size_t = 0;
	T *queue;
public:
	OrdinaryQueue(int size);
	void enqueue(T data);
	void dequeue();
	bool empty();
	int size();
	void print();
	~OrdinaryQueue();
};
template<class T>
OrdinaryQueue<T>::OrdinaryQueue(int size) {
	queue = new T(size);
	this->size_t = size;
}
template<class T>
OrdinaryQueue<T>::~OrdinaryQueue() {
	delete[] queue;
}
template<class T>
void OrdinaryQueue<T>::enqueue(T data) {
	if (++(this->rear) != this->size_t)
		this->queue[this->rear] = data;
	else {
		--(this->rear);
		cout << "insertion not possible" << endl;
	}
}
template<class T>
void OrdinaryQueue<T>::dequeue() {
	if ((this->rear >= this->front) || this->rear != -1) {
		this->queue[this->front] = -1;
		++(this->front);
	}
	else
		cout << "deletion not possible" << endl;
}
template<class T>
bool OrdinaryQueue<T>::empty() {
	if ((this->front > this->rear) || this->rear ==-1) return true;
	return false;
}
template<class T>
int OrdinaryQueue<T>::size() {
	if (this->rear < this->front) return 0;
	return (this->rear - this->front) +1;
}
template<class T>
void OrdinaryQueue<T>::print() {
	cout << "REAR::" << this->rear << ", FRONT::" << this->front << ", SIZE::" << this->size() << ", Empty::" << this->empty() << endl;
	cout<<" [";
	for (int i = this->front; i <= this->rear; i++)
	{
		cout << this->queue[i] << ", ";
	}
	cout << "]" << endl;
}

//-------------------------CirculerQueue---------------------------------

template<class T>
class CirculerQueue {
	int front = 0;
	int rear = -1;
	int count = 0;
	int size_t = 0;
	T *queue;
public:
	CirculerQueue(int size);
	void enqueue(T data);
	void dequeue();
	bool empty();
	int size();
	void print();
	~CirculerQueue();
};
template<class T>
CirculerQueue<T>::CirculerQueue(int size) {
	queue = new T(size);
	this->size_t = size;
}
template<class T>
CirculerQueue<T>::~CirculerQueue() {
	delete[] queue;
}
template<class T>
void CirculerQueue<T>::enqueue(T data) {
	if ((this->rear+1) != this->size_t)

		this->queue[this->rear] = data;
	else {
		--(this->rear);
		cout << "insertion not possible" << endl;
	}
}
template<class T>
void CirculerQueue<T>::dequeue() {
	if ((this->rear >= this->front) || this->rear != -1) {
		this->queue[this->front] = -1;
		++(this->front);
	}
	else
		cout << "deletion not possible" << endl;
}
template<class T>
bool CirculerQueue<T>::empty() {
	if ((this->front > this->rear) || this->rear == -1) return true;
	return false;
}
template<class T>
int CirculerQueue<T>::size() {
	if (this->rear < this->front) return 0;
	return (this->rear - this->front) + 1;
}
template<class T>
void CirculerQueue<T>::print() {
	cout << "REAR::" << this->rear << ", FRONT::" << this->front << ", SIZE::" << this->size() << ", Empty::" << this->empty() << endl;
	cout << " [";
	for (int i = this->front; i <= this->rear; i++)
	{
		cout << this->queue[i] << ", ";
	}
	cout << "]" << endl;
}










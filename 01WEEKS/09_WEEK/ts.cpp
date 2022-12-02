
#include<iostream>
using namespace std;
struct queue {
	int arr[5];
	int f;
	int r;

};
void createqueue(struct queue *q) {
	q->f = -1;
	q->r = -1;
	cout << "YOUR QUEUE IS CREATED \n\n" << endl;
}
int isempty(struct queue *q) {
	if (q->r == -1)
	{
		return 1;

	}
	else {
		return 0;
	}
}
int isfull(struct queue *q) {
	if (q->f == 0 && q->r == 4) {
		return 1;

	}
	if (q->f == q->r + 1)
	{
		return 1;

	}
	else {
		return 0;
	}
}
void enqueue(struct queue *q, int val) {
	if (isfull(q))
	{
		cout << "YOUR QUEUE IS FULL NOW" << endl;
	}
	else {
		if (q->f == -1)
		{
			q->f = 0;
		}
		q->r = (q->r - 1) % 5;
		q->arr[q->r] = val;
		cout << "VALUE  " << q->arr[q->r] << "  IS INSET ON THE INDEX NO  " << q->r << endl;
	}
}
void dequeue(struct queue *q) {
	if (isempty(q))
	{
		cout << "YOUR QUEUE IS EMPTY......." << endl;
	}
	else {
		int var = q->arr[q->f];
		cout << "VALUE ( " << q->arr[q->f] << " )IS DELETED" << endl;
		if (q->f == q->r) {
			q->f = -1;
			q->r = -1;

		}
		else {
			q->f = (q->f+1) % 5;
		}
	}
}
int main()
{
	struct queue *q = (struct queue*)malloc(sizeof(struct queue));
	createqueue(q);
	enqueue(q, 10);
	enqueue(q, 20);
	enqueue(q, 20);
	enqueue(q, 30);
	dequeue(q);
	enqueue(q, 40);
	enqueue(q, 50);
	return 0;
}

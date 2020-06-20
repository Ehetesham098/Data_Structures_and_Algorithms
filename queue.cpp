
#include<bits/stdc++.h>

using namespace std; 

void showqueue(queue <int> q) 
{ 

	while (!q.empty()) 
	{ 
		cout << '\t' << q.front(); 
		q.pop(); 
	} 
	cout << endl; 
} 

int main() 
{ 
	queue <int> q; // declaration of a queue
	q.push(10); 
	q.push(20); 
	q.push(30);
	q.push(40); 

	cout << "The queue q is : "; 
	showqueue(q); 

	cout << "q.size() : " << q.size()<<endl; 
	cout << "q.front() : " << q.front()<<endl; 
	cout << "q.back() : " << q.back()<<endl; 

	cout << "q.pop() : "; 
	q.pop(); 
	showqueue(q); 

	return 0; 
} 


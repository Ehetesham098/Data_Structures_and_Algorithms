#include<bits/stdc++.h>


using namespace std;

void showstack(stack <int> s) 
{ 
    while (!s.empty()) //empty returns 1 when stack empty
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 






int main()
{
	stack <int> s;
	
	 
    s.push(10); 
    s.push(50); 
    s.push(3); 
    s.push(5); 
    s.push(1); 
    
    
  
    cout << "The stack is : "; 
    showstack(s); 
  
    cout << "s.size() : " << s.size()<<endl; 
    cout << "s.top() : " << s.top()<<endl; 
  
  
    cout << "s.pop() : "; 
    s.pop(); 
    showstack(s); 

    return 0; 
	
	
}

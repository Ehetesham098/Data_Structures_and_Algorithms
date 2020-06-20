#include<bits/stdc++.h>

using namespace std;



void bfs(int mat[8][8],bool visited[8],int start)
{
	
	queue <int> q;
	
	q.push(start);
	
	visited[start]=true;
	
	while(!q.empty())
	{
		int node;
		node=q.front();
		q.pop();
		
		cout<<node<<" ";
		
		for(int i=0;i<8;i++)
		{
			if(mat[node][i]==1&&(!visited[i]))
			{
				q.push(i);
				visited[i]=true;
			}
		}		
	}	
}



int main()			
{				   
	int mat[8][8]={0, 1, 1, 0, 0, 0, 0, 0,   
				   1, 0, 1, 0, 1, 0, 0, 0,	
				   1, 1, 0, 1, 0, 0, 0, 0,	
				   0, 0, 1, 0, 1, 1, 1, 1,	
				   0, 1, 0, 1, 0, 0, 0, 0,	
				   0, 0, 0, 1, 0, 0, 0, 0,	
				   0, 0, 0, 1, 0, 0, 0, 0,	
				   0, 0, 0, 1, 0, 0, 0, 0};	
	
	bool visited[8]={0}; // initialised nde as false
	
	bfs(mat,visited,0);
	
	
}

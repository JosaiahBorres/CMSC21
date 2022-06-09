// C program for the above approach
#include <stdio.h>


// Driver Code
int main()
{
    matrix [9][9] = {
        '', 'A', 'B','{c}', '{d}', 'e', 'f', 'g', 'h',
        'A', '1', '1','0', '0', '0','1','0','0'
        'B', '1', '1','1', '1','0', '1', '0','1', '0',
        '[C]', '0', '1''1', '1','0', '0', '1','0', '0',
        '[D]', '0', '1''1', '1','0', '0', '0','1', '0',
        'E', '0', '1','1', '1','0', '1', '0','0', '0',
        'F', '1', '0''1', '1','0', '0', '0','0', '0',
           'G', '0', '1','1', '1','0', '0', '1','0', '0',
        'H', '1', '0''1', '1','0', '0', '0','0', '0',
    //dijkstra's algorithm; from the net
start=source;
    for(i=1;i<=n;i++)
    {
        dist[i]=999;
        pre[i]=-1;   
    }
    visited[source]=1; 
    dist[source]=0;  
    while(visited[target]==0)
    {
        min=999;
        m=0;
        for(i=1;i<=n;i++)
        {
            d=dist[start]+cost[start][i];  
            if(d<dist[i] && visited[i]==0)
            {
	
	// Function call to create
	// Adjacency Matrix
	createAdjMatrix(Adj, arr);

	// Print Adjacency Matrix
	printAdjMatrix(Adj);

	return 0;
}

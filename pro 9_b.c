#include <iostream>
using namespace std;

int a,b,u,v,n,i,j,ne=1;
int visited[10]={0},min,mincost=0,cost[10][10];

int main()
{
	cout<<"Enter the number of nodes";
	cin>>"%d",&n;
	cout<<"Enter the adjacency matrix\n";
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			cin>>cost[i][j];
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
		visited[1]=1;
		cout<<"\n";
		while(ne<n)
		{
			for(i=1,min=999;i<=n;i++)
				for(j=1;j<=n;j++)
					if(cost[i][j]<min)
						if(visited[i]!=0)
						{
							min=cost[i][j];
							a=i;
							b=j;
						}
						if(visited[a]==0 || visited[b]==0)
						{
							//cout<<"Edge %d:(%d %d)distance:%d\n",ne++,a,b,min;
							cout<<"Edge"<<ne++,<<":("<<a<<b<<")distance"<<min;
							mincost+=min;
							visited[b]=1;
							
						}
						cost[a][b]=cost[b][a]=999;
		}
		cout<<"Minimum distance:"<<mincost;
}

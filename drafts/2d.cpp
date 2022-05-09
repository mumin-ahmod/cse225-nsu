
// 2d grid
#include<iostream>
#include<queue>
using namespace std;
int graph[8][8];
bool visited[8][8] = {false};
int time[8][8];
int level[8][8] = {0};
int tim = 0;
int dx[8] = {0,0,-1,1,-1,-1,1,1};
int dy[8] = {1,-1,0,0,1,-1,-1,1};
bool isValid(int sx, int sy)
{
    if(sx>=0 && sy>=0 && sx<8 && sy<8 && visited[sx][sy] == false)
    {
        return true;
    }
    else
        return false;
}
struct node
{
    int x;
    int y;
};
void BFS(int sx, int sy)
{
    visited[sx][sy] = true;
    queue<node> q;
    int xx,yy,next_x,next_y;
    node n;
    n.x = sx;
    n.y = sy;
    q.push(n);
    while(!q.empty())
    {
        xx = q.front().x;
        yy = q.front().y;
        q.pop();
        for(int i= 0 ; i<4;i++)
        {
           next_x = xx+dx[i];
           next_y  = yy+dy[i];
           if(isValid(next_x,next_y))
           {
               visited[next_x][next_y] = true;
               n.x = next_x;
               n.y = next_y;
               level[next_x][next_y] = level[xx][yy] + 1;
               q.push(n);
           }
        }
    }


}
void DFS(int source_x,int source_y)
{
    visited[source_x][source_y] = true;
    time[source_x][source_y] = tim;
    tim++;
    int xx, yy;
    for(int i = 0 ; i < 4;i++)
    {
        xx = source_x + dx[i];
        yy = source_y + dy[i];
        if(isValid(xx,yy))
        {
            DFS(xx,yy);
        }
    }
}
int main()
{
    BFS(7,7);
    for(int i= 0 ; i < 8; i++)
    {
        for(int j = 0 ; j<8; j++)
        {
            cout<<level[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
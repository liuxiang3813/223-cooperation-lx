/*
问题描述：
    一个n*m的迷宫，所有的点都可以走，请你按照 右、下、左、上 的顺讯进行搜索，找出从左上角到右下角的最短路程。

输入：
    一个整数 n(n<=5) ,一个整数m(m<=5)代表迷宫大小。
输出：
    从左上角 1,1 点走到右下角 n,m 点的最短路径
*/

#include<stdio.h>

int mark[110][110];
int path[10010][4];
int n, m;
int head = 1;
int tail = 1;

// 方向顺序：右、下、左、上
// dx,dy 对应：右(0,1)、下(1,0)、左(0,-1)、上(-1,0)
int dx[5] = {0, 0, 1, 0, -1};
int dy[5] = {0, 1, 0, -1, 0};
int tx, ty;
int k = 1;

int PrintPath(int x)
{
    if (path[x][3]!=0)
    {
        PrintPath(path[x][3]);
    }
    printf("(%d,%d)", path[x][1], path[x][2]);
}

int main(void)
{
    scanf("%d%d", &n, &m);
    mark[1][1] = 1;
    path[1][1] = 1;
    path[1][2] = 1;
    path[1][3] = 0;

    while (head <= tail)
    {
        for (int i = 1; i <= 4;i++)
        {
            tx = path[head][1] + dx[i];
            ty = path[head][2] + dy[i];
            if(tx>=1&&tx<=n&&ty>=1&&ty<=m&&mark[tx][ty]==0)
            {
                tail++;
                path[tail][1] = tx;
                path[tail][2] = ty;
                path[tail][3] = head;
                mark[tx][ty] = k + 1;
                k++;
                if(tx==n&&ty==m)
                {
                    PrintPath(tail);
                }
            }
        }
        head++;
    }
    printf("\n");
}
/*
问题描述：
    一个n*n的迷宫，所有的点都可以走，请你按照 右、下、左、上 的顺讯进行搜索，找出从左上角到右下角的所有路程。

输入：
    一个整数 n(n<=5) 代表迷宫大小。
输出：
    从左上角 1,1 点走到右下角 n,n 点的所有路径
*/
#include <stdio.h>

#define true 1
#define false 0

int n;          // n= 3
int mark[6][6]; // bool
int path[26][3];
int count = 0;

// 方向顺序：右、下、左、上
// dx,dy 对应：右(0,1)、下(1,0)、左(0,-1)、上(-1,0)
int dx[5] = {0, 0, 1, 0, -1};
int dy[5] = {0, 1, 0, -1, 0};

void PrintPath(int k)
{
    count++;
    if (count < 10)
    {
        printf("第0%d条:", count);
    }
    else
    {
        printf("第%d条:", count);
    }

    for (int i = 1; i < k; i++)
    {
        printf("(%d,%d) -> ", path[i][1], path[i][2]);
    }
    printf("(%d,%d)\n", path[k][1], path[k][2]);
}

void dfs(int x, int y, int k)
{
    path[k][1] = x;
    path[k][2] = y;
    // 如果到终点则打印路线
    if (x == n && y == n)
    {
        PrintPath(k);
        return;
    }

    // 按 右、下、左、上 的顺序搜索
    for (int i = 1; i <= 4; i++)
    {
        int tx = x + dx[i];
        int ty = y + dy[i];

        // 先判断边界，再判断是否访问过
        if (tx >= 1 && tx <= n && ty >= 1 && ty <= n && mark[tx][ty] == false)
        {
            mark[tx][ty] = true;
            dfs(tx, ty, k + 1);
            mark[tx][ty] = false;
            path[k + 1][1] = 0;
            path[k + 1][2] = 0;
        }
    }
}

int main(void)
{
    printf("请输入方格数量n:");
    scanf("%d", &n);
    mark[1][1] = true;
    dfs(1, 1, 1); // mark的行、mark的列、path的行
    return 0;
}

using System;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(string[] grid)
    {
        int[] answer = new int[] { };

        bool[,,] isTake = new bool[grid.GetLength(0), grid[0].Length, 4];
        List<int> list = new List<int>();
        int cnt = 0;
        for (int i = 0; i < grid.GetLength(0); i++)
        {
            for (int j = 0; j < grid[0].Length; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    if (isTake[i, j, k] == false)
                        cnt = Find(ref isTake, i, j, k, grid);
                    if (cnt != 0)
                        list.Add(cnt);
                    cnt = 0;
                }

            }
        }

        list.Sort();
        return answer = list.ToArray();
    }
    public int Find(ref bool[,,] isTake, int i, int j, int k, string[] grid)
    {
        int[] row = { 1, 0, -1, 0 }; // 0: up, 1: right, 2: down, 3: left
        int[] col = { 0, 1, 0, -1 };
        int count = 0;
        while (true)
        {
            if (isTake[i, j, k] == true)
                break;
            isTake[i, j, k] = true;
            // Console.WriteLine("Im here: "+i+j+k);
            count++;
            int dir = k;


            i += row[dir];
            j += col[dir];

            if (i < 0)
                i = grid.GetLength(0) - 1;
            else if (i >= grid.GetLength(0))
                i = 0;
            if (j < 0)
                j = grid[0].Length - 1;
            else if (j >= grid[0].Length)
                j = 0;
            if (grid[i][j] == 'S')
                k = k;
            else if (grid[i][j] == 'L')
            {
                k -= 1;
                if (k < 0)
                    k = 3;
            }
            else if (grid[i][j] == 'R')
                k = (k + 1) % 4;

        }
        // Console.WriteLine("Im out: "+i+j+k);

        return count;
    }
}
using System;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(int rows, int columns, int[,] queries)
    {
        int[] answer = new int[] { };
        // 리스트 -> 큐로 변경
        List<int> sm = new List<int>();
        int small;

        // 매트릭스 생성
        int[,] matrix = new int[rows, columns];
        int count = 1;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                matrix[i, j] = count;
                count++;
            }
        }
        int before = 0;
        for (int k = 0; k < queries.GetLength(0); k++)
        {
            int startRow = queries[k, 0] - 1;
            int startCol = queries[k, 1] - 1;
            int endRow = queries[k, 2] - 1;
            int endCol = queries[k, 3] - 1;

            before = matrix[startRow, startCol];

            small = before;
            for (int i = startRow; i < endRow; i++)
            {
                matrix[i, startCol] = matrix[i + 1, startCol];
                small = Math.Min(small, matrix[i + 1, startCol]);
            }
            for (int i = startCol; i < endCol; i++)
            {
                matrix[endRow, i] = matrix[endRow, i + 1];
                small = Math.Min(small, matrix[endRow, i + 1]);
            }
            for (int i = endRow; i > startRow; i--)
            {
                matrix[i, endCol] = matrix[i - 1, endCol];
                small = Math.Min(small, matrix[i - 1, endCol]);
            }
            for (int i = endCol; i > startCol; i--)
            {
                matrix[startRow, i] = matrix[startRow, i - 1];
                small = Math.Min(small, matrix[startRow, i - 1]);
            }

            matrix[startRow, startCol + 1] = before;
            sm.Add(small);

        }
        return answer = sm.ToArray();
    }
}
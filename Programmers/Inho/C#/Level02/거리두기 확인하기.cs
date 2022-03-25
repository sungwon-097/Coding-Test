using System;

public class Solution
{
    public int[] solution(string[,] places)
    {
        int[] answer = new int[places.GetLength(0)];
        char[,] matrix = new char[5, 5];
        bool near = false;
        for (int k = 0; k < places.GetLength(0); k++)
        {
            for (int j = 0; j < 5; j++)
            {
                for (int i = 0; i < 5; i++)
                {
                    matrix[j, i] = places[k, j][i];
                }
            }
            near = false;
            for (int j = 0; j < 5; j++)
            {
                for (int i = 0; i < 5; i++)
                {
                    if (matrix[j, i] == 'P')
                    {
                        near = isNear(matrix, j, i);
                        Console.WriteLine(near);
                        if (near == true)
                            break;
                    }
                }
                if (near == true)
                    break;
            }
            if (near)
                answer[k] = 0;
            else
                answer[k] = 1;
        }

        return answer;
    }

    public bool isNear(char[,] matrix, int j, int i)
    {
        int[] row = new int[] { 0, 1, 0, -1 };
        int[] col = new int[] { 1, 0, -1, 0 };

        Console.WriteLine(j + " " + i + "");
        for (int a = 0; a < row.Length; a++)
        {
            Console.WriteLine();
            Console.WriteLine(j + row[a] + " " + (col[a] + i) + "");
            if (j + row[a] < 0 || j + row[a] >= 5)
                continue;
            if (i + col[a] < 0 || i + col[a] >= 5)
                continue;
            if (matrix[j + row[a], i + col[a]] == 'P')
                return true;
            if (matrix[j + row[a], i + col[a]] == 'X')
                continue;
            if (matrix[j + row[a], i + col[a]] == 'O')
            {
                for (int b = 0; b < row.Length; b++)
                {
                    Console.WriteLine(j + row[a] + row[b] + " " + (col[a] + col[b] + i) + "");
                    if ((a + 2) % 4 == b)
                        continue;
                    if (j + row[a] + row[b] < 0 || j + row[a] + row[b] >= 5)
                        continue;
                    if (i + col[a] + col[b] < 0 || i + col[a] + col[b] >= 5)
                        continue;
                    if (matrix[j + row[a] + row[b], i + col[a] + col[b]] == 'X')
                        continue;
                    if (matrix[j + row[a] + row[b], i + col[a] + col[b]] == 'P')
                        return true;
                }
            }
        }
        return false;
    }
}
public class Solution
{
        public int[,] solution(int[,] arr1, int[,] arr2)
        {
            // 배열의 각 차원에 있는 요소의 수를 구한다
            int length1 = arr1.GetLength(0);
            int length2 = arr1.GetLength(1);

            int[,] answer = new int[length1, length2];

            // 배열의 덧셈 계산
            for (int i = 0; i < length1; ++i)
            {
                for(int j = 0; j < length2; ++j)
                {
                    answer[i,j] = arr1[i,j] + arr2[i,j];
                }
            }

            return answer;
        }
}
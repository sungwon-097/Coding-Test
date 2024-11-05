// https://www.acmicpc.net/problem/1926

import java.util.Scanner;
import java.io.*;
import java.util.*;

// 문제
// 어떤 큰 도화지에 그림이 그려져 있을 때, 그 그림의 개수와, 그 그림 중 넓이가 가장 넓은 것의 넓이를 출력하여라.
// 단, 그림이라는 것은 1로 연결된 것을 한 그림이라고 정의하자. 가로나 세로로 연결된 것은 연결이 된 것이고 대각선으로 연결이 된 것은 떨어진 그림이다.
// 그림의 넓이란 그림에 포함된 1의 개수이다.
//
// 입력
// 첫째 줄에 도화지의 세로 크기 n(1 ≤ n ≤ 500)과 가로 크기 m(1 ≤ m ≤ 500)이 차례로 주어진다.
// 두 번째 줄부터 n+1 줄 까지 그림의 정보가 주어진다.
// (단 그림의 정보는 0과 1이 공백을 두고 주어지며, 0은 색칠이 안된 부분, 1은 색칠이 된 부분을 의미한다)
//
// 출력
// 첫째 줄에는 그림의 개수, 둘째 줄에는 그 중 가장 넓은 그림의 넓이를 출력하여라.
// 단, 그림이 하나도 없는 경우에는 가장 넓은 그림의 넓이는 0이다.

// 예제 입력
//6 5
//1 1 0 1 1
//0 1 1 0 0
//0 0 0 0 0
//1 0 1 1 1
//0 0 1 1 1
//0 0 1 1 1

// 예제 출력
//4
//9

public class Main {

    static int n, m; // 첫째 줄에 도화지의 세로 크기 n(1 ≤ n ≤ 500)과 가로 크기 m(1 ≤ m ≤ 500)이 차례로 주어진다.
    static int[][] matrix; // 도화지
    static boolean[][] visited; // 방문 확인

    static int[] dx = {-1, 1, 0, 0};
    static int[] dy = {0, 0, 1, -1};

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();
        m = scanner.nextInt();
        matrix = new int[n][m];
        visited = new boolean[n][m];

        int numberOfPictures = 0; // 첫번째 출력
        int maxSize = 0; // 두번째 출력

        buildMatrix(scanner); // matrix 생성

        scanner.close();

        for (int i = 0; i < n; i++) { // 순회하며 각 점에서의 최대 넓이 찾기
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 1 && visited[i][j] == false) {
//                    int size = bfs(i, j); // 완전탐색이므로 bfs, dfs 모두 가능
                    int size = dfs(i, j);
                    maxSize = size > maxSize ? size : maxSize;
                    ++numberOfPictures;
                }
            }
        }
        System.out.println(numberOfPictures);
        System.out.println(maxSize);
    }

    private static void buildMatrix(Scanner scanner) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = scanner.nextInt();
            }
        }
    }

    static int bfs(int x, int y) {
        Queue<int[]> queue = new LinkedList<>();
        queue.add(new int[]{x, y});
        visited[x][y] = true;
        int size = 1; // {x, y}가 1이므로 1부터 시작

        while (!queue.isEmpty()) {
            int[] current = queue.poll(); // queue의 현재 위치 기준
            int cx = current[0];
            int cy = current[1];

            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];

                if (nx >= 0 && nx < n &&
                        ny >= 0 && ny < m &&
                        !visited[nx][ny] && matrix[nx][ny] == 1
                ) {
                    queue.add(new int[]{nx, ny});
                    visited[nx][ny] = true;
                    size++;
                }
            }
        }
        return size;
    }

    static int dfs(int x, int y) {
        Stack<int[]> stack = new Stack<>();
        stack.push(new int[]{x, y});
        visited[x][y] = true;
        int size = 1;

        while (!stack.isEmpty()) {
            int[] current = stack.pop();
            int cx = current[0];
            int cy = current[1];

            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                if (nx >= 0 && nx < n &&
                        ny >= 0 && ny < m &&
                        !visited[nx][ny] && matrix[nx][ny] == 1) {
                    stack.push(new int[]{nx, ny});
                    visited[nx][ny] = true;
                    ++size;
                }
            }
        }
        return size;
    }
}
import java.util.*;
import java.io.*;

// 문제
// N×M크기의 배열로 표현되는 미로가 있다.
// 미로에서 1은 이동할 수 있는 칸을 나타내고, 0은 이동할 수 없는 칸을 나타낸다.
// 이러한 미로가 주어졌을 때, (1, 1)에서 출발하여 (N, M)의 위치로 이동할 때 지나야 하는 최소의 칸 수를 구하는 프로그램을 작성하시오.
// 한 칸에서 다른 칸으로 이동할 때, 서로 인접한 칸으로만 이동할 수 있다.
// 위의 예에서는 15칸을 지나야 (N, M)의 위치로 이동할 수 있다. 칸을 셀 때에는 시작 위치와 도착 위치도 포함한다.

// 입력
// 첫째 줄에 두 정수 N, M(2 ≤ N, M ≤ 100)이 주어진다. 다음 N개의 줄에는 M개의 정수로 미로가 주어진다.
// 각각의 수들은 붙어서 입력으로 주어진다.

// 출력
// 첫째 줄에 지나야 하는 최소의 칸 수를 출력한다. 항상 도착위치로 이동할 수 있는 경우만 입력으로 주어진다.

// 예제 입력
//4 6
//101111
//101010
//101011
//111011

// 예제 출력
// 15

public class Main {

    static int matrix[][];
    static boolean visited[][];
    static int n, m;

    static int[] dx = {-1, 1, 0, 0};
    static int[] dy = {0, 0, -1, 1};

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();
        m = scanner.nextInt();

        scanner.nextLine();

        matrix = new int[n][m];
        visited = new boolean[n][m];

        for (int i = 0; i < n; i++) { // 연속된 숫자를 받기에 line으로 받은 다음 하나씩 파싱
            String line = scanner.nextLine();
            for (int j = 0; j < m; j++) {
                matrix[i][j] = Character.getNumericValue(line.charAt(j));
            }
        }
        scanner.close();

        System.out.println(bfs()); // 최단거리이므로 bfs
    }

    public static int bfs() {
        Queue<int[]> queue = new LinkedList<>();
        queue.add(new int[]{0, 0, 1});
        visited[0][0] = true;
        int minDistance = n*m+1; // 가질 수 있는 최대값+1, 도달하지 못할 경우를 생각한다면 이 값일 경우 -1을 반환하도록 할 수 있음

        while (!queue.isEmpty()) {
            int[] current = queue.poll();
            int cx = current[0];
            int cy = current[1];
            int distance = current[2];
            if (cx == n-1 && cy == m-1)
                minDistance = minDistance>distance?distance:minDistance;
            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                if (nx >= 0 && nx < n && ny >= 0 && ny < m && matrix[nx][ny] == 1 && !visited[nx][ny]) {
                    queue.add(new int[]{nx, ny, distance+1});
                    visited[nx][ny] = true;
                }
            }
        }
        return minDistance;
    }
}
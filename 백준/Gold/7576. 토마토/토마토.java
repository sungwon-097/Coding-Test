import java.util.*;
import java.io.*;

public class Main {

    static int m, n;
    static int[][] box;
    static boolean[][] visited;
    static int[] dx = {0, 0, 1, -1};
    static int[] dy = {-1, 1, 0, 0};

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        n = scanner.nextInt();
        m = scanner.nextInt();

        box = new int[m][n];
        visited = new boolean[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                box[i][j] = scanner.nextInt();
            }
        }
        int days = bfs();
        System.out.println(checkComplete()?days:-1);
    }

    public static int bfs() {
        int days = 0;
        Queue<int[]> queue = new LinkedList<>();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (box[i][j] == 1) {
                    queue.add(new int[]{i, j, 0});
                    visited[i][j] = true;
                }
            }
        }
        while (!queue.isEmpty()) {
            int[] current = queue.poll();
            int cx = current[0];
            int cy = current[1];
            int cday = current[2];

            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];

                if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny] && box[nx][ny] == 0) {
                    box[nx][ny] = 1;
                    visited[nx][ny] = true;
                    queue.add(new int[]{nx, ny, cday+1});
                    days = Math.max(days, cday+1);
                }
            }
        }
        return days;
    }

    public static boolean checkComplete() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (box[i][j] == 0)
                    return false;
            }
        }
        return true;
    }
}
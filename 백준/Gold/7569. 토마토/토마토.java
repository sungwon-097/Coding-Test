import java.util.*;
import java.io.*;

public class Main {

    static int m, n, h;
    static int[][][] box;
    static boolean[][][] visited;
    static int[] dx = {0, 0, 1, -1, 0, 0};
    static int[] dy = {-1, 1, 0, 0, 0, 0};
    static int[] dz = {0, 0, 0, 0, -1, 1};

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        h = scanner.nextInt();
        n = scanner.nextInt();
        m = scanner.nextInt();

        box = new int[m][n][h];
        visited = new boolean[m][n][h];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < h; k++) {
                    box[i][j][k] = scanner.nextInt();
                }
            }
        }
        int days = bfs();
        System.out.println(checkComplete() ? days : -1);
    }

    public static int bfs() {
        int days = 0;
        Queue<int[]> queue = new LinkedList<>();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < h; k++) {
                    if (box[i][j][k] == 1) {
                        queue.add(new int[]{i, j, k, 0});
                        visited[i][j][k] = true;
                    }
                }
            }
        }
        while (!queue.isEmpty()) {
            int[] current = queue.poll();
            int cx = current[0];
            int cy = current[1];
            int cz = current[2];
            int cday = current[3];

            for (int i = 0; i < 6; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                int nz = cz + dz[i];

                if (nx >= 0 && nx < m && ny >= 0 && ny < n && nz >= 0 && nz < h && !visited[nx][ny][nz] && box[nx][ny][nz] == 0) {
                    box[nx][ny][nz] = 1;
                    visited[nx][ny][nz] = true;
                    queue.add(new int[]{nx, ny, nz, cday + 1});
                    days = Math.max(days, cday + 1);
                }
            }
        }
        return days;
    }

    public static boolean checkComplete() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < h; k++) {
                    if (box[i][j][k] == 0)
                        return false;
                }
            }
        }
        return true;
    }
}
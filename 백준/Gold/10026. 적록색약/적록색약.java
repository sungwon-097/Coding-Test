import java.io.*;
import java.util.*;

class Main {

    static int n;
    static int[][] matrix;
    static boolean[][] visited;
    static int[] dx = {-1, 1, 0, 0};
    static int[] dy = {0, 0, -1, 1};

    public static void main(String[] args) throws IOException {
        int ra = 0;
        int rb = 0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        matrix = new int[n][n];
        for (int i = 0; i < n; i++) {
            String line = br.readLine();
            for (int j = 0; j < n; j++) {
                matrix[i][j] = line.charAt(j) == 'R' ? 0 : (line.charAt(j) == 'G' ? 1 : 2);
            }
        }
        br.close();

        visited = new boolean[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ra += bfs(new int[]{i, j}, false);
            }
        }
        visited = new boolean[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                rb += bfs(new int[]{i, j}, true);
            }
        }
        System.out.println(ra+" "+rb);
    }

    public static int bfs(int[] current, boolean isBlindness) {
        Queue<int[]> queue = new LinkedList<>();
        if (visited[current[0]][current[1]])
            return 0;
        queue.add(current);
        visited[current[0]][current[1]] = true;

        while (!queue.isEmpty()) {
            int[] curr = queue.poll();
            int cx = curr[0];
            int cy = curr[1];
            int color = matrix[cx][cy];
            for (int i = 0; i < 4; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];

                if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny] &&
                        ((matrix[nx][ny] == color) || (isBlindness && matrix[nx][ny] < 2 && color <2))
                ) {
                    queue.add(new int[]{nx, ny});
                    visited[nx][ny] = true;
                }
            }
        }
        return 1;
    }
}
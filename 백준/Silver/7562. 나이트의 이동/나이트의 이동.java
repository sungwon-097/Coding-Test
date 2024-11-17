import java.io.*;
import java.util.*;

class Main {

    static int[][] matrix;
    static boolean[][] visited;
    static int[] dx = {-2, -2, -1, -1, 1, 1, 2, 2};
    static int[] dy = {-1, 1, -2, 2, 2, -2, 1, -1};

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int cases = Integer.parseInt(br.readLine());
        int[] answers = new int[cases];

        for (int i = 0; i < cases; i++) {
            int l = toInt(br.readLine());
            matrix = new int[l][l];
            visited = new boolean[l][l];
            int[] current = Arrays.stream(br.readLine().split(" ")).mapToInt(Main::toInt).toArray();
            int[] arrival = Arrays.stream(br.readLine().split(" ")).mapToInt(Main::toInt).toArray();
            answers[i] = bfs(current, arrival, l);
        }
        Arrays.stream(answers).forEach(System.out::println);
    }

    public static int toInt(String line) {
        return Integer.parseInt(line);
    }

    public static int bfs(int[] curr, int[] arrv, int length) {
        Queue<int[]> queue = new LinkedList<>();
        queue.add(new int[]{curr[0], curr[1], 0});
        while (!queue.isEmpty()) {
            int[] current = queue.poll();
            int cx = current[0];
            int cy = current[1];
            int distance = current[2];
            if (cx == arrv[0] && cy == arrv[1]) {
                return distance;
            }
            for (int i = 0; i < 8; i++) {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                if (nx >= 0 && nx < length && ny >= 0 && ny < length && !visited[nx][ny]) {
                    queue.add(new int[]{nx, ny, distance + 1});
                    visited[nx][ny] = true;
                }
            }
        }
        return 0;
    }
}

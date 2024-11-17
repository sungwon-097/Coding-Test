import java.util.*;

class Main {

    static int[] dx = {-1, 1, 0, 0};
    static int[] dy = {0, 0, -1, 1};
    static List<Integer> answers = new ArrayList<>();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int test = 0; test < t; test++) {
            int m = scanner.nextInt();
            int n = scanner.nextInt();
            int k = scanner.nextInt();

            int[][] field = new int[m][n];
            boolean[][] visited = new boolean[m][n];
            for (int i = 0; i < k; i++) {
                field[scanner.nextInt()][scanner.nextInt()] = 1;
            }
            answers.add(bfs(field, visited));
        }

        for (int answer : answers)
            System.out.println(answer);
    }

    public static int bfs(int[][] matrix, boolean[][] visited) {
        Queue<int[]> queue = new LinkedList<>();
        int count = 0;
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[0].length; j++) {
                if (!visited[i][j] && matrix[i][j] == 1) {
                    queue.add(new int[]{i, j});
                    count += 1;
                    while (!queue.isEmpty()) {
                        int[] current = queue.poll();
                        int cx = current[0];
                        int cy = current[1];

                        visited[cx][cy] = true;

                        for (int n = 0; n < 4; n++) {
                            int nx = cx + dx[n];
                            int ny = cy + dy[n];
                            if (nx >= 0 && nx < matrix.length && ny >= 0 && ny < matrix[0].length && !visited[nx][ny] && matrix[nx][ny] == 1) {
                                visited[nx][ny] = true;
                                queue.add(new int[]{nx, ny});
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
}
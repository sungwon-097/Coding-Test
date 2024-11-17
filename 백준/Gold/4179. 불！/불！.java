import java.util.*;
import java.io.*;

public class Main {

    static int r, c;
    static char[][] maze;
    static boolean[][] visited;
    static boolean[][] fireVisited;
    static Queue<Location> jQueue = new LinkedList<>();
    static Queue<Location> fQueue = new LinkedList<>();

    static class Location {
        public int x, y, dist;
        private final int[] dx = {-1, 1, 0, 0};
        private final int[] dy = {0, 0, -1, 1};

        public Location(int x, int y, int dist) {
            this.x = x;
            this.y = y;
            this.dist = dist;
        }

        public Location move(int index) {
            return new Location(x + dx[index], y + dy[index], dist + 1);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] words = br.readLine().split(" ");

        r = Integer.parseInt(words[0]);
        c = Integer.parseInt(words[1]);

        maze = new char[r][c];
        visited = new boolean[r][c];
        fireVisited = new boolean[r][c];



        for (int i = 0; i < r; i++) {
            String line = br.readLine();
            for (int j = 0; j < c; j++) {
                char location = line.charAt(j);
                if (location == 'J') {
                    jQueue.add(new Location(i, j, 0));
                } else if (location == 'F') {
                    fQueue.add(new Location(i, j, 0));
                }
                maze[i][j] = location;
            }
        }
        br.close();
        int result = bfs();
        System.out.println(result == -1 ? "IMPOSSIBLE" : result);
    }

    public static int bfs() {
        while (!jQueue.isEmpty()) {
            int fires = fQueue.size();
            for (int i = 0; i < fires && !fQueue.isEmpty(); i++) {
                Location fire = fQueue.poll();
                fireVisited[fire.x][fire.y] = true;
                for (int d = 0; d < 4; d++) {
                    Location next = fire.move(d);
                    if (next.x >= 0 && next.x < r && next.y >= 0 && next.y < c && !fireVisited[next.x][next.y] && maze[next.x][next.y] != '#') {
                        maze[next.x][next.y] = 'F';
                        fireVisited[next.x][next.y] = true;
                        fQueue.add(next);
                    }
                }
            }
            int jiHoons = jQueue.size();
            for (int i = 0; i < jiHoons && !jQueue.isEmpty(); i++) {
                Location current = jQueue.poll();
                maze[current.x][current.y] = '.';
                visited[current.x][current.y] = true;
                for (int d = 0; d < 4; d++) {
                    Location next = current.move(d);
                    if (next.x >= 0 && next.x < r && next.y >= 0 && next.y < c && !visited[next.x][next.y] && maze[next.x][next.y] == '.') {
                        maze[next.x][next.y] = 'J';
                        visited[next.x][next.y] = true;
                        jQueue.add(next);
                    } else if (next.x < 0 || next.x == r || next.y < 0 || next.y == c) {
                        return next.dist;
                    }
                }
            }
        }
        return -1;
    }
}

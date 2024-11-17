import java.util.*;
import java.io.*;

public class Main {

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
        int cases = Integer.parseInt(br.readLine());
        int[] answers = new int[cases];

        for (int i = 0; i < cases; i++) {
            String[] wh = br.readLine().split(" ");
            int h = Integer.parseInt(wh[0]);
            int w = Integer.parseInt(wh[1]);
            int[][] building = new int[w][h];
            Queue<Location> sQueue = new LinkedList<>();
            Queue<Location> fQueue = new LinkedList<>();

            for (int j = 0; j < building.length; j++) {
                String line = br.readLine();
                for (int k = 0; k < building[0].length; k++) {
                    char location = line.charAt(k);
                    building[j][k] = location;
                    if (location == '@')
                        sQueue.add(new Location(j, k, 0));
                    else if (location == '*')
                        fQueue.add(new Location(j, k, 0));
                }
            }
            answers[i] = bfs(building, sQueue, fQueue);
        }
        br.close();
        Arrays.stream(answers).forEach(answer -> System.out.println(answer==-1?"IMPOSSIBLE":answer));
    }

    private static int bfs(int[][] building, Queue<Location> sQueue, Queue<Location> fQueue) {
        boolean[][] visited = new boolean[building.length][building[0].length];
        boolean[][] fireVisited = new boolean[building.length][building[0].length];

        while (!sQueue.isEmpty()) {
            int f = fQueue.size();
            for (int i = 0; i < f && !fQueue.isEmpty(); i++) {
                Location fire = fQueue.poll();
                for (int j = 0; j < 4; j++) {
                    Location next = fire.move(j);
                    if (next.x >= 0 && next.x < building.length && next.y >= 0 && next.y < building[0].length && !fireVisited[next.x][next.y] && building[next.x][next.y] != '#') {
                        fireVisited[next.x][next.y] = true;
                        building[next.x][next.y] = '*';
                        fQueue.add(next);
                    }
                }
            }

            int s = sQueue.size();
            for (int i = 0; i < s&&!sQueue.isEmpty(); i++) {
                Location current = sQueue.poll();
                building[current.x][current.y] = '.';
                for (int j = 0; j < 4; j++) {
                    Location next = current.move(j);
                    if (next.x >= 0 && next.x < building.length && next.y >= 0 && next.y < building[0].length && !visited[next.x][next.y] && building[next.x][next.y] == '.') {
                        visited[next.x][next.y] = true;
                        building[next.x][next.y] = '@';
                        sQueue.add(next);
                    } else if (next.x < 0 || next.x == building.length || next.y < 0 || next.y == building[0].length) {
                        return next.dist;
                    }
                }
            }
        }
        return -1;
    }
}

import java.util.*;
import java.io.*;

public class Main {

    static int n, k;
    static int[] dist = new int[100001];
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        k = scanner.nextInt();

        System.out.println(bfs(n));
    }

    public static int bfs(int start){
        Queue<Integer> queue = new LinkedList<>();
        queue.add(start);
        while(!queue.isEmpty()){
            int current = queue.poll();
            if (current == k){
                break;
            }
            int[] next = new int[]{current-1, current+1, current*2};
            for (int i: next){
                if (i >= 0 && i <= 100000 && dist[i] == 0){
                    dist[i] = dist[current]+1;
                    queue.add(i);
                }
            }
        }
        return dist[k];
    }
}
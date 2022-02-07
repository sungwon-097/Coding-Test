using System;

public class Example
{
    public static void Main()
    {
        String[] s;
        String res = "";
        Console.Clear();
        s = Console.ReadLine().Split(' ');

        int a = Int32.Parse(s[0]);
        int b = Int32.Parse(s[1]);
        for(int i = 0; i< b; i++){
            for(int j=0;j<a;j++){
                Console.Write("*");
                //res += "*";
            }
            Console.Write("\n");
            //res += "\n";
        }
        //Console.WriteLine("{0}", a + b);
        //Console.WriteLine("{0}", res);
    }
}
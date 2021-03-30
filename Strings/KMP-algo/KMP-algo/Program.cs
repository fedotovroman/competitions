using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KMP_algo
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(KMP("dabc","abcdabc"));
            Console.ReadKey();       
        }

        static int KMP(string p,string s)
        {
            int[] prefix_fun = pref(p + "#" + s);
            for (int i = p.Length; i < prefix_fun.Length; ++i)
                if (prefix_fun[i] == p.Length)
                    return i - 2 * p.Length;
            return 0;
        }
        static int[] pref(string s)
        {
            int n = s.Length;
            int[] pi=new int[n];
            pi[0] = 0;
            for (int i = 1; i < n; ++i){
                int k = pi[i - 1];
                while ((k>0) && (s[i] != s[k]))
                    k = pi[k - 1];
                if (s[i] == s[k]) ++k;
                pi[i] = k;               
            } 
            return pi;
        }
    }
}

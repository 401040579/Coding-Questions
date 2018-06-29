using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace tripletsSumZero
{
    class Program
    {
        //O(n^3)time O(1)space
        private static void tripletsSumZero_1(int[] arr, int length)
        {
            bool isFound = false;

            for (int i = 0; i < length - 2; i++)
                for (int j = i + 1; j < length - 1; j++)
                    for (int k = j + 1; k < length; k++)
                        if (arr[i]+ arr[j]+ arr[k]==0)
                        {
                            Console.WriteLine("{" + arr[i] + "," + arr[j] + "," + arr[k] + "}");
                            isFound = true;
                        }
            if (!isFound)
                Console.WriteLine("not exist");
        }

        //O(n^2)time O(n)space
        private static void tripletsSumZero_2(int[] arr, int length)
        {
            bool isFound = false;

            for (int i = 0; i < length - 1; i++)
            {
                HashSet<int> myset = new HashSet<int>();

                for (int j = i + 1; j < length; j++)
                {
                    int target = -(arr[i] + arr[j]);

                    if (myset.Contains(target))
                    {
                        Console.WriteLine("{" + arr[i] + "," + target + "," + arr[j] + "}");
                        isFound = true;
                    }
                    else
                    {
                        myset.Add(arr[j]);
                    }
                }
            }
            if (!isFound)
                Console.WriteLine("not exist");
        }

        static void Main(string[] args)
        {
            int[] arr = { 0, -1, 2, -3, 1 };
            Console.WriteLine("1.");
            tripletsSumZero_1(arr, arr.Length);
            Console.WriteLine("2.");
            tripletsSumZero_2(arr, arr.Length);
        }
    }
}

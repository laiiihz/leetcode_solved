using System;

namespace valid_sudoku
{
    class Program
    {
        static void Main(string[] args)
        {
            Solution solution=new Solution();
            char[,] input=new char[9,9]
            {
                { '.','.','.','.','.','.','.','.','.'},
                { '.','.','.','.','.','.','.','.','.'},
                { '.','.','.','.','.','.','.','.','.'},
                { '.','.','.','5','.','.','.','.','.'},
                { '.','.','.','.','.','.','.','.','.'},
                { '.','.','.','.','.','.','.','.','.'},
                { '.','.','.','5','.','.','.','.','.'},
                { '.','.','.','.','.','.','.','.','.'},
                { '.','.','.','.','.','.','.','.','.'}
            };
            bool result=solution.IsValidSudoku(input);
            Console.WriteLine(result);
        }
    }
}




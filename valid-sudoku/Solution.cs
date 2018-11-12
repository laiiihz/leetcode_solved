using System;
using System.Collections;
public class Solution {
    public bool IsValidSudoku(char[,] board) {
        #region 横排列 
        for(int i=0;i<9;i++){
            Hashtable hashtable=new Hashtable();
            for(int j=0;j<9;j++){
                if(hashtable.Contains(board[i,j])&&board[i,j].Equals('.')==false)return false;
                else if(board[i,j].Equals('.')==false)hashtable.Add(board[i,j],board[i,j]);
            }
        }
        #endregion

        #region 纵排列 
        for(int j=0;j<9;j++){
            Hashtable hashtable=new Hashtable();
            for(int i=0;i<9;i++){
                if(hashtable.Contains(board[i,j])&&board[i,j].Equals('.')==false)return false;
                else if(board[i,j].Equals('.')==false)hashtable.Add(board[i,j],board[i,j]);
            }
        }
        #endregion

        #region 3x3排列
        Hashtable[] hashtableA=new Hashtable[9];
        for(int i=0;i<9;i++){
            hashtableA[i]=new Hashtable();
        }
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(hashtableA[3*(i/3)+j/3].Contains(board[i,j])&&board[i,j].Equals('.')==false)return false;
                else if(board[i,j].Equals('.')==false)hashtableA[3*(i/3)+j/3].Add(board[i,j],board[i,j]);
            }
        }

        #endregion


        return true;
    }

     
}
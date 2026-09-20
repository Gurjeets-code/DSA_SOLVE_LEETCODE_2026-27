class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
       
        int row=0;
        int col=0;
        for(string ch:commands){
        if(ch=="LEFT"){
            col--;
        }
        if(ch=="DOWN"){
            row++;
        }
        if(ch=="UP"){
            row--;
        }
        if(ch=="RIGHT"){
            col++;
        }
        }
        return (row*n)+col;

    }
};
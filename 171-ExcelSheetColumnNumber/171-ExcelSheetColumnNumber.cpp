// Last updated: 4/1/2026, 7:38:51 PM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int sum = 0;
        for(int i=0;i<columnTitle.size();i++){
            sum = sum * 26;
            switch (columnTitle[i]) {
                case 'A': sum = sum + 1;  break;
                case 'B': sum = sum + 2;  break;
                case 'C': sum = sum + 3;  break;
                case 'D': sum = sum + 4;  break;
                case 'E': sum = sum + 5;  break;
                case 'F': sum = sum + 6;  break;
                case 'G': sum = sum + 7;  break;
                case 'H': sum = sum + 8;  break;
                case 'I': sum = sum + 9;  break;
                case 'J': sum = sum + 10; break;
                case 'K': sum = sum + 11; break;
                case 'L': sum = sum + 12; break;
                case 'M': sum = sum + 13; break;
                case 'N': sum = sum + 14; break;
                case 'O': sum = sum + 15; break;
                case 'P': sum = sum + 16; break;
                case 'Q': sum = sum + 17; break;
                case 'R': sum = sum + 18; break;
                case 'S': sum = sum + 19; break;
                case 'T': sum = sum + 20; break;
                case 'U': sum = sum + 21; break;
                case 'V': sum = sum + 22; break;
                case 'W': sum = sum + 23; break;
                case 'X': sum = sum + 24; break;
                case 'Y': sum = sum + 25; break;
                case 'Z': sum = sum + 26; break;
            }
        }
        return sum;
    }
};
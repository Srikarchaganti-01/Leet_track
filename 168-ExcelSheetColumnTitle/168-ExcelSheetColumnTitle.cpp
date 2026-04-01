// Last updated: 4/1/2026, 7:38:54 PM
class Solution {
public:
    string convertToTitle(int columnNumber) {
        int num = columnNumber;
        string result = "";
        while(num>0){
            num--;
            int a = num % 26;
            switch(a){
                case 0 : result.push_back('A'); break;
                case 1 : result.push_back('B'); break;
                case 2 : result.push_back('C'); break;
                case 3 : result.push_back('D'); break;
                case 4 : result.push_back('E'); break;
                case 5 : result.push_back('F'); break;
                case 6 : result.push_back('G'); break;
                case 7 : result.push_back('H'); break;
                case 8 : result.push_back('I'); break;
                case 9 : result.push_back('J'); break;
                case 10 : result.push_back('K'); break;
                case 11 : result.push_back('L'); break;
                case 12 : result.push_back('M'); break;
                case 13 : result.push_back('N'); break;
                case 14 : result.push_back('O'); break;
                case 15 : result.push_back('P'); break;
                case 16 : result.push_back('Q'); break;
                case 17 : result.push_back('R'); break;
                case 18 : result.push_back('S'); break;
                case 19 : result.push_back('T'); break;
                case 20 : result.push_back('U'); break;
                case 21 : result.push_back('V'); break;
                case 22 : result.push_back('W'); break;
                case 23 : result.push_back('X'); break;
                case 24 : result.push_back('Y'); break;
                case 25 : result.push_back('Z'); break;
            }
            num = num/26;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
// Last updated: 4/1/2026, 7:39:54 PM
class Solution {
public:
    int val(char ch) {
            switch (ch) {
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
            }
            return 0;
        }
    int romanToInt(string s) {
        int count = 0;
        int I = 1;
        int V = 5;
        int X = 10;
        int L = 50;
        int C = 100;
        int D = 500;
        int M = 1000;
        for(int i=0;i<s.length();i++){
            if(val(s[i])<val(s[i+1])){
                if(s[i]=='I'&&s[i+1]=='V'){
                    count = count + 4;
                }
                if(s[i]=='I'&&s[i+1]=='X'){
                    count = count + 9;
                }
                if(s[i]=='X'&&s[i+1]=='L'){
                    count = count + 40;
                }
                if(s[i]=='X'&&s[i+1]=='C'){
                    count = count + 90;
                }
                if(s[i]=='C'&&s[i+1]=='D'){
                    count = count + 400;
                }
                if(s[i]=='C'&&s[i+1]=='M'){
                    count = count + 900;
                }
                i++;
            }
            else{
                switch(s[i]){
                    case 'I':
                        count = count + 1;
                        break;
                    case 'V':
                        count = count + 5;
                        break;
                    case 'X':
                        count = count + 10;
                        break;
                    case 'L':
                        count = count + 50;
                        break;
                    case 'C':
                        count = count + 100;
                        break;
                    case 'D':
                        count = count + 500;
                        break;
                    case 'M':
                        count = count + 1000;
                        break;
                }
            }
        }
        return count;
    }
};
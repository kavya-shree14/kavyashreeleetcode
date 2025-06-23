class Solution {
public:
    string intToRoman(int num) {
       string rom="";vector<int> s =     {1000, 900, 500, 400, 100,  90,  50,  40, 10,   9,   5,   4,  1};
        vector<string> sym = {"M", "CM","D", "CD","C", "XC","L", "XL","X", "IX","V","IV","I"};

        while (num>0){
           for (int i=0;i<s.size();i++){
            if (num>=s[i]){
                rom+=sym[i];
                num-=s[i];
                break;

            }
           } 
        }
        return rom;
    }
};  
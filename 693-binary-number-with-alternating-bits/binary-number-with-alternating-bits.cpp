class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool res = true;
        int numeroPre = n%2;
        n /= 2;
        int numero;
        while(n!=0 && res){
            numero = n%2;
            if(numero == numeroPre){
                res = false;
            }
            numeroPre = numero;
            n /= 2;
        }
        return res;
    }
};
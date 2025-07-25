class Solution {
public:
    bool isHappy(int n) {
        
        int slow = n, fast = n;
    
    auto nextNumber = [&](int x) {
        int sum = 0;
        while (x > 0) {
            int digit = x % 10;
            sum += digit * digit;
            x /= 10;
        }
        return sum;
    };

    do {
        slow = nextNumber(slow);               
        fast = nextNumber(nextNumber(fast));   
    } while (slow != fast);

    return slow == 1;
    }
};
class Solution {
public:
    /* Use of Floyd's cycle finding algo
    same as in Linked List Cycle finding */
    int nextNumber(int n){
        int newNumber = 0;
        while(n!=0){
            int num = n%10;
            newNumber += num*num;
            n = n/10;
        }
        return newNumber;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast= nextNumber(n);
        while(fast !=1 && fast!=slow){
            slow=nextNumber(slow);
            fast=nextNumber(nextNumber(fast));
        }
        return fast==1;
    }
};
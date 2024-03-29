class Bank {
public:
    vector<long long> balance;
    
    bool isValid(int acc){
        return !(acc<balance.size()+1) && (acc>0);
    }
    
    Bank(vector<long long>& balance) {
        this->balance=balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(isValid(account1) || isValid(account2) || balance[account1-1]<money) return false;
            balance[account1-1]-=money;
            balance[account2-1]+=money;
            return true;
        
        
    }
    
    bool deposit(int account, long long money) {
        if(isValid(account)) return false;
            balance[account-1]+=money;
            return true;
        
        
    }
    
    bool withdraw(int account, long long money) {
        if(isValid(account) || balance[account-1]<money)  return false;
            balance[account-1]-=money;
            return true;
    
       
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
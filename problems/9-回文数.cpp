bool isPalindrome(int x){
    if(x < 0 || x > 0 && x%10 == 0) return false;
    int y = 0;
    while(x >= y)
    {
        if(y == x || x/10 == y) return true;
        y = y*10 + x%10;
        x /= 10;
    }
    return false;
}


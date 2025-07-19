class BadLengthException{
    int length;
public:
    BadLengthException(int n):length(n){}
    
    int what()
    {
        return length;
    }
};
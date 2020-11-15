#define e 2.718281828
double Power(double x ,int y){
    double ans=1;
    if(y<0){
        x=1/x;
        y=y*-1;
    }
    for(int i=0;i<y;i++){
        ans*=x;
    }
    return ans;
}
double Exponent(int x){
    return Power(e, x);
}


